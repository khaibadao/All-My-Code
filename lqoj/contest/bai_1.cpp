#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int n; cin >> n;
	long long a[n + 1];
	long long sum = 0;
	map <long, int> mp;
	for(int i = 1 ; i <= n ; ++i){
		cin >> a[i];
		sum += a[i];
		++mp[a[i]];
	}
	long Max = *max_element(a + 1, a + n + 1);
	long Min = *min_element(a + 1, a + n + 1);
	double Avg = (double)sum/n;
//	cout << fixed << setprecision(12) << Avg;
	sort(a + 1, a + n + 1);
	long Medi;
	if(n%2 == 0) Medi = max(a[n/2 + 1], a[n/2]);
	else Medi = a[n/2];
	long mode = 0; int dem = 0;
	for(int i = 1 ; i <= n ; ++i){
		if(mp[a[i]] > dem){
			dem = mp[a[i]];
			mode = a[i];
		}
	}
	long long Avg_t = (long long)Avg;
	long long mang[n + 1];
	sum = 0;
	for(int i = 1 ; i <= n ; ++i){
		mang[i] = pow(abs(a[i] - Avg_t), 2);
		sum += mang[i];
	}
	cout << Max << '\n' << Min << '\n';
	cout << fixed << setprecision(12) << Avg << '\n';
	cout << Medi << '\n' << mode << '\n';
	cout << fixed << setprecision(12) << sqrt((double)sum/(n)) << '\n';
	return 0;
}
