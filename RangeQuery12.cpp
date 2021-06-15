//  @author: QUÁCH_ĐÌNH_KIÊN
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int solution(int a[], int b[], int n){
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){

        }
    }
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], b[n];
        input(a, n);
        input(b, n);
        int sum1 = 0, sum2 = 0;
        int max = 0;
        for (int i = 0; i < n;i++){
            sum1 = 0, sum2 = 0;
            int k = 0;
            for (int j = i; j >= 0;j--){
                sum1 += a[j];
                sum2 += b[j];
                if(sum1 == sum2){
                    k = i - j + 1;
                }
            }
            if(k > max)
                max = k;
        }
        cout << max << endl;
    }
}