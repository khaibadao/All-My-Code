#include <bits/stdc++.h>
#define MOD 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int a, b; cin >> a >> b;
	int ans = 0;
	while(a <= b){
		a *= 3, b *= 2;
		++ans;
	}
	cout << ans;
	return 0;
}

