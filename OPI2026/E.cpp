#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n,l,r; cin>>n;
    long long num;
    vector<long long> v = {1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144};
    while(n--){
        cin>>l>>r;
        auto it = lower_bound(v.begin(),v.end(),l);
        if(it == v.end()){
            auto aux = v.rbegin();
            num = *aux;
        } 
        else num = *it;
        // cout << num << "\n";
        long long cont = 0;
        while(num <= r){
            if(num >= l)cont++;
            num = num<<1;
        }
        cout << cont << "\n";
    }
    
    return 0;
}