
// #include <bits/stdc++.h>
// using ll = long long;
// const int MOD = 1e9+7;
// const int MAX = 1e5+5;
// using namespace std;
// int main(){
//     int n, k; cin >> n >> k;
//     ll a[n];
//     multiset<int> ms;
//     for(auto &x: a) cin >> x;
//     for(int i = 0; i < k; i++){
//         ms.insert(a[i]);
//     }
//     auto it = next(ms.begin(),(k-1)/2);
//     for(int i = k; i < n; i++){
//         cout << *it << " ";
//         ms.insert(a[i]);
//         if(a[i]<*it&&a[i-k]<=*it)
//         else if(a[i]>=*it&&a[i-k]>*it) 
//         else if(a[i-k]<=*it) it++;
//         else if(a[i]<*it) it--;
//         ms.erase(ms.find(a[i-k]));  
//     }
//     cout << *it;
// }
