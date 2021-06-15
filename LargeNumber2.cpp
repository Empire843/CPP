#include <bits/stdc++.h>
using namespace std;
void sync_with_stdio(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
string addition(string ans, string a){
    string res = "";
    while(a.length() < ans.length())
        a = '0' + a;
    while(ans.length() < a.length())
        ans = '0' + ans;
    
    int mind = 0;
    for (int i = ans.length() - 1; i >= 0;i--){
        int x = (int)a[i] - 48;
        int y = (int)ans[i] - 48;
        int num = x + y + mind;
        if(num < 10){
            res = to_string(num) + res;
            mind = 0;
        }else {
            if(i == 0){
                res = to_string(num) + res;
            }else res = to_string(num-10) + res;
            mind = 1;
        }
    }
    return res;
}
int main(){
    sync_with_stdio();
    int t;
    cin >> t;
    while(t--){
        string x, y;
        cin >> x >> y;
        cout << addition(x, y) << endl;
    }
    return 0;
}   