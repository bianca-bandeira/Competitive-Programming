#include <bits/stdc++.h>
#define ll long long
#define vl vector<long long>
#define all(x) (x).begin(), (x).end()
using namespace std;



int main(){
    ll n, q, a; cin >> n >> q;
    multimap <ll, ll> flores;
    ll qtd_dia = 1;
    ll flor = n;

    vl v(n), v1(n);
    for (auto &a: v)cin >>a;
    for (auto &j: v1)cin >>j;

    for (int i = 0; i < n; i++){
        flores.insert({v[i],v1[i]});
    }

    for(auto &x: flores)cout << x.first << " " << x.second << "\n";

    ll cont = 1;
    while(flor < q){
        auto aux = flores.begin();
        if(aux->second == 0){
            flores.erase(aux->first);
        }
        else if(aux->first == cont){
            flor++;
            aux->second--;
            cont = 1;
            
        }
        else{
            cont++;
        }
        qtd_dia++;
        // cout << "dia:" << qtd_dia << " -> " << flor << "\n";
        // for(auto &x: flores)cout << x.first << " " << x.second << "\n";
        // cout << "-----------------\n";
    }

    cout << qtd_dia;

    return 0;
}