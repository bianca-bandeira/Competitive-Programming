#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> pessoas(n);
    for(auto &a: pessoas)cin >> a;
    int hrsPaul = pessoas[n-1];
    for(int i = 0; i < n-1; i++){
        if(pessoas[i] > hrsPaul) cout << pessoas[i] << "\n";
    }

    return 0;
}