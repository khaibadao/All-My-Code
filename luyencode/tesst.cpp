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

void np_tp(long long n){
  long long ans = 0;
  int mu = 0;
  int n_fake = n;
  // cout << "Ta se lay phan du, va nha voi 8^x (voi x la vi tri hien tai - 1)" << en;
  while(n){
    int tmp = n%10;
    cout << n << "%10 = " << tmp;
    ans += (tmp * pow(2, mu));
    cout << " (ket qua = " << tmp << " * " << 2 << "^" << mu << " = " << ans << ')' << en;
    ++mu;
    n /= 10;
  }
  cout << "--> " << n_fake << "q = " << ans << 'd' << en;
}

void bp_tp(long long n){
  long long ans = 0;
  int mu = 0;
  int n_fake = n;
  // cout << "Ta se lay phan du, va nha voi 8^x (voi x la vi tri hien tai - 1)" << en;
  while(n){
    int tmp = n%10;
    cout << n << "%10 = " << tmp;
    ans += (tmp * pow(8, mu));
    cout << " (ket qua = " << tmp << " * " << 8 << "^" << mu << " = " << ans << ')' << en;
    ++mu;
    n /= 10;
  }
  cout << "--> " << n_fake << "q = " << ans << 'd' << en;
}

void tlp_tp(string s){
  unordered_map <char, int> maa;
  for(int i = 0 ; i <= 9 ; ++i){
    maa[(i + '0')] = i;
  }
  maa['A'] = 10;
  maa['B'] = 11;
  maa['C'] = 12;
  maa['D'] = 13;
  maa['E'] = 14;
  maa['F'] = 15;

  int mu = 0;
  long long ans = 0;
  string s_fake = s;
  for(int i = Siz(s) - 1 ; i >= 0 ; i--){
    int tmp = maa[s[i]];
    ans += (tmp * pow(16, mu));
    cout << s_fake << " -> Lay ki tu cuoi: " << s[i] << " (kq = " << s[i] << "(" << maa[s[i]] << ")" << " * " << 16 << "^" << mu << " = " << ans << ')' << en;
    ++mu;
    s_fake.pop_back();
  }
  cout << "    --> " << s << "h = " << ans << 'd' << en;
}

void cd(int ma){

  if(ma == 2){
    string ans = "";
    long long n; cin >> n;
    int du = 0;
    long long n_fake = n;
    while(n){
      int du = n%2;
      ans = to_string(du) + ans;
      cout << n << "/2 = ";
      n /= 2;
      cout << n << "(du " << du << ")" << en;
    }

    cout << "Khi nguoc phan du tu duoi len va them cac bit khong phia truoc, ta co kq: ";
    int sl_bit = 16 - Siz(ans);
    for(int i = 0 ; i < sl_bit ; ++i) cout << 0;
    cout << ans << 'b' << en;
  }

  if(ma == 8){
    string ans = "";
    long long n; cin >> n;
    int du = 0;
    long long n_fake = n;
    while(n){
      int du = n%8;
      ans = to_string(du) + ans;
      cout << n << "/8 = ";
      n /= 8;
      cout << n << "(du " << du << ")" << en;
    }
    cout << "Khi nguoc phan du tu duoi len, ta co kq: " << ans << 'q' << en;
  }

  if(ma == 16){
    long long n; cin >> n;
    string ans  = "";
    vector <char> a(19);
    char kt = 'A';
    for(int i = 0 ; i <= 15 ; ++i){
      if(i <= 9)  a[i] = (i + '0');
      else{
        a[i] = kt;
        ++kt;
      }
    }
    while(n){
      int vt = n%16;
      ans = a[vt] + ans;
      cout << n << "/16 = ";
      n /= 16;
      cout << n << "(du " << vt << "(" << a[vt] << "))" << en;
    }
    cout << "Khi nguoc phan du tu duoi len, ta co kq: " << ans << 'h' << en;
  }

  if(ma == 7){

  }
}


int main() {
  //freopen("", "r", stdin); 
  //freopen("", "w", stdout);
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  // string s; cin >> s;
  int t = 1;
  while(t--){
      cd(2);
  }
  
  return 0;
}
