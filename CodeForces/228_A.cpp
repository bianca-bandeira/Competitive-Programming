#include <bits/stdc++.h>
using namespace std;

int main() 
{
    map<long long,long long>freq;
    long long n;
    for(int i = 0; i < 4;i++){
        cin >> n;
        freq[n]++;
    }

    cout << (4 - freq.size()) << "\n";
    return 0;
}