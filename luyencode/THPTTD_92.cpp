#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;
// 1 : a lon hon, 0 : b lon hon, 2 : a == b
int check(string a, string b) {
    if (Siz(a) > Siz(b)) return 1;
    if (Siz(a) < Siz(b)) return 0;
    for (int i = 0; i < Siz(a); ++i) {
        if (a[i] > b[i]) return 1;
        if (a[i] < b[i]) return 0;
    }
    return 2; // bang nhau
}

vector <string> so;
vector <string> xau;
void tach(string s){
	string so_f = "", xau_f = "";
	for(int i = 0 ; i < Siz(s) ; ++i){
		if('a' <= s[i] && s[i] <= 'z'){
			xau_f += s[i];
			if(Siz(so_f)){
				so.push_back(so_f);
				so_f = "";
			}
		}else if('0' <= s[i] && s[i] <= '9'){
			so_f += s[i];
			if(Siz(xau_f)){
				xau.push_back(xau_f);
				xau_f = "";
			}
		}
	}
	if(Siz(xau_f)){
		xau.push_back(xau_f);
		xau_f = "";
	}
	if(Siz(so_f)){
		so.push_back(so_f);
		so_f = "";
	}
}

void kiem_tra()
{
	for(int i = 0 ; i < Siz(so) ; ++i){
		int cnt = 0;
		if(so[i][0] == '0'){
			while(so[i][0] == '0' && !so[i].empty()){
				so[i].erase(so[i].begin() + 0);
			}
		}
	}
}

void Sort(vector <string>& a){
	for(int i = 0 ; i < Siz(a) - 1 ; ++i){
		int min_pos = i;
		for(int j = i + 1 ; j < Siz(a) ; ++j){
			int res = check(a[min_pos], a[j]);
			if(res == 1){
				min_pos = j;
			}
		}
    	swap(a[i], a[min_pos]);
	}
}

int main()
{
	freopen("bai2.inp", "r", stdin);
	freopen("bai2.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s; cin >> s;
	tach(s);
	kiem_tra();
	Sort(so);
	bool ttr = true;
	if('a' <= s[0] && s[0] <= 'z') ttr = true;
	else ttr = false;
	if(ttr){
		for(int i = 0 ; i < Siz(so) ; ++i){
			cout << xau[i] << so[i];
		}
		int count = Siz(xau) - Siz(so);
		if(count == 1) cout << xau[Siz(xau) - 1];
	}else
	{
		for(int i = 0 ; i < Siz(xau) ; ++i){
			cout << so[i] << xau[i];
		}
		int count = Siz(so) - Siz(xau);
		if(count == 1) cout << so[Siz(so) - 1];
	}
	// true : chu cai dau xau
	// false : so dau xau 
	
	return 0;
}
