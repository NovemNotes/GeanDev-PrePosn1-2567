#include <bits/stdc++.h>
using namespace std;
char table[1009][1009];

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		for(int j=0;j<5*n;j++){
			if(j>=n&&j<(4*n)){
				cout << "#";
			}else{
				cout << ".";
			}
		}cout << "\n";
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<5*n;j++){
			if(j<n){
				cout << "#";
			}else{
				cout << ".";
			}
		}cout << "\n";
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<5*n;j++){
			if(j<n||j>=(3*n)){
				cout << "#";
			}else{
				cout << ".";
			}
		}cout << "\n";
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<5*n;j++){
			if(j<n||j>=(4*n)){
				cout << "#";
			}else{
				cout << ".";
			}
		}cout << "\n";
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<5*n;j++){
			if(j>=n&&j<(4*n)){
				cout << "#";
			}else{
				cout << ".";
			}
		}cout << "\n";
	}
	return 0;
}