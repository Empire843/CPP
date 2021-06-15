#include <bits/stdc++.h>
using namespace std;
void solution(int a[], int n){
    sort(a, a + n);
    int t = n / 2;
    if(n % 2 != 0)
        t = n / 2 + 1;
    for (int i = 0; i < t;i++){
        cout << a[i] << " ";
        if(i+t < n)
            cout << a[i + t] << " ";
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
