#include <bits/stdc++.h>
using namespace std;
long long solution(string s, long long m){
    long long res = 0;
    for (int i = 0; i < s.size();i++){
        res = (res * 10 + ((int)s[i]-48)) % m;
        cout << res << endl;
    }
    return res;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string n;
        long long m;
        cin >> n;
        cin >> m;
        cout << solution(n, m) << endl;
    }
    return 0;
}