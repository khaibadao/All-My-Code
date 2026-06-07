#include<bits/stdc++.h> 
using namespace std;
long long cnt = 1000000000 + 7;
int find(char a[]){
	long long res = 0;
	for(int i = 0 ; i < strlen(a); i++){
		res = res * 10 + a[i] - '0';
		res %= cnt;
	}
	return res;
}
long long mod(long long a, long long b){
	long long res = 1;
	while(b){
		if(b%2== 1){
			res *= a;
			res %= cnt;
		}
		a *= a;
		a %= cnt;
		b /= 2;
	}
	return res;
}
int main()
{
	char a[1001]; long long b;
	cin >> a >> b;
	string so = "";
	for(int i = 0 ; i < strlen(a) ; i++){
		so += a[i];
	}
	long long so_real = stoll(so);
	cout << so_real + b << endl;
	long long du = find(a);
	cout << mod(du, b);
	return 0;
}
