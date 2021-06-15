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
        long long n, x;
        
        cin >> n >> x;
        long long a[n];
        input(a, n);
        long long k = 0;
        for (long long i = 0; i < n;i++){
            if(a[i] == x){
                cout << i+1 << endl;
                k++;
                break;
            }
        }
        if(k == 0)
            cout << -1 << endl;
    }
}