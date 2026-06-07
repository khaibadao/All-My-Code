#include<bits/stdc++.h>
#define Siz(x) x.size()


//#.#.###.




using namespace std;
int main()
{
	freopen("pchar.inp", "r", stdin);
	freopen("pchar.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	string s; cin >> s;
	s = '%' + s;
	int ans = 0;
	int i = 1, j = 2;
//	int nguoc = 0, xuoi = 0;
	while(i < Siz(s) && j < Siz(s)){
		if(s[i] == '#'){
			if(s[j] == '.'){
				int res1 = 0;
				int j_k = j, i_k = i;
				while(s[j_k] == '.'){
			    	++res1;
					++j_k;
//					cout << 1 << '\n';
					if(s[j_k] != '.') break;
				}
				int res2 = 0;
				while(s[i_k] == '#'){
					if(i_k < 1) break;
					else
					{
//						cout << nguoc << '\n';
						++res2;
//						cout << res2 << '\n';
						--i_k;
//						cout << nguoc << '\n';
					}
				}
//				cout << res1 << ' ' << res2 << '\n';
				ans += min(res1, res2);
				++i;
				j = i + 1;
				
//				nguoc = 0, xuoi = 0;
			}else{
				++i, j = i + 1;
			}
		}else{
			++i;
			j = i + 1;
		}
//		cout << i << '\n';
	}
	cout << ans;
	return 0;
}

