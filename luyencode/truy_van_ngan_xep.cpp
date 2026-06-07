#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	stack <long> st;
	while(t--){
		int truy_van; cin >> truy_van;
		if(truy_van == 1){
			long x; cin >> x;
			st.push(x);
		}else if(truy_van == 2 && !st.empty()) st.pop();
		else if(truy_van == 3){
			if(st.empty()) cout << "Empty!" << '\n';
			else cout << st.top() << '\n';
		}
	}
	return 0;
}
