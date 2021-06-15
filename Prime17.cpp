#include <bits/stdc++.h>
using namespace std;
int isPrime(long long n){
    if(n<2)
        return 0;
    for (int i = 2; i <= sqrt(n);i++){
        if(n%i == 0)
            return 0;
    }
    return 1;
}
long long solution(long long l, long long r){
    long long count = 0;
    for (int i = l; i <= r;i++){
        long long kq = sqrt(i);
        if(isPrime(sqrt(i)) && i % kq == 0){
            cout << i << endl;
            count++;
        }
    }
    return count;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long l, r;
        cin >> l >> r;
        cout << solution(l, r);
    }
    return 0;
}