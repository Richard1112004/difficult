#include<bits/stdc++.h>

using namespace std;

int mod = 1e9 + 7;
int legendre(int n, int p){
	int cnt = 0;
	while(n >= p){
		cnt += n/p;
		n/=p;
	}
	return cnt;
}

int ngto(int n){
	for(int i = 2; i <= sqrt(n); i++)
		if(n % i == 0) return 0;
	return n > 1;
}
int powMod(int a, int n){
	long long res = 1;
	for(int i = 1; i <= n; i++){
		res *= a;
		res %= mod;
	}
	return res;
}
int C(int n, int k){
	long long res = 1;
	for(int i = 1; i <= n; i++){
		if(ngto(i)){
			int tu = legendre(n, i);
			int mau = legendre(k, i) + legendre(n-k, i);
			res *= powMod(i, tu-mau);
			res %= mod;
		}
	}
	return res;
}
int main(){
	int n, k; cin >> n >> k;
	cout << C(n-1, k-1);
}