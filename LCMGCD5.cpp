#include <bits/stdc++.h>
using namespace std;
int lcm(int a, int b){
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
            a -= b; // a = a - b
        }else{
            b -= a;
        }
    }
    return a; 
}
int gcd(int a, int b){
    return a * b / lcm(a, b);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long x, y, a;
        cin >> a >> x >> y;
        for (int i = 0; i < lcm(x, y);i++){
            cout << a;
        }
        cout << endl;
    }
    return 0;
}