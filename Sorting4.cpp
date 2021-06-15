#include <bits/stdc++.h>
#include <queue>
using namespace std;
void Union(int a[], int n, int b[], int m){
    priority_queue<int, vector<int>, greater<int> > q;
    for (int i = 0; i < n;i++){
        q.push(a[i]);
    }
    for (int i = 0; i < m;i++){
        if(!binary_search(a,a+n,b[i])){
            q.push(b[i]);
        }
    }
    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
}
void Intersection(int a[], int n, int b[], int m){
    for (int i = 0; i < n;i++){
        if(binary_search(b,b+m,a[i])) cout << a[i] << " ";
    }
    cout << endl;
}
int main(){
    int t;  
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n;i++)
            cin >> a[i];
        for (int i = 0; i < m;i++)
            cin >> b[i];
        Union(a, n, b, m);
        Intersection(a, n, b, m);
    }
    return 0;
}