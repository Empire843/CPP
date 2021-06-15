#include <bits/stdc++.h>
using namespace std;

int mod(string a, long long m){
    long long res = 0;
    for (int i = 0; i < a.length();i++){
        res = (res * 10 + (int)a[i] - 48) % m;
    }
    return res;
}
long long solution(long long ans, long long b, long long m){
    long long res = 0;
    if(b == 1)
        res = ans;
    else {
        // sử dụng chia để trị để tính lũy thừa :))
        res = solution(ans, b / 2, m);
        res = (res * res) % m;
        if(b % 2 != 0)
            res = (res * ans) % m;
    }
    return res;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long b, m;
        string a;
        cin >> a >> b >> m;
        long long ans = mod(a, m);
        ans = solution(ans, b, m);
        cout << ans << endl;
    }
}