#include<bits/stdc++.h>
#define ll  long long

using namespace std;
void shanthi()
{
    ll n;
    cin>>n;
    ll a[n+1];
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    char last = 'f';

    for(ll i=1;i<=n;i++)
    {
        if(i==n)
            break;
        if(a[i]!=1)
            break;
        else{
            if(last=='f')
                last='s';
            else
                last='f';
        }
    }
    if(last=='f')
    {
        cout<<"First"<<endl;
    }
    else
    {
        cout<<"Second"<<endl;
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        shanthi();
    }
    return 0;
}

