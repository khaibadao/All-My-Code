#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	int a[n + 1];
	int b[n + 1] = {0};
	for(int i = 1 ; i <= n ; ++i) cin >> a[i];
	sort(a + 1, a + n + 1);
	for(int i = 1 ; i <= n ; ++i){
		if(a[i] < 10){
			b[i] = a[i];
			a[i] = 0;
		}
		else break;
	}
	string s = ""; int cnt = 1;
	sort(b + 1, b + n + 1, greater <int> ());
	sort(a + 1, a + n + 1, greater <int> ());
	for(int i = 1 ; i <= n ; ++i){
//		cout << a[i] << " ";
		if(a[i]){
			if(a[i]%10 > b[cnt] && a[i]/10 == b[cnt]){
				string t = to_string(a[i]);
				s += t;
				a[i] = 0;
			}else
			{
				while(b[cnt] >= a[i]/10){
					s += b[cnt] + '0';
					b[cnt] = 0;
					++cnt;
				}
			}
		}
		if(a[i]){
			string t = to_string(a[i]);
			s += t;
			a[i] = 0;
		}
	}
	sort(b + 1, b + n + 1, greater <int> ());
	for(int i = 1 ; i <= n; ++i){
		if(b[i]){
			s += b[i] + '0';
		}
	}
	cout << s;
	return 0;
}
