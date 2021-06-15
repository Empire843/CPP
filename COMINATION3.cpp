#include <bits/stdc++.h>
using namespace std;
int a[100000];
bool ok[10000]; 
int n, k;
void Print(){
    for (int i = 1; i <= n;i++){
        cout << a[i];
    }
    cout << " ";
}
// void Born(){
//     int i = n-1;
//     while (i > 0 && a[i] > a[i+1])
//         i--;
//     if(i == 0)
//         ok = false;
//     else{
//         int k = n;
//         while(a[i] > a[k])
//             k--;
//         swap(a[i], a[k]);
//         int c = n, r = i + 1;
//         while(r < c){
//             swap(a[c], a[r]);
//             r++;
//             c--;
//         }

//     }
// }
void Try(int i){
    for (int j = 1; j <= n;j++){
        if(!ok[j]){
            a[i] = j;
            ok[j] = true;
            if(i == n){
                Print();
            }else
                Try(i + 1);
            ok[j] = false;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        
        cin >> n;
        // for (int i = 1; i <= n;i++)
        //     a[i] = i;
        Try(1);
        // while(ok){
        //     Print();
        //     Born();
        // }
        cout << endl;
    }
    return 0;
}