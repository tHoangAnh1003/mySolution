#include <bits/stdc++.h>
using namespace std;


struct number{
  int val;
  int fre;
  number(int a, int b) {
    val = a;
    fre = b;
  }
  number() {
    val = 0;
    fre = 0;
  }
};

int check(int n){
  while(n>=10){
    int r = n%10;
    if(r<(n/10)%10) return 0;
    n/=10;
  }
  return 1;
}

int find(number a[], int n, int x){ 
  for(int i=0; i<n; i++){
    if(a[i].val==x) {
      return i;
    }
  }
  return -1;
}

int cmp(const number a, const number b){
  if (a.fre != b.fre) {
    return a.fre > b.fre;
  }
  return a.val > b.val;
}

int main() {
  int n; 
  vector<number> a;
  
  while (cin >> n) {
    if (check(n)) {
      auto it = find(begin(a), end(a), n);
      if (it != end(a)) {
        int freq = (*it).fre;
        a.erase(it);
        a.push_back(number{n, freq + 1});
      }
    }
  }
  
  for (auto it : a) {
    cout << it.val << ' ' << it.fre << "\n";
  }
  
  return 0;
}
