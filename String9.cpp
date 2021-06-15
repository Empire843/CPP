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
        int max = -1;
        while(i < s1.length()){
            num = 0;
            k = 0;
            if(s1[i] <= '9'){
                for (int j = i; j < s1.length();j++){
                    if(s1[j] > '9')
                        break;
                    num = num*10+(s1[j] - '0');
                    k++;
                }
            }
            if(num > max)
                max = num;
            i+=k+1;
        }
        cout << max << endl;
    }
    return 0;
}