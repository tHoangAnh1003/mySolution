/*
    Cred : SunnyYeahBoi
    It's my last chance (⌐■_■)
    Problem :
*/

#include<bits/stdc++.h>

using namespace std;

#define int long long
#define double long double
#define endl "\n"
#define NAME "a"

const int MAXN = 1e6 + 5;
const int inf = 1e18;
const int MOD = 1e9 + 7;

int n;
int a[MAXN];

void solve(){
    cin >> n;

    vector<int> sc , sl; // số chẵn - số lẻ

    for(int i = 1 ; i <= n ; i++){
        cin >> a[i];
        if(a[i] % 2 == 0)
            sc.push_back(a[i]);
        else sl.push_back(a[i]);
    }

    sort(sc.begin() , sc.end() , greater<int>());
    sort(sl.begin() , sl.end() , greater<int>());

    vector<int> arr;

    while(sc.size() > 0 && sl.size() > 0){
        arr.push_back(sc.back());
        arr.push_back(sl.back());
    
        sc.pop_back(); sl.pop_back();
    }

    while(sc.size() > 0){
        arr.push_back(sc.back());
        sc.pop_back();
    }
    while(sl.size() > 0){
        arr.push_back(sl.back());
        sl.pop_back();
    }

    for(auto x : arr)
        cout << x << " ";
    cout << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
    return 0;
}
