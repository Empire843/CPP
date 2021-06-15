#include <bits/stdc++.h>
using namespace std;
string s;
void sync_with_stdio(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
long long solution(long long res){
    for (int i = 0; i < s.length();i++){
        if(s[i] == '1' && s[i+1] == '0' && s[i+2] == '0'){
            s.erase(i, 3);
            i = -1;
            res += 3;
        }
    }
    return res;
}
int main(){
    sync_with_stdio();
    int t;
    cin >> t;
    while(t--){
        long long res = 0;
        cin >> s;
        cout << solution(res) << endl;
    }
    return 0;
}