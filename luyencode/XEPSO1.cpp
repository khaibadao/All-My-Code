#include<bits/stdc++.h>
#define Siz(s) s.size()
#define Mod 1000000000+7
using namespace std;

string so_lon(int n){
    string so = "";
    if(n == 2){
        so += '1';
        return so;
    }
    else if(n == 3){
        so += '7';
        return so;
    }
    if(n % 2 == 0){
        while(n){
            so += '1';
            n -= 2; 
        }
        return so;
    } else {
        n -= 3;
        so += '7';
        while(n > 0){
            so += '1';
            n -= 2; 
        }
        return so;
    }
}

//1 : 2 --> so nho nhat que bang 2
//2 : 5 --> so nho nhat que bang 5
//3 : 5
//4 : 4 --> so nho nhat que bang 4
//5 : 5
//6 : 6 --> so nho nhat que bang 6
//7 : 3 --> so nho nhat que bang 3
//8 : 7 --> so nho nhat que bang 7
//9 : 6
//0 : 6 

15 : 
char so[7] = {'1', '2', '4', '6', '7', '8', '0'};
int so_luong_que[7] = {2, 5, 4, 6, 3, 7, 6};
int n;
long long kq;

void ql(string sumA, int slq, int pos){
	if(slq > n) return;
	if(slq == n){
		kq = min(kq, stoll(sumA));
//		cout << kq << ' ';
		return;
	}
	for(int i = 0 ; i < 7 ; ++i){
		string ans = sumA + so[i];
		if(ans[0] == '0') continue;
		int tmp = slq + so_luong_que[i];
		if(tmp <= n){
			ql(ans, tmp, i);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		kq = LLONG_MAX;
		cin >> n;
		if(n <= 7){
			if(n == 2) cout << 1 << ' ';
			else if(n == 3) cout << 7 << ' ';
			else if(n == 4) cout << 4 << ' ';
			else if(n == 5) cout << 2 << ' ';
			else if(n == 6) cout << 6 << ' ';
			else if(n == 7) cout << 8 << ' ';
		}else
		{
			string res = "";
			ql(res, 0, 0);
			cout << kq << ' ';
		}
		cout << so_lon(n) << '\n';
	}
	return 0;
}
