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

typedef unordered_map<long long, long long> unmap;

struct SinhVien
{
	string name;
	vector <int> point;
	int tong_diem;
};

void Math(int n, vector <SinhVien> &a){
	for(int i = 0 ; i < n ; ++i){
		long Point; cin >> Point;
		a[i].point.pb(Point);
		a[i].tong_diem += Point;
	}
}

void Phys(int n, vector <SinhVien> &a){
	for(int i = 0 ; i < n ; ++i){
		long Point; cin >> Point;
		a[i].point.pb(Point);
		a[i].tong_diem += Point;
	}
}
void Chemis(int n, vector <SinhVien> &a){
	for(int i = 0 ; i < n ; ++i){
		long Point; cin >> Point;
		a[i].point.pb(Point);
		a[i].tong_diem += Point;
	}
}

void Inconclusion(int n, vector <SinhVien> &a){
	int i_ma, i_mi;
	int tmp_mi = INT_MAX, tmp_ma = INT_MIN;
	for(int i = 0 ; i < n ; ++i){
		if(a[i].tong_diem >= tmp_ma){
			i_ma = i;
			tmp_ma = a[i].tong_diem;
		}
	}
	for(int i = 0 ; i < n ; ++i){
		if(a[i].tong_diem == tmp_ma){
			cout << a[i].name << ' ';
			for(const auto &it : a[i].point) cout << it << ' ';
			cout << en;
		}
	}
}
int main() {
    //freopen("", "r", stdin); 
    //freopen("", "w", sdout);
    ios_base::sync_with_stdio(false);
  	cin.tie(NULL); cout.tie(NULL);
  	int n; cin >> n;
  	cin.ignore();
  	vector <SinhVien> ans;
  	for(int i = 0 ; i < n ; ++i){
  		string Name; getline(cin, Name);
  		SinhVien temp;
  		temp.name = Name;
  		ans.pb(temp);
  	}
  	Math(n, ans);
  	Phys(n, ans);
  	Chemis(n, ans);
  	Inconclusion(n, ans);
	return 0;
}
