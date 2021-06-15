#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    int *a;
    priority_queue<int, vector<int>, greater<int>> q;
    while(t--){
        int n;
        cin >> n;
        a = new int[n+5];
        for (int i = 0; i < n;i++){
            cin >> a[i];
        }
        int x, k;
        cin >> k >> x;
        
        int l = 0, r = n - 1;
        if(x > a[r]){
            while(k--){
                q.push(a[r--]);
            }
        }else if(x < a[l]){
            while(k--){
                q.push(a[l++]);
            }
        }else {
            while (a[l] != x){
                l++;
            }
            while (a[r] != x){
                r--;
            }
            if(r <= n-1)
                r++;
            if(l >= 0)
                l--;
            while (k > 0){
                if(l >= 0){
                    q.push(a[l--]);
                    k--;
                }
                if (r < n){
                    q.push(a[r++]);
                    k--;
                }
                if(l < 0 && r >= n)
                    break;
            }
        }
        while(!q.empty()){
            cout << q.top() << " ";
            q.pop();
        }
        cout << endl;
    }
    return 0;
}