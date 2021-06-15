#include <bits/stdc++.h>
using namespace std;
void sync_with_stdio(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int a[101][101];
void solution(int m, int n){
    priority_queue<int, vector<int>, greater<int>> q1;
    priority_queue<int, vector<int>, greater<int>> q2;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            if(a[i][j] == 1){
                q1.push(i);
                q2.push(j);
            }
        }
    }
    while(!q1.empty()){
        for (int i = 0; i < m;i++){
            a[q1.top()][i] = 1;
        }
        q1.pop();
    }
    while(!q2.empty()){
        for (int i = 0; i < n;i++){
            a[i][q2.top()] = 1;
        }
        q2.pop();
    }
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
} 
int main(){
    sync_with_stdio();
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n;i++){
            for (int j = 0; j < m;j++){
                cin >> a[i][j];
            }
        }
        solution(m, n);
    }
    return 0;
}