#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q, moeda; cin >> n;
    vector<int> v(n);
    for(auto &a : v) cin >> a;

    sort(v.begin(),v.end());

    cin >> q;
    while(q--){
        cin >> moeda;

        int lb = -1, ub = n;
        while(ub-lb > 1){
            int m = (ub+lb)/2;
            if(v[m] > moeda){
                ub = m;
            }
            else lb = m;
        }

        cout << ub << "\n";
    }
    return 0;
}