#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,q; cin >> n >> m;
    map<string, int> dic;
    int ind = 1;
    while(n--){
        string s;
        for(int i = 0; i < m; i++){
            cin>>s;
            dic[s] = ind;
        }
        ind++;
    }
    cin>>q;
    while(q--){
        string p; cin >> p;
        auto it = dic.find(p);
        cout << it->first << " " << it->second << "\n";
    }
    return 0;
}