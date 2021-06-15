#include <bits/stdc++.h>
using namespace std;

int solution(int a[], int n, int k){
    sort(a, a + n);
    for (int i = 0; i < n; i++){
        if (binary_search(a, a + n, a[i] - k)){
            return 1;
        }
    }
    return -1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n;i++){
            cin >> a[i];
        }
        cout << solution(a, n, k) << endl;
    }
    return 0;
}