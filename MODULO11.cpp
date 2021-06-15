#include <bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7;
long long solution(long long a, long long b, long long c){
    if(b == 0 || a == 0)
        return 0;
    long long tmp = solution(a, b / 2, c);
    if(b%2 != 0)
        return (a % c + 2 * (tmp % c)) % c;
    else
        return (2 * (tmp % c)) % c;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b, c;
        cin >> a >> b >> c;
        cout << solution(a, b, c) << endl;
    }
}   