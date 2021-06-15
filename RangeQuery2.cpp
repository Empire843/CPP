#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+1];
        for (int i = 0; i < n;i++){
            cin >> a[i];
        }
        int l, r;
        cin >> l >> r;
        int max = l;
        int min = r;
        int k = 0;
        for (int i = l; i < r;i++){
            if(a[i] >= a[max]){
                max = i;
            }else
                break;
        }
        for (int i = max; i < r;i++){
            if(a[i] < a[i+1]){
                cout << "No" << endl;
                k++;
                break;
            }
        }
        if(k==0)cout << "Yes" << endl;
    }
    return 0;
}