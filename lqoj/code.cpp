#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	long a[n + 1];
	for(int i = 1 ; i <= n ; i++){
		cin >> a[i];
	}
	sort(a + 1, a + n + 1, greater <long> ());
	for(int i = 1 ; i <= n ; i++){
		if(a[i] - 1 == a[i + 1]){
			continue;
		}else
		{
			cout << a[i] - 1;
			break;
		}
	}
	return 0;
}
