#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s; cin >> s;
	int x = 0, y = 0;
	for(char cnt : s){
		if(cnt == 'E')
		   x++;
		if(cnt == 'N')
		   y++;
		if(cnt == 'W')
		   x--;
		if(cnt == 'S')
		   y--;
	}
	cout << x << " " << y;
	return 0;
}
