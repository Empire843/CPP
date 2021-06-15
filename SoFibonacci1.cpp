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
        int n;
        cin >> n;
        int f0 = 0, f1 = 1, fn = 1;
        int k = 2;
        for (int i = 2; i <= n;i++){
            fn = (f0 + f1) % mod;
            f0 = f1 % mod;
            f1 = fn % mod;
        }
        cout << fn << endl;
    }
}