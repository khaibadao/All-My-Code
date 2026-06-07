#include<bits/stdc++.h>

using namespace std;

long long fn[93];
unordered_map <long long, bool> maa;

void fibo(){
	fn[0] = 1;
	fn[1] = 1;
	maa[fn[0]] = maa[fn[1]] = true;
	for(int i = 2 ; i <= 92; ++i){
		fn[i] = fn[i - 1] + fn[i - 2];
		maa[fn[i]] = true;
	}
}

int main()
{
    freopen("fibnum.INP", "r", stdin);
	freopen("fibnum.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	fibo();
	while(t--){
		int n; cin >> n;
		(maa[n]) ? cout << "Yes" << '\n' : cout << "No" << '\n';
	}
	return 0;
}

