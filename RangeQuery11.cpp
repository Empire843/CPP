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
        int min = INT_MAX;
        for (int i = 0; i < n - 1;i++){
            if(a[i+1] - a[i] < min)
                min = a[i + 1] - a[i];
        }
        cout << min << endl;
    }
}