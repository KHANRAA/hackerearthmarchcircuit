#include <iostream>
using namespace std;
#include <vector>
#include <math.h>
#include <string>
#include <cmath>

#define ll long long
#define boost ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int main()
{
    boost;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n1;
        cin>>n1;
        vector<ll> nums;
        float n=float(n1);

        float ap1=(n/2)*(2+(n-1));

        ll ap=int(ap1);
        //cout<<ap;
        ll mul=1;
        for(ll i=0;i<n;i++)
        {
            nums.push_back(i+1);
        }
        for(auto x : nums)
        mul*=x;
        if(mul%ap==0)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


    return 0;
}