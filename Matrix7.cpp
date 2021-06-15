#include <bits/stdc++.h>
using namespace std;
void sync_with_stdio(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        sync_with_stdio();
        int n;
        cin >> n;
        int a[n + 1][n + 1];
        for (int i = 0; i < n;i++){
            for (int j = 0; j < n;j++){
                cin >> a[i][j];
                
            }
        }
        // cout << "n=" << n << endl;
        for (int i = 0; i < n;i++){
            for (int j = 0; j < n;j++){
                // cout << i << " " << j << endl;
                if(i == 0 || i % 2 == 0){
                    cout << a[i][j] << " ";
                }else
                    cout << a[i][n - 1 - j] << " ";
            }
            // cout << endl;
        }
        cout << endl;
    }
    return 0;
}