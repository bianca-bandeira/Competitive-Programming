#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h,m,s,qtd = 0, x = 32;
    vector<long long> intervalo = {79200, 21599};
    char c;
    while(x--){
        cin>>h>>c>>m>>c>>s;
        if(h > 23 || m > 59 || s > 59)continue;
        int hs = h * 3600;
        int min = m * 60;
        int seg = hs + min + s;
        if(seg >= intervalo[0] || seg <= intervalo[1])qtd++;
    } 

    cout <<  qtd << "\n";
    return 0;
}