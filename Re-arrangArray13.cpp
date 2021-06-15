#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a1[n+1];
        int a2[m+1];
        // int f[n];
        // priority_queue<int, vector<int>, greater<int>> q;
        for (int i = 1; i <= n;i++)
            cin >> a1[i];
        for (int i = 1; i <= m;i++)
            cin >> a2[i];
        sort(a1+1, a1 + n + 1);
        long long min=a1[1]-1; //?
        for (int i = 1; i <= m;i++){
            for (int j = 1; j <= n;j++){
                if(a1[j] == a2[i]) {
                    cout << a1[j] << " ";
                    a1[j] = min;//?
                }else if(a1[j]>a2[i]) break;
            }
        }
        for (int i = 1; i <= n;i++){
            if(a1[i] > min)
                cout << a1[i] << " ";
        }
        cout << endl;
    }
    return 0;
}