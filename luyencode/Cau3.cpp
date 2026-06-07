#include <bits/stdc++.h>
#define MOD 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005
#define pb push_back
#define mang 1000001
/*





                                                         ██████████████
                                                    ████████████████████████
                                                ███████████████████████████████
                                              ████████████████████████████████████
                                            █████████████   ███████████████████████
                                          ████████████       ████████████████████████
                                         ██████████          █████████████████████████
                                        █████████            ██████████████████████████
                                       ████████               █████████████████████████
                                      ███████                 ██████████████████████████
                                     ███████                  █████████████████████████████
                                    ██████                    ███ ████████████████████████
                                    █████    ██                █  ████████████████████████████████
                                   █████     ██                █  █████████████████████████████
                                  ██████     ██              ██   ███████████████████████████
                                  ██████     █               ██  █████████████████████████
                                  ██████    ██              ███  ██████████████████████████████
                                 █████      ██              ██   ██████████████████████████
                                 ████       █              ███  █████████ ██████████████
  █████                          ███                       ██   ████████    ██████████
  ███████                       ███   █                        ████████  █ █ ██████
   ████████                     ██  ████        █████          ███████  █   ██████
   ███████████                  █  ███████      █             ███████      █████
    ████████████   ███            ████████████    ██         ███████    ████
      ██████████████████             ███████████████    ███████████████████
        █████████   ██████             ███████       ██████████████████████
          ██████   █████████████        ██████████      ██████████████████
           ████    █████████████████  ██████████████ █████████████████████
                   ███████████████████████████████████████████████████████
                  ███████████████████████████████████████████████
                 ████████████████████████████████████████
                 ████████████████████████████████████████
                 ██████ ████████████████████████████████
                  ████     ████████████████████████████
                  ████████   █████████████████████████
                   ███████████ ███████████████████████
                    ██████████████████████████████████
                    ███████████████████████████    ████
                    ██████████ ██████████████████    ███
                   ██████████     ██████████████   █████
                   ████████          ██████████████████
                  ████████                ███████████
                 ███████                       ████
                  ███
*/

using namespace std;
typedef unordered_map <string, int> unmap; 


string khong_(string s){
	string ans = "";
	bool check = false;
	for(int i = 0 ; i < Siz(s) ; ++i){
		if(s[i] == '0' && check == false) continue;
		else
		{
			check = true;
			ans = s.substr(i);
			return ans;
		}
	}
	return "0";
}

void doo(string s, vector <string> &a){
	string tmp = "";
	for(int i = 0 ; i < Siz(s) ; ++i){
		if('0' <= s[i] && s[i] <= '9'){
			tmp += s[i];
		}
		else
		{
			if(Siz(tmp)){
				a.pb(khong_(tmp));
				tmp = "";
			}
		}
	}
	if(Siz(tmp)){
		a.pb(khong_(tmp));
		tmp = "";
	}
}

unmap maa;
string ans = "";

void tach(vector <string> &a, bool check){ // cần check cho xâu a trước !
	// quy hết về xâu và sử lý số !
	if(check == true){ // xau X
		for(int i = 0 ; i < Siz(a) ; ++i){
			string s = a[i];
			string tmp1 = "";
			for(int j = 0 ; j < Siz(s); ++j){
				tmp1 = s[j]; // xau con cua a
				maa[tmp1] = 1;
				for(int z = j + 1 ; z < Siz(s) ; ++z){
					// tung phan tu trong tmp
					tmp1 += s[z];
					maa[tmp1] = 1;
				}
			}
		}
	}else // xau Y
	{
		for(int i = 0 ; i < Siz(a) ; ++i){
			string s = a[i];
			string tmp1 = "";
			for(int j = 0 ; j < Siz(s); ++j){
				tmp1 = s[j]; // xau con cua a
				++maa[tmp1];
				for(int z = j + 1 ; z < Siz(s) ; ++z){
					// tung phan tu trong tmp
					tmp1 += s[z];
					++maa[tmp1];
				}
			}
		}
		
	}
}

void lon_nhat(vector <string> a){
	// Size so do lon hon --> so do lon hon 
	// Size == nhau --> so sanh truc tiep tu trai qua phai
	string s = a[0];
	for(int i = 1 ; i < Siz(a) ; ++i){
		string t = a[i];
		if(Siz(t) > Siz(s)){
			s = t;
			ans = t;
		}else if(Siz(t) == Siz(s))
		{
			for(int j = 0 ; j < Siz(s) ; ++j){
				if(t[j] == s[j]) continue;
				else if(t[j] > s[j]){
					// a[i] > s hien tai
					ans = t;
					s = t;
					break;
				}
			}
		}
	}
}

int main() {
	freopen("CAU3.INP", "r", stdin);
	freopen("CAU3.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	vector <string> a;
	vector <string> b;
	string x; cin >> x; // check = true;
	string y; cin >> y; // check = false;
	doo(x, a), doo(y, b);
	tach(a, true), tach(b, false);
	vector <string> cuoi_cung;
	for(const auto &it : maa){
		if(it.second >= 2) cuoi_cung.pb(it.first);
	}
	
	// if(Siz(cuoi_cung) == 1) return cout << cuoi_cung[0], 0;
	lon_nhat(cuoi_cung);
	bool khong = true;
	for(char x : ans){
		if(x == '0' && khong == true) continue;
		else{
			khong = false;
			break;
		}
	}
	(khong) ? cout << 0 : cout << ans;
	return 0;
}
