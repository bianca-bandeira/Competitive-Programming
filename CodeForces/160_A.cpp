#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    long long soma = 0;
    vector<int> v(n);
    for(auto &a : v) {
        cin >> a;
        soma+=a;
    }

    sort(v.begin(),v.end());
    vector<int> pref(n);

    partial_sum(v.begin(), v.end(), pref.begin());
    int buscar = pref[n-1]/2;

    auto it = lower_bound(pref.begin(), pref.end(), buscar);

    cout << abs(it - pref.end());

    return 0;
}