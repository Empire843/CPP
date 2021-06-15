#include <bits/stdc++.h>
using namespace std;

void Sync_with_stdio(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
void solution(int a[], int b[], int c[], int n1, int n2, int n3){
    int i = 0, j = 0, k = 0,ok = 0;
    while(i < n1 && j < n2 && k < n3){
        if(a[i] == b[j] && a[i] == c[k]){
            cout << a[i] << " ";
            ok = 1;
            i++, j++, k++;
        }else if(a[i] < b[j])i++;
        else if(b[j] < c[k])j++;
        else k++;
    }
    if(ok == 0)
        cout << -1;
    cout << endl;
}
int main(){
    Sync_with_stdio();
    int t;
    cin >> t;
    while(t--){
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        int a[n1], b[n2], c[n3];
        for (int i = 0; i < n1;i++)cin >> a[i];
        for (int i = 0; i < n2;i++)cin >> b[i];
        for (int i = 0; i < n3;i++)cin >> c[i];
        solution(a, b, c, n1, n2, n3);
    }
    return 0;
}