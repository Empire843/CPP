//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
long long isPrime(long long n){
    if(n < 2)
        return 0;
    for (long long i = 2; i <= sqrt(n);i++){
        if(n % i == 0) return 0;
    }
    return 1;
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long max = 0;
        for (long long i = 2; i <= sqrt(n);i++){
            while (n % i == 0 && isPrime(i)){
                max = i;
                n /= i;
            }
        }
        if(n > 1)
            max = n;
        cout << max << endl;
    }
}