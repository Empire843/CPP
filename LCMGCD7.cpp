#include <bits/stdc++.h>
using namespace std;
long long lcm(long long x, long long y, long long z) { 
    long long res = ((x * y) / (__gcd(x, y))); 
    return ((z * res) / (__gcd(res, z))); 
}
long long solution(long long x, long long y, long long z, long long n){
    long long ans = lcm(x, y, z);
    long long k = pow(10, n - 1);
    long long remind = k % ans;
    if(remind == 0)
        return k;

    k += ans - remind;
    if(k < pow(10,n))
        return k;
    else
        return -1;
}
int main(){
    // int t;
    // cin >> t;
    // while(t--){
    //     long long x, y, z, n;
    //     cin >> x >> y >> z >> n;
    //     cout << solution(x, y, z, n) << endl;
    // }
    cout << 1000 / 30;
    return 0;
}