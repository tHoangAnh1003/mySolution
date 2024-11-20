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

const int MAXN = 1e6 + 5;
const int inf = 1e18;
const int MOD = 1e9 + 7;

int n;
pair<int , int> a[MAXN];

void subtask1(){
    int res = 0;
    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j < i ; j++){
            res = max(res , min(a[i].first * a[j].first , a[i].second * a[j].second));
            // cout << i << " " << j << " " << a[i].first * a[j].first << " " << a[i].second * a[j].second << endl;
        }
    cout << res << endl;
}

vector<pair<int , int>> b1 , b2;

bool cmp(pair<int , int> a,  pair<int , int> b){
    return (double)a.first/a.second < (double)b.first/b.second;
}

void AC(){
    for(int i = 1 ; i <= n ; i++){
        if((double)a[i].first / a[i].second > 1)
            b1.push_back(a[i]);
        else b2.push_back(a[i]);     
    }

    int result = 0;
    int last_max = 0;
    for(int i = 0 ; i < b1.size() ; i++){
        result = max(result , b1[i].second * last_max);
        last_max = max(last_max , b1[i].second);
    }

    last_max = 0;
    for(int i = 0 ; i < b2.size() ; i++){
        result = max(result , b2[i].first * last_max);
        last_max = max(last_max , b2[i].first);
    }

    if(b1.size() > 0 && b2.size() > 0){
        sort(b1.begin() , b1.end() , cmp);
        sort(b2.begin() , b2.end() , cmp);
        
        vector<int> suf;
        suf.resize(b1.size() + 1 , -inf);
        for(int i = (int)b1.size() - 1 ; i >= 0 ; i--)
            suf[i] = max(suf[i + 1] , b1[i].second);

        vector<int> pref;
        pref.resize(b1.size() + 1 , -inf);
        pref[0] = b1[0].first;
        for(int i = 1 ; i < b1.size() ; i++)
            pref[i] = max(pref[i - 1] , b1[i].first);
        
        int j = (int)b1.size() - 1;
        for(int i = 0 ; i < b2.size() ; i++){
            while(j >= 0 && b1[j].first * b2[i].first > b1[j].second * b2[i].second)
                j--;

            if(j >= 0)
                result = max(result , b2[i].first * pref[j]);

            if(j + 1 < b1.size())
                result = max(result , b2[i].second * suf[j + 1]);
        }

    }
    cout << result << endl;
}  

void solve(){
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
        cin >> a[i].first;
    for(int i = 1 ; i <= n ; i++)
        cin >> a[i].second;

    AC();
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
    return 0;
}
