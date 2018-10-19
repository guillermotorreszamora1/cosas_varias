#include <iostream>
#include <algorithm>
#include<cmath>
using namespace std;
int src, dest, weight, nodes, edges;
int dp[105][105];

int main(){
  int t=1;
  while(cin>>nodes >> edges){
    if(nodes == 0 and edges == 0) return 0;
    for(int i=1; i<=nodes; i++){
      for(int j=1; j<=nodes; j++){
        dp[i][j] = -1e6;
      }
      dp[i][i] = 0;
    }
    for(int i =0; i<edges; i++){
      cin >>src >>dest >>weight;
      dp[src][dest] = weight;
    }
    cin >> src >> dest >> weight;
    for(int k=1; k<=nodes; k++){
      for(int i=1; i<=nodes; i++){
        for(int j=1; j<=nodes; j++){
          dp[i][j] = dp[j][i] = max(dp[i][j], min(dp[i][k], dp[k][j]));
        }
      }
    }
    int result = ceil(((double)weight*1.0) / (dp[src][dest]-1));
    printf("Scenario #%d\n", t++);
    printf("Minimum Number of Trips = %d\n\n", result);


  }

  return 0;
}
