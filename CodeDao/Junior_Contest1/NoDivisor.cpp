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

void subtask1(){
    int result = 0;
    for(int i = 1 ; i <= n ; i++){
        if(n % i != 0){
            result += i;
            if(result > MOD)
                result -= MOD;
        }
    }
    cout << result << endl;
}

void subtask2(){
    int sum_of_divisors = 0;
    for(int i = 1 ; i * i <= n ; i++){
        if(n % i == 0){
            sum_of_divisors += i;
            if(i != n/i)
                sum_of_divisors += n/i;
        }
    }

    int answer = 0;    
    if(n % 2 == 0){
        answer = (n / 2) * (n + 1) % MOD;
    }else answer = (n * ((n + 1) / 2)) % MOD;

    answer -= sum_of_divisors;
    answer %= MOD;
    answer = (answer + MOD) % MOD;

    cout << answer << endl;
}

void solve(){
    cin >> n;

    if(n <= 1e7)subtask1();
    else subtask2();
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
    return 0;
}
