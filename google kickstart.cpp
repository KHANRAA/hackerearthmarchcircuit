//
// Created by AKASH KHANRA on 2019-03-24.
//
#include<iostream>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <stack>
int main()
{
    fast;
    ll t;
    cin>>t;
    ll kk=0;
    while(t--)
    {
        kk++;
        ll n,p;
        cin>>n>>p;
        vector<ll> nums;
        unordered_map<ll,ll> c;
        for(ll i=0;i<n;i++)
        {
            ll temp;
            cin>>temp;
            nums.push_back(temp);
            c[temp]++;

        }
        sort(nums.begin(),nums.end());
         bool check=false;
        unordered_map<ll,ll>:: iterator it;
        {
            for(it=c.begin();it!=c.end();it++)
            if(it->second==p){
                check=true;
                cout<<"Case #"<<kk<<": "<<0<<endl;
                break;
            }

        }
        if(!check)
        {
            stack<ll> st;
            for(auto x : nums)
            {
                st.push(x);
            }
            while(st.size()!=p){
                st.pop();
            }
            ll sum=0;
            ll togo=st.top();
            for(ll i=0;i<st.size()-1;i++)
            {
                    ll nn=togo-nums[i];
                    sum+=nn;
            }

            cout<<"Case #"<<kk<<": "<<sum<<endl;
        }




    }


return 0;

}
