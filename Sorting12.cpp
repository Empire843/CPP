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
        long long n, m;
        cin >> n >> m;
        long long a[n], b[m];
        input(a, n);
        input(b, m);
        long long max = *max_element(a, a + n);
        long long min = *min_element(b, b + m);
        cout << max * min << endl;
    }
}