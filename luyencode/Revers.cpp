#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long a, b; cin >> a >> b;
	long long res = a + b;
	while(res%10 == 0) res /= 10;
	string so = to_string(res);
	reverse(so.begin(), so.end());
	cout << so;
	return 0;
}
