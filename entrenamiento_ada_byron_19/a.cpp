/*
Copyright Xiangnan Wu, Nicolas Wolyniec y Guillermo Torres 
*/
#include<iostream>
#include <unordered_map>

using namespace std;
int T;
unordered_map<int,int> cache;
int solve(int n){
  if(cache.find(n) != cache.end())
    return cache[n];

  if(n<=2) return 0;

  if(n&1){
    cache[n] = 1 +solve(n/2)*2;
  }else{
    cache[n] = 1 + solve(n/2) + solve(n/2-1);
  }
  return cache[n];
}
int main(){
  while(cin >> T and T){
    if(T==1 or T==2)
      cout << 1 << endl;
    else if(T==3 or T==4)
      cout << 2 << endl;
    else
      cout << solve(T-2) + 2 << endl;
  }

  return 0;
}
