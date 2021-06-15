#include <bits/stdc++.h>
using namespace std;
void solution(int n, int x, int a[]){
    for (int i = 0; i < n-1;i++){
        int pos = i;
        for (int j = i+1; j < n;j++){
            if(abs(x-a[j]) < abs(x-a[pos])){
                pos = j;
            }
        }
        // if(abs(x-a[i]) > min)
            swap(a[i], a[pos]);
    }
    for (int i = 0; i < n;i++){
        cout << a[i] << " ";
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        int a[100001];
        cin >> n >> x;
        for (int i = 0; i < n;i++){
            cin >> a[i];
        }
        solution(n, x, a);
        cout << endl;
    }
    return 0;
}