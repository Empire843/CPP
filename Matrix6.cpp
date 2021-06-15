#include <bits/stdc++.h>
using namespace std;
void sync_with_stdio(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main(){
    sync_with_stdio();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n + 1][n + 1];
        for (int i = 0; i < n;i++){
            for (int j = 0; j < n;j++){
                cin >> a[i][j];
                
            }
        }
        for (int i = 0; i < n;i++){
            for (int j = 0; j < n;j++){
                if(i == 0 || j == 0 || j == n - 1 || i == n - 1)
                    cout << a[i][j] << " ";
                else
                    cout << " " << " ";
            }
            cout << endl;
        }
    }
    return 0;
}