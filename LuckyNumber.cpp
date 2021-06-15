#include <bits/stdc++.h>
using namespace std;
void sync_with_stdio(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main(){
    sync_with_stdio();
    int t;
    cin >> t;
    // fflush(stdin);
    string s1;
    getline(cin, s1);
    while(t--){
        int count = 0;
        string s;
        getline(cin, s);
        if(s.length() < 2){
            cout << 0 << endl;
        }else
        if(s[s.length()-1] == '6' && s[s.length() - 2] == '8') {
            cout << 1 << endl;
        }else{
            cout << 0 << endl;
        }
    }
    return 0;
}