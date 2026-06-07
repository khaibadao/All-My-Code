#include<bits/stdc++.h>
#include<string>
using namespace std;
bool check_nt(long long a){
	if(a == 2 || a == 3 || a == 5 || a == 7) return true;
	else if(a%2 == 0 || a == 1) return false;
	else
	{
		for(int i = 3 ; i <= sqrt(a); i += 2){
			if(a%i == 0) return false;
		}
		return true;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long l, r; cin >> l >> r;
	r%= 1000000;
	l%= 1000000;
	while(l <= r){
		long long cnt = 0;
		long long gia_tri = l;
		while(l > 0){
			int tmp = l%10;
			cnt = (cnt * 10) + tmp;
			l /= 10;
		}
//		cout << cnt;
		if(check_nt(cnt)) cout << gia_tri << endl;
		l = gia_tri;
		++l;
	}
	return 0;
}
