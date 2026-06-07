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
 
 char kt(char c){
  if('a' <= c && c <= 'z') return c;
  return c + 32;
}

char hoa(char c){
  if('A' <= c && c <= 'Z') return c;
  return c - 32;
}

//
 long long tach_so(string s){
  int cs = 0;
  for(int i = 0 ; i < Siz(s) ; ++i){
    if(s[i] == ' '){
      cs = i + 1;
      break;
    }
  }
  string so = "";
  for(int i = cs ; i < Siz(s) ; ++i){
    so += s[i];
  }
  long long ans = stoll(so);
  return ans; 
}

string tach_xau(string s){
  string tmp = "";
  for(int i = 0 ; i < Siz(s) ; ++i){
    if(s[i] != ' ') tmp += kt(s[i]);
    else return tmp;
  }
}

string tach_xau2(string s){
  string tmp = "";
  for(int i = 0 ; i < Siz(s) ; ++i){
    if(s[i] != ' ') tmp += s[i];
    else return tmp;
  }
  // cout << tmp << en;
}
 int main() {
     //freopen("", "r", stdin); 
     //freopen("", "w", stdout);
     ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
  int n; cin >> n;
  string s; 
  vector <string> a;

  while(getline(cin, s)){
    a.pb(s);
  }

  map <string, vector < pair <string, long long>>> paa;
  map <string, vector <long long>> tii;

  // unordered_map <string, int> ma;
  for(int i = 1 ; i < Siz(a) ; ++i){
    long long el2 = tach_so(a[i]);
    pair <string, long long> k = make_pair(tach_xau2(a[i]), el2);

    // k.first = tach_xau2(a[i]);
    // k.second.pb(el2);
    paa[tach_xau(a[i])].pb(k);
    tii[tach_xau(a[i])].pb(el2);
  }
  for(auto &it : paa){
    // int m = Siz(it.second);
    // for(int i = 0 ; i < m ; ++i){
      
    //   cout << it.second[i].first << ' ' << it.second[i].second << en;
    // }
    for(auto &at : tii){
      // int m = 0;
      if(it.first == at.first){
        string count = it.first;
        sort(tii[count].begin(), tii[count].end());
        for(int i = 0 ; i < Siz(at.second) ; ++i){
          cout << it.second[i].first << ' ' << at.second[i] << en;
        }
      }
    }
  }
  return 0;
 }
 