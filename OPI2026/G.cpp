#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t,n,k1,k2;
    cin >> t;
    while(t--){
        cin>>n>>k1>>k2;
        string s; cin>> s;
        s += 'x';
        long long cont = 0, qtd = 0, vlr;
        if(k2 - k1 >= k1) vlr = k1;
        else vlr = k2;
        for(int i = 0; i <= n; i++){
            if(s[i] == '1'){
                cont++;
                if(cont==2){
                    if(vlr == k1) qtd += cont*vlr;
                    else qtd += vlr;
                    cont = 0;
                }
            }
            else if(cont==2){
                    qtd += vlr;
                    cont = 0;
                }
            else {
                if(cont == 1) qtd+=k1;
                cont = 0;
            }
        }
        cout << qtd << "\n";
    }
    return 0;
}