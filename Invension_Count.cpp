#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,sum;
vector<ll> v;
ll cnt[20];
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	cin >> n;
	for(ll i=0;i<n;i++){
		ll x;cin >> x;
		v.push_back(x);
	}
	for(ll i=n-1;i>=0;i--){
		for(ll j=1;j<v[i];j++){
			sum+=cnt[j];
		}cnt[v[i]]++;
	}
	cout << sum;
	return 0;
}