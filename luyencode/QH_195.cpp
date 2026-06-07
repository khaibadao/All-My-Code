#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

bool check(long long n)
{
    int sl = 0, sc = 0;
    unordered_map <char, int> maa;
    string s = to_string(n);
    for(char x : s){
        if(x == '0' || x == '2' || x == '7'){
            if(!maa[x])
            {
                ++sc;
                ++maa[x];
            }
        }else return false;
    }
    return sc <= 3;
}

int main()
{
    freopen("bhk.inp", "r", stdin);
	freopen("BHK.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long n; cin >> n;
	for(int i = 1 ; i <= 10000000 ; ++i){
        long long res = n * i;
        if(check((res))){
            cout << res;
            break;
        }
	}
	return 0;
}
