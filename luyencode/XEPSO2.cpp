#include <bits/stdc++.h>
#define MOD 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

char so[7] = {'1', '2', '4', '6', '7', '8', '0'};
int so_luong_que[7] = {2, 5, 4, 6, 3, 7, 6};
// tao ra so co so luong que nho nhat va nhieu nhat trong doan l -> r
// s
long long lon(long long x){
	if(x&1){
		int que = x - 3;
		long long res = 7;
		while(que){
			res *= 10;
			res += 1;
			que -= 2;
		}
		return res;
	}else
	{
		int que = x - 2;
		long long res = 1;
		while(que){
			res *= 10;
			res += 1;
			que -= 2;
		}
		return res;
	}
}

long long nho(long long l){
	
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--){
    	long long l, r; cin >> l >> r;
    	cout << lon(r) << ' ';
	}
    return 0;
}

