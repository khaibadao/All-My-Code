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

int tinh(int a, int b, char tt){
    if(tt == '+') return a + b;
    if(tt == '-') return a - b;
    if(tt == '*') return a*b;
    if(tt == '_') return a + b;
}

string tach1(string s, int cs, unordered_map <int, int> &maa){
    string tmp = "";
    for(int i = cs ; i < Siz(s) ; ++i){
        if('0' <=  s[i] && s[i] <= '9' && !maa[i]){
            tmp += s[i];
            ++maa[i];
        }else return tmp;
    }
    return tmp;
}

string tach2(string s, int cs){
    string tmp = "";
    for(int i = cs ; i < Siz(s) ; ++i){
        if('0' <=  s[i] && s[i] <= '9' ){
            tmp += s[i];
            // ++maa[i];
        }else return tmp;
    }
    return tmp;
}
int main() {
    //freopen("", "r", stdin); 
    //freopen("", "w", stdout);
    ios_base::sync_with_stdio(false);
      cin.tie(NULL); cout.tie(NULL);
    string s;

    int cham_i = 0, phay_i = 0;
    int cham_j = 0, phay_j = 0;
    int i1 = 0, i2 = 0, j1 = 0, j2 = 0;
    int th1 = 0, th2 = 0, th3 = 0, th4 = 0;

    vector <string> a;
    while(cin >> s){
        a.pb(s);
    }
    // 0, 1, 5, 8
    string ko = a[0];
    int sum_i = 0;
    char tt_i = '_';
    for(int i = 0 ; i < Siz(ko) ; ++i){
        if(ko[i] == 'i'){
            char x = ko[i + 1];
            if(x == '+' || x == '-' || x == '*'){
                tt_i = x;
                string gt_i = tach2(ko, i + 2);
                sum_i = stoi(gt_i);
            }else break;
        }
    }


    string mot = a[1];
    int sum_j = 0;
    char tt_j = '_';
    for(int i = 0 ; i < Siz(mot) ; ++i){
        if(mot[i] == 'j'){
            char x = mot[i + 1];
            if(x == '+' || x == '-' || x == '*'){
                // cout << x << en;
                tt_j = x;
                string gt_j = tach2(mot, i + 2);
                sum_j = stoi(gt_j);
            }else break;
        }
    }
    // cout << tt_i << ' ' << sum_i << en;
    // cout << tt_j << ' ' << sum_j << en;
    // 0, 1, 5, 8

    string nam = a[5];
    int check = 0;
    unordered_map <int, int> maa1;
    vector <int> ii;
    for(int i = 0 ; i < Siz(nam) ; ++i){
        if('0' <= nam[i] && nam[i] <= '9'){
            string so = tach1(nam, i, maa1);
            if(!so.empty())
            {
                i1 = stoi(tach2(nam, i));
                ii.pb(i1);
            }
        }
        if(nam[i] == ',') ++phay_i;
        if(nam[i] == '.') ++cham_i;
        if(nam[i] == ']') break;
    }

    // for(int i = 0 ; i < Siz(ii) ; ++i) cout << ii[i] <<  ' ';
    string tam = a[8];
    check = 0;

    // cout << cham << ' ' << phay << en;
    vector <int> jj;
    unordered_map <int, int> maa2;
    for(int i = 0 ; i < Siz(tam) ; ++i){
        if('0' <= tam[i] && tam[i] <= '9'){
            string so = tach1(tam, i, maa2);
            if(!so.empty())
            {
                j1 = stoi(tach2(tam, i));
                jj.pb(j1);
            }
        }
        if(tam[i] == ',') ++phay_j;
        if(tam[i] == '.') ++cham_j;
        if(tam[i] == ']') break;
    }

    // cout << cham << ' ' << phay << en;

    // cout << i1 << ' ' << i2 << ' ' << j1 << ' ' << j2 << en;
    // cout << tt_i << ' ' << tt_j << en; 

    // int cs = -1;

    if(cham_i && cham_j) ++th1; // .. ..
    if(phay_i && phay_j) ++th2; // ,  ,
    if(cham_i && !cham_j) ++th3; // .. ,
    if(!cham_i && cham_j == 2) ++th4; // , ..
    
    // cout << sum_i << ' ' << sum_j << en;
    if(th1){ // .. .. 
        cout << '[';
        for(int i = ii[0] ; i <= ii[Siz(ii) - 1] ; ++i){
            for(int j = jj[0] ; j <= jj[Siz(jj) - 1] ; ++j){
                if(i == ii[Siz(ii) - 1] && j == jj[Siz(jj) - 1]){
                    cout << '(' << tinh(i, sum_i, tt_i) << ',' << tinh(j, sum_j, tt_j) << ")]";
                }else cout << '(' <<  tinh(i, sum_i, tt_i) << ',' << tinh(j, sum_j, tt_j) << "), ";
            }
        }
    }

    if(th2){ 
        cout << '[';
        for(int i = 0 ; i < Siz(ii) ; ++i){
            for(int j = 0 ; j < Siz(jj) ; ++j){
                if(i == Siz(ii) - 1 && j == Siz(jj) - 1){
                    cout << '(' << tinh(ii[i], sum_i, tt_i) << ',' << tinh(jj[j], sum_j, tt_j) << ")]";
                }else cout << '(' << tinh(ii[i], sum_i, tt_i) << ',' << tinh(jj[j], sum_j, tt_j) << "), ";
            }
        }
    }

    if(th3){ // .. ,
        cout << '[';
        for(int i = ii[0] ; i <= ii[Siz(ii) - 1] ; ++i){
            for(int j = 0 ; j < Siz(jj) ; ++j){
                if(i == ii[Siz(ii) - 1] && j == Siz(jj) - 1){
                    cout << '(' << tinh(i, sum_i, tt_i) << ',' << tinh(jj[j], sum_j, tt_j) << ")]";
                }else cout << '(' <<  tinh(i, sum_i, tt_i) << ',' << tinh(jj[j], sum_j, tt_j) << "), ";
            }
        }
    }

    if(th4){ // , ..
        cout << '[';
        for(int i = 0 ; i < Siz(ii) ; ++i){
            for(int j = jj[0] ; j <= jj[Siz(jj) - 1] ; ++j){
                if(i == Siz(ii) - 1 && j == jj[Siz(jj) - 1]){
                    cout << '(' << tinh(ii[i], sum_i, tt_i) << ',' << tinh(j, sum_j, tt_j) << ")]";
                }else cout << '(' <<  tinh(ii[i], sum_i, tt_i) << ',' << tinh(j, sum_j, tt_j) << "), ";
            }
        }
    }
    // for(string t : a) cout  << t << ' ' << ++cs << en;
    return 0;
}
