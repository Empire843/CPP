#include <bits/stdc++.h>
using namespace std;
void sync_with_stdio(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int Prime(int n){
    if(n<2)
        return 0;
    for (int i = 2; i <= sqrt(n);i++){
        if(n%i == 0)
            return 0;
    }
    return 1;
}
int main(){
    sync_with_stdio();
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int k = 0;
        for (int i = 1; i <= x;i++){
            if(__gcd(i,x) == 1){
                // cout << i << " ";
                k++;
            }
        }
        // cout << k << endl;
        if(Prime(k))
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}