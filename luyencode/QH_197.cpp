#include<bits/stdc++.h>
#define Siz(s) s.size()

using namespace std;
int main()
{
//    freopen("square.inp", "r", stdin);
//	freopen("square.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n; cin >> n;
	long long xmax = INT_MIN, ymax = INT_MIN;
	long long xmin = INT_MAX, ymin = INT_MAX;
	for(int i = 0 ; i < n ; ++i){
		long long x, y; cin >> x >> y;
		xmax = max(xmax, y);
		xmin = min(xmin, y);
		ymax = max(ymax, y);
		ymin = min(ymin, y);
	}
	long long canh = max(xmax - xmin, ymax - ymin);
	cout << canh*canh;
	return 0;
}
