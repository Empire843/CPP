#include<bits/stdc++.h>
using namespace std;
const long long oo = 1e6+5;
long long  a[oo], F[oo];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
		long long n,k; 
        cin >> n >> k;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            F[i] = 0;
        }
        // quy hoạch động
        sort(a, a + n);
        long long ind = 0, sum = 0;
        for (int i = 0; i < n; i++){
            F[i] = ((i == 0) ? 0 : F[i - 1] - 1);
            // cout << F[i] << endl;
            for (int j = ind + 1; j < n; j++){
                cout << j << endl; 
                if(a[j] - a[i] >= k)
                    break;
                else{
                    ind++;
                    F[i]++;
                }
            }
            sum += F[i];
        }
        cout << sum << endl;
    }
}