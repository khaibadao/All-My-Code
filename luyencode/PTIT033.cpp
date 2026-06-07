#include<bits/stdc++.h>
#define Siz(s) s.size()
#define haha 1000001
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n, a, b; cin >> n >> a >> b;
	(n%a == 0 && n%b == 0) ? cout << "Co, tat ca!" : (n%a == 0 && n%b != 0) ? cout << "Chi chia het cho " << a << ',' : (n%a != 0 && n%b == 0) ? cout << "Chi chia het cho " << b << '.' : cout << "Khong chia het cho so nao ca.";
	return 0;
}
