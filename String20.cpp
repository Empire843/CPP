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
        getline(cin, s);
        int len = 0;
        for (int i = s.length() - 1; i >= 0; i--){
            if(s[i] == ' '){
                for (int j = i+1; j <= len+i; j++){
                    cout << s[j];
                }
                cout << " ";
                len = 0;
            }else
                len++;
        }
        for (int i = 0; i < s.length();i++){
            if(s[i] == ' ')
                break;
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}