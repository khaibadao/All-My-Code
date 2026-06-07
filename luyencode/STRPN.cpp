#include<bits/stdc++.h>
using namespace std;

//char ki_tu[5] = {'-', '+', '/', '*', '^'};

int FJ(char x){
	switch(x)
	{
		case '+' : case '-' :
			return 1;
		case '/' : case '*' :
			return 2;
		case '^' :
			return 3;
	}
	return 0;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int truy_van; cin >> truy_van;
	while(truy_van--){
		stack <char> st;
		queue <char> qe;
		string rpn; cin >> rpn;
		// neu st.top() <= tt ---> them vao queue va xoa khoi stack
		// else ---> them vao stack 
		// neu x : a --> z --> qe.push(x)
		// 
		for(char x : rpn){
			if(x == '(') st.push(x);
			else if('a' <= x && x <= 'z') qe.push(x);
			else if(x == '*' || x == '+' || x == '-' || x == '/' || x == '^'){
				if(st.empty()) st.push(x);
				else if(st.top() == '(') st.push(x);
				else
				{
					while(!st.empty() && FJ(x) <= FJ(st.top())){
						qe.push(st.top());
						st.pop();
					}
					st.push(x);
				}
			}else if(x == ')')
			{
				while(st.top() != '('){
					qe.push(st.top());
					st.pop();
				}
				st.pop();
			}
		}
		while(!st.empty()){
			qe.push(st.top());
			st.pop();
		}
		while(!qe.empty()){
			cout << qe.front();
			qe.pop();
		}
		cout << '\n';
	}
	return 0;
}
