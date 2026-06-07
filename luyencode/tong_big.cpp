#include<bits/stdc++.h>
#define Siz(s) s.size()
#define Max_value 100000
using namespace std;

string xau = "";
void tach(long long n){
	stack <int> st;
	while(n--){
		long long x = n + 1;
		while(x != 0){
//			du = x%2;
			st.push(x%2);
			x /= 2;
		}
		while(!st.empty()){
			string so = to_string(st.top());
//			cout << st.top() << ' ';
			xau += so;
			st.pop();
		}
	}
	long ans = 0;
	for(char x : xau){
		if(x == '1') ++ans;
	}
	cout << ans;
}
//using namespace std;
int main()
{
//	freopen("bitsum.inp", "r", stdin);
//	freopen("bitsum.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long n; cin >> n;
	tach(n);
	return 0;
}
