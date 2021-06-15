#include <bits/stdc++.h>
using namespace std;
void sync_with_stdio(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
long long solution(int n, int arr[]){
    long long ans = 0;
    long long res = arr[0];
    for (int i = 1; i < n; i++) {
        long long temp = res;
        cout << res << " " << ans + arr[i] << " " << ans << endl;
        res = max(ans + arr[i], res);
        ans = temp;
        
    }
    return res;
}
int main(){
    sync_with_stdio();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n;i++)
            cin >> a[i];
        cout << solution(n, a) << endl;
    }
    return 0;
}
