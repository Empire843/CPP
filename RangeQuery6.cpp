#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
	int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n + 1];
        int f[n + 1];
        for (int i = 0; i < n;i++){
            cin >> a[i];
            f[i] = 0;
        }
        long long max = 0;
        long long sum = 0;
        for (int i = 0; i < n;i++){
            for (int j = 0; j < i; j++){
                if(a[i] > a[j]) {
                    f[i] =                                                              
                }
            }
        }
    }
	return 0;
}