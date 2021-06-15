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
        long long n;
        cin >> n;
        long long a[n];
        long long b[n];
        for (long long i = 0; i < n;i++){
            a[i] = -1;
        }
        for (long long i = 0; i < n; i++){
            long long tmp = 0;
            cin >> tmp;
            if (tmp >= 0 && tmp < n){
                a[tmp] = tmp;
            }
        }
        for (long long i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}