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

int n, q; 
long long a[mang], tree1[mang*4], tree2[mang*4];

void build_1(int l, int r, int id){
	if(l == r){
		tree1[id] = a[l];
		return;
	}

	int mid = (l + r)/2;
	build_1(l, mid, id*2);
	build_1(mid + 1, r, id*2+1);
	tree1[id] = max(tree1[id*2], tree1[id*2+1]);
}

void build_2(int l, int r, int id){
	if(l == r){
		tree2[id] = a[l];
		return;
	}

	int mid = (l + r)/2;
	build_2(l, mid, id*2);
	build_2(mid + 1, r, id*2+1);
	tree2[id] = min(tree2[id*2], tree2[id*2+1]);
}

long long get(int l, int r, int u, int v, int id, int type){
	if(type == 1){
		// so lon
		if(u > r || v < l) return INT_MIN;
		if(u <= l && r <= v) return tree1[id];

		int mid = (l + r)/2;
		return max(get(l, mid, u, v, id*2, type), get(mid + 1, r, u, v, id*2+1, type));
	}

	else
	{	
	// so nho
		if(u > r || v < l) return INT_MAX;

		if(u <= l && r <= v) return tree2[id];

		int mid = (l + r)/2;
		return min(get(l, mid, u, v, id*2, type), get(mid + 1, r, u, v, id*2+1, type));
	}
}

void update(int l, int r, int chi_so, int gia_tri, int id){
	if(chi_so < l || chi_so > r) return;
	if(l == r){
		tree1[id] = gia_tri;
		tree2[id] = gia_tri;
		return;
	}

	int mid = (l + r)/2;

	update(l, mid, chi_so, gia_tri, id*2);
	update(mid + 1, r, chi_so, gia_tri, id*2 + 1);
	tree1[id] = max(tree1[id*2], tree1[id*2+1]);
	tree2[id] = min(tree2[id*2], tree2[id*2+1]);
}

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n >> q;
	for(int i = 1 ; i <= n ; ++i) cin >> a[i];

	build_1(1, n, 1);
	build_2(1, n, 1);

	while(q--){
		int type; cin >> type;
		if(type == 1){
			int chi_so, gia_tri; cin >> chi_so >> gia_tri;
			update(1, n, chi_so, gia_tri, 1);
		}else
		{
			int u, v; cin >> u >> v;
			long long big = get(1, n, u, v, 1, 1);
			long long small = get(1, n, u, v, 1, 0);
			cout << abs(big - small) << en;
		}
	}


	return 0;
}
