#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	while(n--){
		long t; cin >> t;
		long cnt = sqrt(t);
		long gia_tri1 = 1, gia_tri2 = t;
		while(cnt <= t){
			if(t%cnt == 0){
				gia_tri1 = cnt;
				gia_tri2 = t/cnt; 
				break;
			}
			++cnt;
		}
		if(gia_tri1 > gia_tri2) cout << gia_tri2 << " " << gia_tri1 << endl;
		else cout << gia_tri1 << " " << gia_tri2 << endl;
	}
	return 0;
}
