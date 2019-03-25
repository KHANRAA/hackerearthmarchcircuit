//
// Created by AKASH KHANRA on 2019-03-25.
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
#include <sstream>
#include <unordered_map>
#include <stack>

bool isPrime(ll n)
{

    if (n <= 1)
        return false;
    for (ll i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}
int main()
{
    fast;
    ll p,r;
    cin>>p>>r;
    queue<ll> q;
    for(ll i=p;i<=r;i++){
        q.push(i);
    }
    ll count1=0;
    while(!q.empty())
    {
        //cout<<q.size()<<" ";
        if(q.front()<10)
        {
            count1++;
            q.pop();
        }
        else
        {

            ostringstream str1;
            str1 << q.front();
            string s = str1.str();
            //cout<<s<<" ";
            bool flag=true;
            vector<ll> primes;
            for (ll j = 0; j<s.length()-1; j++)
            {
                string temp(1,s[j]);
                string temp1(1,s[j+1]);
                ll t1=0;
                ll t2=0;
                stringstream ss(temp);
                stringstream sss(temp1);
                ss>>t1;
                sss>>t2;
                if(isPrime(t1))
                    primes.push_back(t1);
                if(isPrime(t2))
                    primes.push_back(t2);
                if(__gcd(t1,t2)==1){
                    q.pop();
                    flag=false;
                    break;
                }

            }
            if(flag && (primes.size()>0)){
                ll count2 = 0;
                for (ll k =0; k < primes.size(); k++) {
                    if (q.front() % primes[k] == 0) {
                        count2++;
                    }

                }
                if (count2 == primes.size()) {
                    primes.clear();
                } else {
                    flag=false;
                    primes.clear();
                    q.pop();
                }
            }
            if(flag)
            {
                //cout<<q.front()<<" ";
                count1++;
                q.pop();
 
            }
        }
    }
    if(p==1)
        cout<<count1-1;
    else
        cout<<count1<<endl;
    // cout<<"chcke: "<<isPrime(1);

    return 0;
}