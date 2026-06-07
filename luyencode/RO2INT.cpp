#include<bits/stdc++.h>
#define Mod 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s; cin >> s;
	long long sum = 0;
	unordered_map <char, int> maa;
	maa['I'] = 1, maa['V'] = 5, maa['X'] = 10;
	maa['L'] = 50, maa['C'] = 100, maa['D'] = 500;
	maa['M'] = 1000;
	sum += maa[s[0]];
	for(int i = 1 ; i < Siz(s) ; ++i){
		if(s[i] == 'V' || s[i] == 'X'){
			if(s[i - 1] == 'I'){
				sum -= 1;
				sum += maa[s[i]] - maa[s[i - 1]];
			}else sum += maa[s[i]];
		}else if(s[i] == 'L' || s[i] == 'C'){
			if(s[i - 1] == 'X'){
				sum -= 10;
				sum += maa[s[i]] - maa[s[i - 1]];
			}else sum += maa[s[i]];
		}else if(s[i] == 'D' || s[i] == 'M'){
			if(s[i - 1] == 'C'){
				sum -= 100;
				sum += maa[s[i]] - maa[s[i - 1]];
			}else sum += maa[s[i]];
		}else sum += maa[s[i]];
	}
	cout << sum;
//	IV: 4
//	IX: 9
//	XL: 40
//	XC: 90
//	CD: 400
//	CM: 900
	return 0;
}
