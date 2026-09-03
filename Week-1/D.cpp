#include <bits/stdc++.h>
using namespace std;
#define int long long
const int maxn=1e7+1;
vector<int>p[maxn];
int spf[maxn];
signed main(){
    for(int i=1;i<maxn;i++)spf[i]=i;
    for(int i=2;i<maxn;i++){
        if(spf[i]!=i)continue;
        for(int j=i*i;j<maxn;j+=i)spf[j]=min(spf[j],i);
    }
    int ans=1,n;cin>>n;
    for(int i=2;i<=n;i++){
        int x=i,cur=1;
        while(x!=1){
            int f=spf[x],cnt=0;
            while(x%f==0)cnt++,x/=f;
            cur*=(cnt+1);
        }
        ans+=cur*i;
    }
    cout<<ans;
}
