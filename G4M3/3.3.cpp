#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    map<string, int> freq;
    while(cin >> s){
        if(s == "FIM") break;
        else{
            freq[s]++;
            cout << s << " " << freq[s] << "\n";
        }
    }
    return 0;
}