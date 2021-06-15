#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s1;
        cin >> s1;
        long long sum = 0;
        long long num = 0;
        int i = 0;
        int k = 0;
        while(i < s1.length()){
            num = 0;
            k = 0;
            if(s1[i] <= '9'){
                for (int j = i; j < s1.length();j++){
                    // num += (s1[i] - '0');
                    // x++;
                    if(s1[j] > '9')
                        break;
                    // cout << s1[j];
                    num = num*10+(s1[j] - '0');
                    k++;
                }
            }
            sum += num;
            i+=k+1;
        }
        cout << sum << endl;
    }
    return 0;
}