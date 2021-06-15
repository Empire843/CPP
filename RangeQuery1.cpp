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
        int n, q;
        cin >> n >> q;
        int a[n];
        input(a, n);
        int l, r;
        while(q--){
            cin >> l >> r;
            long long sum = 0;
            for (int i = l - 1; i < r;i++){
                sum += a[i];
            }
            cout << sum << endl;
        }
    }
}