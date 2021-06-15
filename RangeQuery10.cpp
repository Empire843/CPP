#include <bits/stdc++.h>
using namespace std;
long long max(long long a, long long b){
    return (a > b) ? a : b;
}
int solution(int a[], int n){
    int res = 0;
    int l = 0, r = n - 1;
    while (l < r){
        if(a[l] < a[r]){
            a[l+1] += a[l];
            l++;
            res++;
            continue;
        }
        if(a[l] > a[r]){
            a[r-1] += a[r];
            r--;
            res++;
            continue;
        }
        l++;
        r--;
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