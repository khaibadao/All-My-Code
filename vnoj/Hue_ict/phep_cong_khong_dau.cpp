#include<bits/stdc++.h>
using namespace std;
void reverst(int a[], int n){
	int l = 0, r = n - 1;
	while(l < r){
		int tmp = a[l];
		a[l] = a[r];
		a[r] = tmp;
		++l, --r;
	}
}
bool Tong(string a, string b){
	int n1 = a.size(), n2 = b.size(), n = 0;
	int chi_so_a = 0, chi_so_b = 0;
	int x[n1], y[n1], z[n1 + 1];
	for(int i = 0 ; i < n1 ; ++i){
		x[i] = a[i] - '0';
	}
	for(int i = 0 ; i < n2 ; ++i){
		y[i] = b[i] - '0';
	}
	reverst(x, n1), reverst(y, n2);
	for(int i = n2; i < n1; ++i){
		y[i] = 0;
	}
	int nho = 0;
	for(int i = 0; i < n1 ; ++i){
		int tmp = x[i] + y[i] + nho;
		z[n++] = abs(tmp % 10);
		nho = tmp / 10;
		if(nho){
			return false;
		}
	}
	if(nho){
		return false;
	}
	return true;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, res = 0; cin >> n;
	long a[n];
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
	}
//	int ans = 1;
	for(int i = 0 ; i < n ; ++i){
    	int cnt = 1; long long sum = a[i];
		for(int j = i + 1; j < n ; ++j){
			string x = to_string(sum), y = to_string(a[j]);
			int count = Tong(x, y);
			if(count){
				sum += a[j];
				++cnt;
//				cout << a[i] << ' ' << a[j] << '\n';
			}
		}
		res = max(res, cnt);
	}
	for(int i = 0; i < n ; ++i){
		int cnt = 1; long long sum = a[i];
		for(int j = 0; j < n ; ++j){
			if(i == j) continue;
			else
			{
				string x = to_string(sum), y = to_string(a[j]);
				int count = Tong(x, y);
				if(count){
					sum += a[j];
					++cnt;
	//				cout << a[i] << ' ' << a[j] << '\n';
				}
			}
		}
		res = max(res, cnt);
	}
	cout << res;
	return 0;
}
