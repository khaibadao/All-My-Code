#include <bits/stdc++.h>
#define Siz(s) s.size()
#define Max_value 1000000
using namespace std;

struct mmoa{
    double x, y, z;
};

double calculateArea(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    vector<mmoa> paa;
    for(int i = 0; i < n - 2; ++i) {
        int a = v[i];
        for(int j = i + 1; j < n - 1; ++j) {
            int b = v[j];
            for(int k = j + 1; k < n; ++k) {
                int c = v[k];
                if(a + b > c && a + c > b && b + c > a){
                    mmoa t;
                    t.x = (double)a + 0.0;
                    t.y = (double)b + 0.0;
                    t.z = (double)c + 0.0;
                    paa.push_back(t);
                }
            }
        }
    }
    double res = 0.0;
    for (const auto& tri : paa) {
        double area = calculateArea(tri.x, tri.y, tri.z);
        res = max(res, area);
    }
    cout << Siz(paa) << '\n';
    if(res) cout << fixed << setprecision(2) << res;
    else cout << -1;
    return 0;
}

