#include <bits/stdc++.h>
using namespace std;
string solution(string str) 
{ 
    int len = str.length(); 
    int index = -1; 
    for (int i = len - 2; i >= 0; i--) { 
        if (str[i] > str[i+1]) { 
            index = i; 
            break; 
        } 
    }
    int max = -1;
    for (int i = len - 1; i > index;i--){
        if(str[i] < str[index]){
            if(max == -1)
                max = i;
            else if(str[i] >= str[max])
                max = i;// max này là giá trị lớn nhất mà nhỏ hơn index
        }
    }
    if(index == -1)
        return "-1";
    if(max != -1){
        swap(str[max], str[index]);
        return str;
    }
    return "-1"; 
} 
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