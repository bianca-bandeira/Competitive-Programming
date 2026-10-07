#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, int> dic;
    dic["Tetrahedron"] = 4;
    dic["Cube"] = 6;
    dic["Octahedron"] = 8;
    dic["Dodecahedron"] = 12;
    dic["Icosahedron"] = 20;

    long long n;
    cin >> n;
    int qtd = 0;
    while (n--)
    {
        string s; cin >> s;
        qtd += dic[s]; 
    }
    cout << qtd << "\n";
    return 0;
}