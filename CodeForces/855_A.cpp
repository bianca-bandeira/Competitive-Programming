#include <bits/stdc++.h>
using namespace std;

int main (){
    int n; cin >>n;
    string s;
    set<string> lista;
    vector<string> resp(n);
    for(int i = 0; i < n; i++){
        cin >> s;
        auto tem = binary_search(lista.begin(), lista.end(), s);
        if(tem) resp[i] = "YES\n";
        else {
            lista.insert(s);
            resp[i] = "NO\n";
        }
    }

    for(auto &x : resp) cout << x ;
    return 0;
}