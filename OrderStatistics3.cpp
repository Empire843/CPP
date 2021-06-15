#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
void sync_with_stdio(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int findElementMin(int n, int k, int a[101][101]){
    int b[100000];
    int len = 0;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            b[len++] = a[i][j];
        }
    }
    sort(b, b + len);
    // for (int i = 0; i < len;i++){
    //     cout << b[i] << " ";
    // }
    
    return b[k-1];
}
int main(){
    sync_with_stdio();
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[101][101];
        for (int i = 0; i < n;i++)
            for (int j = 0; j < n;j++)
                cin >> a[i][j];
        cout << findElementMin(n, k, a) << endl;
    }
    return 0;
}
