#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,q; cin >> n >> m;
    vector<string> v(n*m);
    for(auto &a: v)cin >> a;
    cin >> q;
    for(int i = 0; i < q; i++ ) {
        string p; cin >> p;
        auto it = find(v.begin(),v.end(), p);
        int index = (it - v.begin())+1;
        if(index % m != 0)cout << p << " " << (index / m) + 1 << "\n";
        else cout << p << " " << (index / m) << "\n";
    }

    return 0;
}