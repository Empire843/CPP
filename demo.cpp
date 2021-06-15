#include<bits/stdc++.h>
using namespace std;
string solution(string s){
	int ind = -1;
	for (int i = s.length()-2; i >= 0;i--){
		if(s[i] > s[i+1]){
			ind = i;
			break;
		}
	}
	if(ind == -1)
		return "-1";
	int max = -1;
	int k = 0;
	for (int i = s.length() - 1; i > ind ; i--){
		if(s[i] < s[ind]){
			if(max == -1)
				max = i;
			else if(s[i] >= s[max])
				max = i;
		}
	}
	if(max == -1)
		return "-1";
	swap(s[ind], s[max]);
	return s;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		cout << solution(s) << endl;
	}
}
