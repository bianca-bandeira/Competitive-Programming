#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    set<char> titulos;
    string t;
    n++;
    while(n--){
        getline(cin,t);
        if(t[0] >= 'A' && t[0] <= 'Z') titulos.insert(t[0]);
    }
    // for(auto x: titulos) cout << x << " \n";
    cout << titulos.size() << "\n";
    return 0;
}