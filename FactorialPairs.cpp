#include <bits/stdc++.h>
using namespace std;
void sync_with_stdio(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
void solution(string a, int n) {
	priority_queue<char, vector<char>, less<char>> q;
	for (int i = 0; i < n; i++) {
		if ( a[i] == '2' || a[i] == '3' || a[i] == '5' || a[i] == '7') q.push(a[i]);
		/*else if (a[i] == '0' || a[i] == '1') {
			q.push('1');
		}*/
		else if (a[i] == '4') {
			q.push('3');
			q.push('2');
			q.push('2');
		}
		else if (a[i] == '6') {
			q.push('3');
			q.push('5');
		}
		else if (a[i] == '8') {
			q.push('7');
			q.push('2');
			q.push('2');
			q.push('2');
		}else if (a[i] == '9') {
			q.push('7');
			q.push('3');
			q.push('3');
			q.push('2');
		}
	}
	while (!q.empty()) {
		cout << q.top();
		q.pop();
	}
}
// 1! = 1!
// 2! = 2!
// 3! = 3!
// 4! = 3! * 2! * 2!
// 5! = 5!
// 6! = 5! * 3!
// 7! = 7!
// 8! = 7! * 2! * 2! * 2!
// 9! = 7! * 3! * 3! * 2!
int main() {
    sync_with_stdio();
	int t; cin >> t;
	while (t--) {
		int n;
		string a;
		cin >> n;
		fflush(stdin);
		cin >> a;
		solution(a,n);
		cout << endl;
	}
	return 0;
}