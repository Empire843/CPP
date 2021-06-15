//  @author: QUÁCH_ĐÌNH_KIÊN
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> vt;
        int a[n][k];
        int len = 0;
        for (int i = 0; i < n;i++){
            for (int j = 0; j < k;j++){
                cin >> a[i][j];
                vt.push_back(a[i][j]);
            }
        }
        sort(vt.begin(),vt.end());
        for (int i = 0; i < vt.size();i++){
            cout << vt[i] << " ";
        }
        cout << endl;
    }
}