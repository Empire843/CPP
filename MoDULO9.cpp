#include<bits/stdc++.h> 
using namespace std;
long long p = 1e9 + 7;
int slove(int n, int k) { 
    if (k > n - k) 
        k = n - k;
    int C[k + 1]; 
    memset(C, 0, sizeof(C)); 
    C[0] = 1;
    for (int i = 1; i <= n; i++) { 
        for (int j = min(i, k); j > 0; j--) {
            C[j] = (C[j] + C[j - 1]) % p;
            cout << i << " " << j << " " << C[j] << endl;
        }
    } 
    return C[k];
} 
int main() { 
	int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        cout << slove(n, k) << endl;
    }
}