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
    string s1;
    getline(cin, s1);
    while(t--){
        int count = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.length();i++){
            for (int j = 0; j < s.length();j++){
                if(s[i] == s[j] && i != j){
                    break;
                }
                if (j == s.length() - 1)
                    cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}