#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
void sync_with_stdio(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
void MinMax(int m, int s){
    int s1 = s;
    if(s == 0){
        (m == 1) ? cout << "0 0" << endl : cout << "-1 -1" << endl;
        return;
    }
    int k = m;
    string str1 = "";
    string str2 = "";
    if (s1 > 9 * m){
        cout << "-1 -1" << endl;
        return;
    }// find min
    s1--;
    for(int i=m-1;i>0;i--){
        if(s1 > 9){
            str1 = '9' + str1;
            s1-=9;
        }
        else{
            str1 = to_string(s1) + str1;
            s1 = 0;
        }
        k--;
    }
    if(k == 1)
        str1 = to_string(s1 + 1) + str1;
        // find max
    k = m;
    while (s >= 10){
        str2 += '9';
        s -= 9;
        k--;
    }
    str2 += to_string(s);
    while(k > 1){
        str2 += '0';
        k--;
    }
    cout << str1 << " " << str2 << " ";
}
int main(){
    sync_with_stdio();
    int m, s;
    cin >> m >> s;
    MinMax(m, s);
    return 0;
}
