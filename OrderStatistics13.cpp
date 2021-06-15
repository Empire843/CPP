#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int key = 1e4+5;
int A[key] = {0}, B[key] = {0}, n, m;
ll GoFromA()
{
	ll sum = 0, res = 0;
	for(int i=0; i<n; i++)
	{
		sum += A[i];
		ll val = sum;
		if(i != n-1)
		{
			for(int j=i+1; j<m; j++)
			{
				if(B[j] > A[i]) val += B[j];
			}
		}
		res = max(res, val);
	}
	return res;
}
ll GoFromB()
{
	ll sum = 0, res = 0;
	for(int i=0; i<m; i++)
	{
		sum += B[i];
		ll val = sum;
		if(i != m-1)
		{
			for(int j=i+1; j<n; j++)
			{
				if(A[j] > B[i]) val += A[j];
			}
		}
		res = max(res, val);
	}
	return res;
}
int main()
{
    int N; cin >> N;
    while(N--)
    {
    	cin >> n >> m;
    	for(int i=0; i<n; i++) cin >> A[i];
    	for(int i=0; i<m; i++) cin >> B[i];
    	cout << max(GoFromA(), GoFromB()) << endl;
    }
}