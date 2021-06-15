#include <bits/stdc++.h>
using namespace std;
void sync_with_stdio(){
    ios_base::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
}
int compact(long n){
    if(n<10)
        return n;
    long sum = 0;
    while(n>0){
        sum += n % 10;
        n /= 10;
    }
    return compact(sum);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long n;
        cin >> n;
        cout << compact(n) << endl;
    }
    return 0;
}