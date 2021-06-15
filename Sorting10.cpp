#include <bits/stdc++.h>
using namespace std;
void solution(string s){
    int a[100];
    memset(a, 0, sizeof(a));
    for (int i = 0; i < s.length();i++){
        if(s[i] != ' '){
            a[s[i] - 48] = 1;
        }
    }
    for (int i = 0; i < 10;i++){
        if(a[i] == 1)
            cout << i << " ";
    }
    cout << endl;
}
int main(){
    int t;  
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        // fflush(stdin);
        // string s;
        // getline(cin, s);
        string s = "";
        string tmp = "";
        for (int i = 0; i < n;i++){
            cin >> tmp;
            s += tmp;
        }
        solution(s);
    }
    return 0;
}