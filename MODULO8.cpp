#include <bits/stdc++.h>
using namespace std;

void Sync_with_stdio(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int solution(long long b, long long p){
    int res = 0;
    for (long long i = 1; i <= p;i++){
        if (i * i % p == 1){
            long long ans = i + p * (b/p); 
            if (ans > b) 
                ans -= p; 
  
            // Add count of numbers of the form  
            // x + p*i. 1 is added for x itself. 
            res += ((ans-i)/p + 1); 
        }
    }
    return res;
}
int main(){
    Sync_with_stdio();
    int t;
    cin >> t;
    while(t--){
        long long b, p;
        cin >> b >> p;
        cout << solution(b, p) << endl;
    }
    return 0;
}