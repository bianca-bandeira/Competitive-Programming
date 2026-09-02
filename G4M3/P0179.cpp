#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    map<string,string> dic;
    bool aux = true;
    while(n--){
        string t,p;
        cin>>t>>p;
        auto it = dic.find(t);
        if(it != dic.end() && it->second != p){
            aux = false;
        }
        else dic[t] = p;
    }

    (aux) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}