#include<bits/stdc++.h>
#define Mod 1000001
using namespace std;

double a[Mod];

void sang()
{
	a[0] = 0.0;
	for(int i = 1 ; i <= 1000000 ; ++i){
		a[i] = 1.0/(double)i + a[i - 1];
	}
//	cout << fixed << setprecision(5) << a[1] << '\n';
}

int main() {
	sang();
    int t; cin >> t;
    while(t--){
    	int n; cin >> n;
    	cout << fixed << setprecision(5) << a[n] << '\n';
	}
    return 0;
}
