#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	int cnt = n;
	while(n > 0){
		int tmp = n%10;
		if(tmp == 0){
			cout << "NO";
			return 0;
		}else if(cnt%tmp == 0) n /= 10;
		else{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}
