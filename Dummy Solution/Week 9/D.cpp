#include<bits/stdc++.h>
#define f(i,x,y) for(int i=x;i<=y;i++)
#define pb push_back
#define lb lower_bound
#define mid (l+r)/2
#define L k*2
#define R k*2+1
#define ls L,l,mid
#define rs R,mid+1,r
using namespace std;
const int N=2e6+9;
int n,w,a[N],b[N],c[N],d[N],vx[N],vy[N],xl,yl,x,y,z,mx[N],mn[N],v[N],as;
vector<int>q[N];set<int>s[N];
void PU(int k)
{
	mn[k]=min(mn[L],mn[R]);mx[k]=max(mx[L],mx[R]);
	if(!s[k].empty()){w=*s[k].rbegin();if(v[w])mn[k]=max(mn[k],w);else mx[k]=max(mx[k],w);}
	if(mx[k]<mn[k])mx[k]=0;
}
void C(int k,int l,int r)
{
	if(x<=l&&r<=y){if(z)if(s[k].count(z))s[k].erase(z);else s[k].insert(z);PU(k);return;}
	if(x<=mid)C(ls);if(mid<y)C(rs);PU(k);
} 
signed main()
{
	scanf("%d",&n);
	f(i,1,n)scanf("%d%d%d%d",&a[i],&b[i],&c[i],&d[i]),vx[++xl]=a[i],vx[++xl]=c[i],vy[++yl]=b[i],vy[++yl]=d[i];
	sort(vx+1,vx+xl+1);xl=unique(vx+1,vx+xl+1)-vx-1;sort(vy+1,vy+yl+1);yl=unique(vy+1,vy+yl+1)-vy-1;
	f(i,1,n)
	a[i]=lb(vx+1,vx+xl+1,a[i])-vx,c[i]=lb(vx+1,vx+xl+1,c[i])-vx,
	b[i]=lb(vy+1,vy+yl+1,b[i])-vy,d[i]=lb(vy+1,vy+yl+1,d[i])-vy-1,
	q[a[i]].pb(i),q[c[i]].pb(i);
	f(i,1,xl)
	{
		for(int j:q[i])x=b[j],y=d[j],z=j,C(1,1,yl);
		while(mx[1])++as,v[w=mx[1]]=1,x=b[w],y=d[w],z=0,C(1,1,yl);
	}
	cout<<as+1;
	return 0;
}
