#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
        int n, k;
        cin >> n >> k;
        int a[10000];
        for(int i=0; i<n; i++)
            cin >> a[i];
        float max = -100000;
        int local = 0;
        // 0 1 2 3 4 5  n = 6 k = 2
        for (int i = 0; i <= n - k;i++){
            int s = 0;
            for (int j = i; j < i + k; j++){
                s += a[j];
            }
            float res = (float)s / k;
            if(s > max){
                max = s;
                local = i;
            }
        }
        for (int i = local; i < local + k; i++){
            cout << a[i] << " ";
        }
		cout<<endl;
	}
	return 0;
}