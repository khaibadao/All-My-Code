#include<bits/stdc++.h>
#define Siz(x) x.size()

char ki_tu(char x){
	return x - 32;
}

using namespace std;
int main()
{
	freopen("bai1.inp", "r", stdin);
	freopen("bai1.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s; getline(cin, s);
	bool check = true;
	int ih = 0, d_c = 0;
	s += '(';
	string xau = "";
	if(s[0] > 'Z'){
		xau += ki_tu(s[0]);
		check = false;
	}else xau += s[0];
	vector <string> v;
	for(int i = 1 ; i < Siz(s) ; ++i){
		if(('a' <= s[i] && s[i] <= 'z') || ('A' <= s[i] && s[i] <= 'Z')){
			d_c = 0;
			if(ih){
				if('A' <= s[i] && s[i] <= 'Z'){
					xau += s[i];
					ih = 0;
				}else{
					xau += ki_tu(s[i]);
					ih = 0;
				}
			}else xau += s[i];
		}else if(s[i] == ':' || s[i] == '!' || s[i] == '?' || s[i] == '.'){
			d_c = 0;
			ih = 1;
			if(s[i - 1] == ' '){
				check = false;
//				cout << v[Siz(v) - 1] << '\n';
			    v[Siz(v) - 1][Siz(v[Siz(v) - 1]) - 1] =  s[i];
//			    cout << v[Siz(v) - 1] << '\n';
			}else
			{
	    		xau += s[i];
	   			xau += ' ';
				v.push_back(xau);
				xau = "";
			}
    	}else if(s[i] == ','){
    		d_c = 0;
    		if(s[i - 1] == ' ') check = false;
    		xau += s[i];
   			xau += ' ';
			v.push_back(xau);
			xau = "";
		}else if(s[i] == ' '){
			++d_c;
			if(d_c > 1){
				d_c = 0;
				check = false;
			}
			if(Siz(xau)){
				xau += ' ';
				v.push_back(xau);
				xau = "";
			}
		}
	}
	if(check) cout << 1 << '\n' << '*';
	else
	{
		cout << 0 << '\n';
		for(int i = 0 ; i < Siz(v); ++i) cout << v[i];
	}
	return 0;
}
