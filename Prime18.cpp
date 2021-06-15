#include <bits/stdc++.h>
using namespace std;
void sync_with_stdio(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int isPrime(int n){
    if(n<2)
        return 0;
    for (int i = 2; i <= sqrt(n);i++){
        if(n%i == 0)
            return 0;
    }
    return 1;   
}
int solution(int m, int n, int a, int b){
    int count = 0;
    for (int i = m; i <= n;i++){
        if(i%a == 0 || i % b == 0)
            count++;
    }
    return count;
}
int main(){
    sync_with_stdio();
    int t;
    cin >> t;
    while(t--){
        int m, n, a, b;
        cin >> m >> n >> a >> b;
        cout << solution(m, n, a, b) << endl;
    }
    return 0;
}