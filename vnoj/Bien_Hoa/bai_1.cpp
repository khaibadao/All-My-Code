#include<bits/stdc++.h>
using namespace std;
void reverst(int a[], int n){
	int l = 0, r= n - 1;
	while(l < r){
		int tmp = a[l];
		a[l] = a[r];
		a[r] = tmp;
		++l, --r;
	}
}
int main()
{
	long long n; cin >> n;
	int k; cin >> k;
	string xau = "";
	string so_N = to_string(n); // so_N : (string)n
	int size_N = so_N.size(); // size_N : size(n)
	int cnt = 0;
	int mang[max(size_N, k)] = {0};
	for(int i = 1 ; i <= k ; ++i) mang[cnt++] = 5;
	reverst(mang, size_N);
//	for(int i = 0 ; i < size_N; ++i) cout << mang[i];
//	cout << endl;
	if(cnt >= size_N){
		for(int i = 0 ; i < cnt ; ++i) cout << mang[i];
		return 0;
	}
	else
	{
		// 23456 3
//		cout << so_N[size_N - cnt] << endl;
		if((so_N[size_N - cnt] - '0') < 5){
			for(int i = size_N - cnt - 1; i >= 0 ; i--)	mang[i] = so_N[i] - '0';
//			cout << "HELO" << endl;
		}else
		{
//			cout << "NO" << endl;
			int nho = 1;
			for(int i = size_N - cnt - 1; i >= 0 ; i--){
				if(nho){
					int tmp = so_N[i] - '0';
					mang[i] = tmp + nho;
					nho /= mang[i];
				}else
				{
					mang[i] = so_N[i] - '0';
				}
			}
		}
	}
	for(int i = 0 ; i < size_N ; ++i) cout << mang[i];
	return 0;
}
