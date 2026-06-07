#include <bits/stdc++.h>
#define MOD 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005
#define pb push_back
#define mang 1000001


using namespace std;

typedef unordered_map<long long, long long> unmap;

bool zero(string s){
    string ans = "";
    string so = "ZERO";
    int cs = 0;
    for(int i = 0 ; i < Siz(so) ; ++i){
        for(int j = cs ; j < Siz(s) ; ++j){
            if(s[j] == so[i]){
                ans += s[j];
                cs = j;
                break;
            }
        }
    }
    // cout << so << ' ' << ans << en;
    return ans == so;
}

bool one(string s){
    string ans = "";
    string so = "ONE";
    int cs = 0;
    for(int i = 0 ; i < Siz(so) ; ++i){
        for(int j = cs ; j < Siz(s) ; ++j){
            if(s[j] == so[i]){
                ans += s[j];
                cs = j;
                break;
            }
        }
    }
    // cout << so << ' ' << ans << en;
    return ans == so;
}

bool two(string s){
    string ans = "";
    string so = "TWO";
    int cs = 0;
    for(int i = 0 ; i < Siz(so) ; ++i){
        for(int j = cs ; j < Siz(s) ; ++j){
            if(s[j] == so[i]){
                ans += s[j];
                cs = j;
                break;
            }
        }
    }
    // cout << so << ' ' << ans << en;
    return ans == so;
}

bool three(string s){
    string ans = "";
    string so = "THREE";
    int cs = 0;
    for(int i = 0 ; i < Siz(so) ; ++i){
        for(int j = cs ; j < Siz(s) ; ++j){
            if(s[j] == so[i]){
                ans += s[j];
                cs = j;
                break;
            }
        }
    }
    // cout << so << ' ' << ans << en;
    return ans == so;
}

bool four(string s){
    string ans = "";
    string so = "FOUR";
    int cs = 0;
    for(int i = 0 ; i < Siz(so) ; ++i){
        for(int j = cs ; j < Siz(s) ; ++j){
            if(s[j] == so[i]){
                ans += s[j];
                cs = j;
                break;
            }
        }
    }
    // cout << so << ' ' << ans << en;
    return ans == so;
}

bool five(string s){
    string ans = "";
    string so = "FIVE";
    int cs = 0;
    for(int i = 0 ; i < Siz(so) ; ++i){
        for(int j = cs ; j < Siz(s) ; ++j){
            if(s[j] == so[i]){
                ans += s[j];
                cs = j;
                break;
            }
        }
    }
    // cout << so << ' ' << ans << en;
    return ans == so;
}

bool six(string s){
    string ans = "";
    string so = "SIX";
    int cs = 0;
    for(int i = 0 ; i < Siz(so) ; ++i){
        for(int j = cs ; j < Siz(s) ; ++j){
            if(s[j] == so[i]){
                ans += s[j];
                cs = j;
                break;
            }
        }
    }
    // cout << so << ' ' << ans << en;
    return ans == so;
}

bool seven(string s){
    string ans = "";
    string so = "SEVEN";
    int cs = 0;
    for(int i = 0 ; i < Siz(so) ; ++i){
        for(int j = cs ; j < Siz(s) ; ++j){
            if(s[j] == so[i]){
                ans += s[j];
                cs = j;
                break;
            }
        }
    }
    // cout << so << ' ' << ans << en;
    return ans == so;
}

bool eight(string s){
    string ans = "";
    string so = "EIGHT";
    int cs = 0;
    for(int i = 0 ; i < Siz(so) ; ++i){
        for(int j = cs ; j < Siz(s) ; ++j){
            if(s[j] == so[i]){
                ans += s[j];
                cs = j;
                break;
            }
        }
    }
    // cout << so << ' ' << ans << en;
    return ans == so;
}

bool nine(string s){
    string ans = "";
    string so = "NINE";
    int cs = 0;
    for(int i = 0 ; i < Siz(so) ; ++i){
        for(int j = cs ; j < Siz(s) ; ++j){
            if(s[j] == so[i]){
                ans += s[j];
                cs = j;
                break;
            }
        }
    }
    // cout << so << ' ' << ans << en;
    return ans == so;
}





int main() {
    //freopen("", "r", stdin); 
    //freopen("", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s; cin >> s;
    if(zero(s)) return cout << "ZERO", 0;
    if(one(s)) return cout << "ONE", 0;
    if(two(s)) return cout << "TWO", 0;
    if(three(s)) return cout << "THREE", 0;
    if(four(s)) return cout << "FOUR", 0;
    if(five(s)) return cout << "FIVE", 0;
    if(six(s)) return cout << "SIX", 0;
    if(seven(s)) return cout << "SEVEN", 0;
    if(eight(s)) return cout << "EIGHT", 0;
    if(nine(s)) return cout << "NINE", 0;
    cout << "CHIA BUON, PHAI VE ROI, HEN NAM SAU NHE!!"; 
    return 0;
}