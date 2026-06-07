#include<bits/stdc++.h>
using namespace std;
int main()
// kiem tra x1 y1, x2, y2
{
	int n, m; cin >> n >> m;
	long long a[n + 1][m + 1] = {0};
	int truy_van; cin >> truy_van;
	while(truy_van--){
		// cnt == 1 : d, x
		// cnt == 2 : c, x
		// cnt == 2 : x1, y1, x2, y2
		int cnt; cin >> cnt;
		if(cnt == 1){
			long r, x; cin >> r >> x;
			for(int i = 1; i <= m; i++){
				a[r][i] += x;
			}
		}
		else if(cnt == 2){
			long c, x; cin >> c >> x;
			for(int i = 1 ; i <= n ; i++){
				a[i][c] += x;
			}
		}
		else if(cnt == 3){
			int x1, y1, x2, y2;
			cin >> x1 >> y1 >> x2 >> y2;
			int fake = 0;
			// x1 = 2 , x2 = 1 , fake = 1
			if(x1 > x2){
				fake = x1;
				x1 = x2;
				x2 = fake;
			}else if(y1 > y2){
				fake = y1;
				y1 = y2;
				y2 = fake;
			}
			long long Max = 0;
			for(int i = x1; i <= x2; i++){
				for(int j = y1; j <= y2 ; j++){
					Max = max(Max, a[i][j]);
				}
			}
			cout << Max << endl;
		}
	}
	return 0;
}
