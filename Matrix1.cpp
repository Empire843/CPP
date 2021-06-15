#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n][m];
        int b[n][m];
        for (int i = 0; i < n;i++){
            for (int j = 0; j < m;j++){
                cin >> a[i][j];
                b[i][j] = a[i][j];
            }
        }
        int p = min(n / 2, m / 2);
        int d = 0;
        int x = n - 1, y = m - 1;
        while(d < p){
            for (int i = d; i <= y-1;i++){
                b[d][i+1] = a[d][i];
            }
            for (int i = d; i <= x-1;i++){
                b[i+1][y] = a[i][y];
            }
            for (int i = y; i > d;i--){
                b[x][i-1] = a[x][i];
            }
            for (int i = x; i > d;i--){
                b[i-1][d] = a[i][d];
            }
            d++;
            x--;
            y--;
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cout << b[i][j] << " ";
            }
            // cout << endl;
        }
        cout << endl;
    }
    return 0;
}