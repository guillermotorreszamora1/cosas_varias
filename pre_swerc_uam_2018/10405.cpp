#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;
int dp[1002][1002];
string s1, s2;

int main(){
  while(getline(cin, s1)){
    getline(cin, s2);

    for(int i=0; i<=s1.size(); i++){
      for(int j=0; j<=s2.size(); j++){
        if(i==0 or j== 0){
          dp[i][j] = 0;
        }
        else if(s1[i-1] == s2[j-1]){
          dp[i][j] = 1 + dp[i-1][j-1];
        }else{
          dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
      }
    }
    cout << dp[s1.size()][s2.size()] << endl;
}

  return 0;
}
