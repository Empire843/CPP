#include <bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7;

long long solution(int n, int a[], int x){
    long long res = a[n-1];
    long long k = 1;
    for (int i = n - 2; i >= 0;i--){
        k = (k * x) % mod;
        res = (res + a[i] * k) % mod;
    }
    return res;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n;i++)
            cin >> a[i];
        cout << solution(n, a, x) << endl;
    }
}   