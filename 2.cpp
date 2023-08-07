#include <bits/stdc++.h>
using ll = long long;
const int MOD = 1e9+7;
const int MAX = 1e5+5;
const int NMOD = -1e9+7;
using namespace std;
int main(){
    int n; cin >> n;
    int a[n][n];
    int t = 0, b = n - 1, l = 0, r = n - 1;
    int dir = 0; 
    int num = 1;
    while(l<=r&&t<=b){
        if(dir==0){
            for(int i = l; i <= r; i++){
                a[t][i] = num++; 
            }
            t++;
        }
        else if(dir==1){
            for(int i = t; i <= b; i++){
                a[i][r] = num++;
            }
            r--;
        }
        else if(dir==2){
            for(int i = r; i>= l; i--){
                a[b][i] = num++;
            }
            b--;
        }
        else if(dir==3){
            for(int i = b; i>= t; i--){
                a[i][l] = num++;
            }
            l++;
        }
        dir = (dir +1)%4;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
