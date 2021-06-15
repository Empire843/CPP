#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n;i++)
            cin >> a[i];

        // int f[n + 1];
        // f[0] = a[0];
        // int max = a[0];
        int f[n] = {0};
        f[0] = a[0] * a[1];
        f[n - 1] = a[n - 1] * a[n - 2];
        for (int i = 1; i < n-1;i++){
            f[i] = a[i - 1] * a[i + 1];
        }
        for (int i = 0; i < n;i++){
            cout << f[i] << " ";
        }
        cout << endl;
    }
    return 0;
}