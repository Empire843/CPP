#include <bits/stdc++.h>
using namespace std;
int solution(int a[], int n) {
    int f[n]; 
    f[0] = 1;
    for (int i = 1; i < n; i++ )  { 
        f[i] = 1; 
        for (int j = 0; j < i; j++ )   
            if ( a[i] > a[j] && f[i] < f[j] + 1)  
                f[i] = f[j] + 1;  
    } 
    for (int i =0; i < n; i++ )  {
        cout << f[i] << " ";
    }
    cout << endl;
    return *max_element(f, f+n); // trả về giá trị lớn nhất trong mảng
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 0; i < n;i++)
            cin >> a[i];
        cout << solution(a, n) << endl;
    }
    return 0;
}