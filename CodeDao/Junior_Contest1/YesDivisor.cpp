/*
    Cred : SunnyYeahBoi
    It's my last chance (⌐■_■)
    Problem :
*/

#include<bits/stdc++.h>

using namespace std;

#define double long double
#define endl "\n"

const int MAXN = 1e7 + 5;
const int MOD = 1e9 + 7;


int n , k;

void subtask1(){
    int result = 0;
    for(int i = 1 ; i <= n ; i++){
        int cnt = 0;
        
        for(int j = 1 ; j <= i ; j++)
            if(i % j == 0) cnt++;
        
        if(cnt <= k) result++;
    }
    cout << result << endl;
}


void subtask2(){
    int result = 0;
    for(int i = 1 ; i <= n ; i++){
        int cnt = 0;
        
        for(int j = 1 ; j * j <= i ; j++){
            if(i % j == 0){
                cnt++;
                if(i / j != j)
                    cnt++;
            }

            if(cnt > k) break;
        }
        
        if(cnt <= k) result++;
    }
    cout << result << endl;
}

int cnt[MAXN];

void subtask3(){
    for(int i = 1 ; i <= n ; i++)
        cnt[i] = 1;
    for(int i = 2 ; i <= n ; i++){
        for(int j = i ; j <= n ; j += i)
            cnt[j]++;
    }

    int result = 0;
    for(int i = 1 ; i <= n ; i++)
        if(cnt[i] <= k)
            result++;
    cout << result << endl;
}

void solve(){
    cin >> n >> k;

    if(n <= 1e4)subtask1();
    else if(n <= 1e5)subtask2();
    else subtask3();
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
    return 0;
}
