#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> v(n);
    for(auto &a: v)cin >> a;
    sort(v.begin(), v.end());
    int r = v[n-1] - v[n-2];
    bool aux = true;
    for(int i = n-1; i >= 1; i--){
        if(v[i] - v[i-1] != r){
            aux = false; break;
        }
    }
    (aux) ? cout << "TRUE\n" : cout << "FALSE\n";
    return 0;
}