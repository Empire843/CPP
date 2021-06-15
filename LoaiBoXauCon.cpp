//  @author: QUÁCH_ĐÌNH_KIÊN
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
string solution(string s1, string s2){
    s1 += ' ';
    string tmp = "";
    for (int i = 0; i < s1.length();i++){
        if(s1[i] == ' '){
            // cout << tmp << " " << s2 << endl;
            if(tmp == s2){
                // cout << i - tmp.length() << " " << i + 1 << endl;
                s1.erase(s1.begin()+ i - tmp.length(), s1.begin() + i+1);
                return s1;
            }
            tmp = "";    
        }else {
            tmp += s1[i];
        }
    }
    return s1;
}
int main(){
    fastIO;
    string s1, s2;
    
    getline(cin, s1);
    getline(cin, s2);
    cout << solution(s1, s2) << endl;
}