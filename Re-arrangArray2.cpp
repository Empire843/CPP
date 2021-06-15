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
        input(a, n);
        long long p = 0;
        for (int i = 0; i < n;i++){
            if(a[i] == 0)
                p++;
        }
        for (int i = 0; i < n;i++){
            if(a[i] != 0){
                cout << a[i] << " ";
            }
        }
        for (int i = 0; i < p;i++){
            cout << 0 << " ";
        }
        cout << endl;
    }
}