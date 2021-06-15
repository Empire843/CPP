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
        sort(a, a + n);
        int b[*max_element(a, a + n) + 3];
        reset(b);
        b[0] = 1;
        for (int i = 0; i < n;i++){
            if(a[i] > 0){
                b[a[i]] = 1;
            }
        }
        for (int i = 0; i < *max_element(a, a + n) + 3;i++){
            if(b[i] == 0){
                cout << i << endl;
                break;
            }
        }
    }
}