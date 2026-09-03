//People who believe in miracles are as amazing as miracles themselves.
#include<bits/stdc++.h>
#define ll long long
using namespace std;
inline ll read(){
    ll x=0,f=1;char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-') f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9')x=(x<<3)+(x<<1)+(ch^48),ch=getchar();
    return x*f;
}

const int N=3e5+10;
int n,k,num[26],cnt; char s[N];

inline void solve(){
    n=read(),k=read(),memset(num,0,sizeof num);
    scanf("%s",s+1);
    for(int i=1;i<=n;++i) num[s[i]-'a']^=1;
    cnt=count(num,num+26,1);
    if(k<cnt-1) puts("NO"); else puts("YES");
}

signed main(){
#ifndef ONLINE_JUDGE
    freopen("../1.in","r",stdin);
    freopen("../1.out","w",stdout);
#endif
    for(int T=read();T;--T) solve();
    return 0;
}
