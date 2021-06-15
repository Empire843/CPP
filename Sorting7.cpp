#include <bits/stdc++.h>
#include <queue>
using namespace std;
void solution(int a[], int n){
    int b[n];
    for (int i = 0; i < n;i++){
        b[i] = a[i];
    }
    sort(b, b + n);
    int l = 0, r = n-1;
    for (int i = 0; i < n;i++){
        if(b[i] != a[i]){
            l = i;
            break;
        }
    }
    for (int i = n-1; i >=0 ;i--){
        if(b[i] != a[i]){
            r = i;
            break;
        }
    }
    cout << l+1 << " " << r+1 << endl;
}
int main(){
    int t;  
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n;i++)
            cin >> a[i];
        solution(a, n);
    }
    return 0;
}