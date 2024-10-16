#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n,m,q;
vector<ll> v,tmp;
unordered_map<ll,vector<ll>> mp;
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	cin >> n >>q;
	for(ll i=1;i<=n;i++){
		ll x;cin >> x;
		mp[x].push_back(i);
	}
	tmp = v;
	while(q--){
		ll x,l,r,L,R;cin >> x >> l >> r;
		L = upper_bound(mp[x].begin(),mp[x].end(),r) - mp[x].begin();
		R = lower_bound(mp[x].begin(),mp[x].end(),l) - mp[x].begin();
		cout << L-R << "\n";
	}
	return 0;
}