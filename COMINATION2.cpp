#include <bits/stdc++.h>
using namespace std;
bool ok;
int n, k;
int a[1000000];
void sinh(){
    int i = k;
	while (i > 0 && a[i] == n-k+i)
        i--; 
    if (i > 0) {
        a[i] = a[i] + 1;      
        for (int j = i+1; j<=k; j++)
            a[j] = a[i] + j - i;
    } 
	else ok = false; //OK =0 nếu đã đến tập con cuối cùng
}
void in(){
    for (int i = 1; i <= k;i++){
        cout << a[i];
    }
    cout << " ";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ok = true;
        cin >> n >> k;
        for (int i = 1; i <= k;i++){
            a[i] = i;
        }
        while(ok){
            in();
            sinh();
        }
        cout << endl;
    }
    return 0;
}