#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 0; i < n;i++)
            cin >> a[i];

        // int f[n + 1];
        // f[0] = a[0];
        // int max = a[0];
        long long ans;
        long long max = -999999999;
        for (int i = 0; i < n;i++){
            ans = 1;
            for (int j = i; j >=0;j--){
                ans *= a[j];
                // cout << ans << endl;
                if(ans > max)
                    max = ans;
                // if(ans = 0)
                //     ans = max;
            }
        }
        cout << max << endl;
    }
    return 0;
}