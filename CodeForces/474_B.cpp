#include <bits/stdc++.h>
using namespace std;

int main (){
    int N, Q; cin >> N;

    vector<int> v(N);
    for(auto &a : v)cin >> a;

    partial_sum(v.begin(),v.end(),v.begin());


    cin >> Q;

    while(Q--){
        long long num; cin >> num;
        long long e = -1, d = N;

        while(d-e > 1){
            int meio = (d+e)/2;
            if(v[meio] >= num) d = meio;
            else e = meio;
        }

        cout << d+1 << "\n";
    }

    return 0;
}