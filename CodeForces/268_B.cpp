#include <bits/stdc++.h>
using namespace std;

int main (){
    int n; cin >>n;
    int poss;
    int resp = 0;
    for(int i = 0; i < n; i++){
        poss = n - i;
        int err = poss - 1;
        resp += err * (i+1);
        resp++;
    }
    cout << resp << "\n";
    return 0;
}