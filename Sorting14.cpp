//  @author: QUÁCH_ĐÌNH_KIÊN
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (long long i = 0; i < n; i++) cin >> a[i]
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
        for (int i = 0; i < n;i++){
            cin >> a[i];
        }
            sort(a, a + n);
        long long max = a[n - 1], min = a[0];
        long long b[max];
        reset(b);
        for (int i = 0; i < n;i++){
            b[a[i]] = 1;
        }
        int count = 0;
        for (int i = min; i <= max;i++){
            if(b[i] == 0){
                count++;
            }
        }
        cout << count << endl;
    }
}