#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    vector<string> v;
    while(cin >> s){
        if(s == "FIM") break;
        else{
            if(s == "PROXIMO"){
                cout << "PROXIMO: "<< v[0] << "\n";
                v.erase(v.begin());
            }
            else{
                v.push_back(s);
                cout << "FILA: ";
                for( auto x : v) cout << x << " ";
                cout << "\n";
            }
        }
    }
    return 0;
}