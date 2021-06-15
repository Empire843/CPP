#include <bits/stdc++.h>
using namespace std;
void solution(int a[], int n){
    sort(a, a + n);
    int t = n / 2;
    if(n % 2 != 0)
        t = n / 2 + 1;
    for (int i = 0; i < n/2;i++){
        cout << a[n-i-1] << " " << a[i] << " ";
    }
    if(n%2 != 0)
        cout << a[n / 2];
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
