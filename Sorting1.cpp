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
        int a[n];
        input(a, n);
        sort(a, a + n);
        int l = 0, r = n - 1;
        while(l < r){
            cout << a[r] << " " << a[l] << " ";
            l++, r--;
        }
        if(n % 2 != 0)  
            cout << a[n / 2];

        cout << endl;
    }
}