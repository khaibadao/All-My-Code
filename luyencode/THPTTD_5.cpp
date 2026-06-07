#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int so[10] = {0, 1, 8, 27, 64, 125, 216, 343, 512, 729};

bool check(int n){
	if(n < 2) return false;
	if(n < 4) return true;
	if(n%2 == 0 || n%3 == 0) return false;
	for(int i = 5 ; i*i <= n ; i += 6){
		if(n%i == 0 || n%(i + 2) == 0) return false;
	}
	return true;
}

vector <long long> v;
void sang_check(){
	v.push_back(0);
	v.push_back(11);
	v.push_back(101);
	v.push_back(110);
	v.push_back(111);
	v.push_back(113);
	v.push_back(115);
	long res = 116;
	while(Siz(v) <= 1000000){
		long long ans = res;
		int sum = 0;
		while(ans > 0){
			int tmp = ans%10;
			sum += so[tmp];
			ans /= 10;
			
		}
		if(check(sum)) v.push_back(res);
		++res;
	}
}
int main() {
	freopen("BEAUTY3.inp", "r", stdin);
	freopen("BEAUTY3.out", "w", stdout);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    sang_check();
    int t; cin >> t;
    while(t--){
    	int n; cin >> n;
    	cout << v[n] << '\n';
	}
    return 0;
}

