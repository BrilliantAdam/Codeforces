#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+10;
int a[maxn],b[maxn],mp[maxn];
int main()
{
    int n,x;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>x,a[x]=i;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(a[x]-i>=0)mp[a[x]-i]++;
        else mp[n+a[x]-i]++;
    }
    int ans=0;
    for(int i=0;i<=n;i++)
    {
        ans=max(ans,mp[i]);
    }
    cout<<ans<<endl;
    return 0;
}
