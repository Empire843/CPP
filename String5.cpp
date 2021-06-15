#include <bits/stdc++.h>
using namespace std;
bool solution(string s){
    int res = 0;
    int f[130] = {0};
    memset(f, 0, sizeof(f));
    int max = 0;
    for (int i = 0; i < s.length();i++){
        f[s[i]]++;
        if(f[s[i]] > max)
            max = f[s[i]];
    }
    if(max <= s.length()/2 && s.length() % 2 == 0)
        return true;
    else if(max < s.length()/2 && s.length() % 2 != 0){
        return true;
    }else
        return false;
    // for (int i = 97; i <= 122;i++){
    //     cout << f[i] << " ";
    // }
    // return 1;
}
// aaaaaabbbb
// ababababa
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << solution(s) << endl;
    }
    return 0;
}