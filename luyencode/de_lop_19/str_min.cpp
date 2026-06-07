#include<bits/stdc++.h>
using namespace std;
string mat_khau = "";
void so(int so){
	int res = 0;
	for(int i = 0 ; i < so ; ++i){
		if(res < 10){
			mat_khau += res + '0';
			++res;
		}else{
			res = 0;
			mat_khau += res + '0';
			++res;
		}
	}
}
char in_hoa(int res){
	return 'A' + res;

}
char in_thuong(int res){
	return 'a' + res;
}
int main()
{
//	freopen("strmin.inp", "r", stdin);
//	freopen("strmin.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	int res = 0;
	int x, y, z; cin >> x >> y >> z;
	so(z);
	if(x){
		while(x--){
			if(res > 26) res = 0;
			char c = in_hoa(res);
			mat_khau += c;
			++res;
		}
	}
	res = 0;
	if(y){
		while(y--){
			if(res > 26) res = 0;
			char c = in_thuong(res);
			mat_khau += c;
			++res;
		}
	}
	cout << mat_khau;
	return 0;
}
