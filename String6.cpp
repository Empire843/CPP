#include <bits/stdc++.h>
using namespace std;
// string addition(string ans, string a){
//     string res = "";
//     while(a.length() < ans.length())
//         a = '0' + a;
//     while(ans.length() < a.length())
//         ans = '0' + ans;
//     int mind = 0;
//     for (int i = ans.length() - 1; i >= 0;i--){
//         int x = (int)a[i] - 48;
//         int y = (int)ans[i] - 48;
//         int num = x + y + mind;
//         if(num < 10){
//             res = to_string(num) + res;
//             mind = 0;
//         }else {
//             if(i == 0){
//                 res = to_string(num) + res;
//             }else res = to_string(num-10) + res;
//             mind = 1;
//         }
//     }
//     return res;
// } 
long long Smax(string a, string b){
    long long s1 = 0, s2 = 0;
    for (int i = 0; i < a.length();i++){
        if(a[i] == '5')
            a[i] = '6';
    }
    for (int i = 0; i < b.length();i++){
        if(b[i] == '5')
            b[i] = '6';
    }
    for (int i = 0, j = 0; i < a.length(),j<b.length();i++,j++){
        s1 = s1 * 10 + (a[i] - '0');
        s2 = s2 * 10 + (b[i] - '0');
    }
    return s1 + s2;
}
long long Smin(string a, string b){
    long long s1 = 0, s2 = 0;
    for (int i = 0; i < a.length();i++){
        if(a[i] == '6')
            a[i] = '5';
    }
    for (int i = 0; i < b.length();i++){
        if(b[i] == '6')
            b[i] = '5';
    }
    for (int i = 0, j = 0; i < a.length(),j<b.length();i++,j++){
        s1 = s1 * 10 + (a[i] - '0');
        s2 = s2 * 10 + (b[i] - '0');
    }
    return s1 + s2;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        cout << Smin(s1, s2) << " " << Smax(s1, s2) << endl;
    }
    return 0;
}