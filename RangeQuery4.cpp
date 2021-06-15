#include <bits/stdc++.h>
using namespace std;
long long max(long long a, long long b){
    return (a > b) ? a : b;
}
long long solution(int a[], int n){
    long long ans = a[0];
    long long res = a[0];
    for (int i = 1; i < n;i++){
        ans = max(a[i], ans + a[i]);
        res = max(ans, res);
    }
    return res;
}
int main(){
    int t;  
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n;i++)
            cin >> a[i];
        cout << solution(a, n) << endl;
    }
    return 0;
}