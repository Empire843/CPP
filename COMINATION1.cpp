//  @author: QUÁCH_ĐÌNH_KIÊN
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int a[1001];
void Try(int i, int n){
    for (int j = 0; j <= 1;j++){
        a[i] = j;
        if(i == n-1){
            for (int o = 0; o <= i;o++){
                cout << a[o];
            }
            cout << " ";
        }else
            Try(i + 1, n);
    }
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        reset(a);
        Try(0, n);
        cout << endl;
    }
}