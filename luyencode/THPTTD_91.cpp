#include <bits/stdc++.h>
#define Siz(s) s.size()
#define M_a 100000
using namespace std;

int main(){
//	freopen("bai1.inp", "r", stdin);
//	freopen("bai1.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m; cin >> n >> m;
    int a[n][m];
    for(int i = 0 ; i < n ; ++i){
    	for(int j = 0 ; j < m ; ++j){
    		cin >> a[i][j];
		}
	}
	// mang bool lon va nho
	// neu co chung 2 thang nho nhat thi memset toan bo bang false
	bool f_ma[n][m], f_mi[n][m];
	memset(f_ma, false, sizeof(f_ma));
	memset(f_mi, false, sizeof(f_mi));
	for(int i = 0 ; i < n ; ++i){
		int Ma = INT_MIN, Mi = INT_MAX;
		int i1 = 0, j1 = 0, i2 = 0, j2 = 0;
		unordered_map <int, int> mp;
		for(int j = 0 ; j < m ; ++j){
			int res = a[i][j];
			++mp[res];
			if(mp[res] == 1){
				if(a[i][j] >= Ma){
	    			Ma = a[i][j];
	    			i1 = i;
	    			j1 = j;
				}
				if(a[i][j] <= Mi){
					Mi = a[i][j];
	    			i2 = i;
	    			j2 = j;
				}
			}else
			{
				f_ma[i][j] = f_mi[i][j] = false;
				for(int t = 0 ; t <= j ; ++t){
					if(a[i][t] == res){
						f_ma[i][t] = f_mi[i][t] = false;
					}
					else
					{
						if(a[i][t] >= Ma){
			    			Ma = a[i][t];
			    			i1 = i;
			    			j1 = t;
						}
						if(a[i][t] <= Mi){
							Mi = a[i][t];
			    			i2 = i;
			    			j2 = t;
						}
					}
				}
			}
		}
		f_ma[i1][j1] = true;
		f_mi[i2][j2] = true;
	}
	for(int i = 0 ; i < n ; ++i){
    	for(int j = 0 ; j < m ; ++j){
    		if(f_ma[i][j] == true) cout << 1 << ' ';
    		else cout << '0' << ' ';
		}
		cout << '\n';
	}
	
    return 0;
}

