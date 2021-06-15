//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
string subtract(string a, string b){
    while (a.length() < b.length())
        a = '0' + a;
    while (a.length() > b.length())
        b = '0' + b;
    if(b > a)
        swap(a, b);
    string res = "";
    // for (int i = 0; i < a.length();i++){
    //     res += '0';
    // }
    int mind = 0;
    for (int i = a.length() - 1; i >= 0; i--){
        int an = (int)a[i] - 48;
        int bn = (int)b[i] - 48 + mind;
        if (an >= bn){
            res = to_string(an - bn) + res;
            mind = 0;
        }else{
            res = to_string(10 + an - bn) + res;
            mind = 1;
        }
    }
    return res;
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        cout << subtract(a, b) << endl;
    }
}