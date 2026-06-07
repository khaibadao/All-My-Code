#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

void doo(long long n)
{
    int Sl = 0, Sc = 0;
    for(int i = 2 ; i*i <= n ; ++i){
        if(n%i == 0){
            int res = 0;
            while(n%i == 0){
                ++res;
                n /= i;
            }
            (res%2 == 0) ? Sc += res : Sl += res;
        }
    }
    if(n != 1) ++Sl;
    cout << Sc << '\n' << Sl;
}
int main(){
	freopen("SumExpo.Inp", "r", stdin);
    freopen("SumExpo.Out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n; cin >> n;
	doo(n);
	return 0;
}
