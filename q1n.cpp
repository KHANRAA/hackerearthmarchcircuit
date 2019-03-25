//
// Created by AKASH KHANRA on 2019-03-24.
//
//bizongo

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
    while(t--) {
        kk++;
        ll n, p;
        cin >> n >> p;
        ll arr[n];
       // vector<ll> nums;
        //unordered_map<ll, ll> c;
        for (ll i = 0; i < n; i++) {

            ll temp;
            cin >> temp;
            arr[i] = temp;
          //  nums.push_back(temp);
            //c[temp]++;
        }
       /* sort(nums.begin(), nums.end());
        bool check = false;
        vector<ll> counts;
        unordered_map<ll, ll>::iterator it;
        {
            for (it = c.begin(); it != c.end(); it++)
                if (it->second == p) {
                    check = true;
                    cout << "Case #" << kk << ": " << 0 << endl;
                    break;
                }

        }

        if (!check) {
         */
       priority_queue<ll> q;
            ll min1 = INT_MAX;
            for (ll i = 0; i < 10001; i++) {
                for (ll j = 0; j < n; j++) {
                    if (arr[j] <= i) {
                        q.push(i - arr[j]);
                    }
                }
                if (q.size() >= p) {
                    ll sum1 = 0;
                    ll count1 = 0;
                    me1:
                    while (q.size() > 0) {
                        sum1 += q.top();
                        q.pop();
                        count1++;
                        if (count1 == p) {
                         cout<<": "<<count1<<endl;
                            goto me1;
                        }
                    }
                    min1 = min(min1, sum1);
                }
                while (!q.empty()) q.pop();
            }
            cout << "Case #" << kk << ": " << min1 << endl;

    }
return 0;
}