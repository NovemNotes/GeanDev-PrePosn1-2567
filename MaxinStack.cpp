#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;

stack<ll> st,mx;
ll n;
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	cin >> n;
	while(n--){
		string s;cin >> s;
		if(s == "Pop"){
			if(!st.empty()&&!mx.empty()&&st.top()==mx.top()){
				st.pop();
				mx.pop();
			}else if(!st.empty()&&!mx.empty()){
				st.pop();
			}
		}else{
			cin.ignore();
			ll x;cin >> x;
			st.push(x);
			if(!mx.empty()&&x>mx.top()){
				mx.push(x);
			}else if(mx.empty()){
				mx.push(x);
			}
		}
		cout << mx.top() << "\n";
	}
	return 0;
}