#include<bits/stdc++.h>
#define Siz(s) s.size()
//#define Mod 10000000
using namespace std;
void ans(int toa_do_x, int toa_do_y, int check) {
    switch (check) {
        case 1:
            cout << toa_do_y << ' ' << 0 << '\n';
            break;
        case 2:
            cout << toa_do_x << ' ' << toa_do_y << '\n';
            break;
        case 3:
        	cout << 0 << ' ' << toa_do_y << '\n';
        	break;
        case 4:
            cout << 0 << ' ' << toa_do_y << '\n';
            break;
        default:
            cout << "Invalid check value\n";
            break;
    }
}
int main()
{
//	freopen("SVD.INP", "r", stdin);
//	freopen("SVD.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int check = 1;
	long long a, n;
	cin >> a >> n;
	if(n < a){
		ans(a, a - n, 1);
	}
	else
	{
		while(n-a >= 0){
		//	++check;
			n -= a;
			if(check == 4) check = 1;
			else ++check;
		}
		cout << a << ' ' << n << ' ' << check << '\n'; 
		ans(a, n, check);
	}
	return 0;
}
