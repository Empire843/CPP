#include <bits/stdc++.h>
using namespace std;
void solution(int a[], int n){
    int zero = 0;
    for (int i = 0; i < n - 1;i++){
        if(a[i] == 0)
            zero++;
        if(a[i] == a[i+1] && a[i+1] != 0){
            a[i] *= 2;
            a[i + 1] = 0;
            // zero++;
        }
    }
    if(a[n-1] == 0)
        zero++;
    for (int i = 0; i < n;i++){
        if(a[i] != 0)
            cout << a[i] << " ";
    }
    
    for (int i = 0; i < zero;i++){
            cout << 0 << " ";
    }
    cout << endl;
}   
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n;i++){
            cin >> a[i];
        }
        solution(a, n);
    }
    return 0;
}
