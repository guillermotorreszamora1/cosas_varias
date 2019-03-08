/*Copyright Xiangnan Wu, Nicolas Wolyniec y Guillermo Torres*/
#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
using namespace std;
int N, a, b;
vector<pair<int, int> > arr;

int solve(){
  int count = 0;
  int maxi = arr[0].second;
  int mini = arr[0].first;

  for(int i=1; i<N; i++){
    if(arr[i].first <= maxi){
      maxi = max(maxi, arr[i].second);
    }else{
      count += maxi - mini +1;
      mini = arr[i].first, maxi = arr[i].second;
    }
  }
  count += maxi - mini +1;
  return count;
}

int main(){

  while(cin >> N and N){
    arr.clear();
    for(int i=0; i<N; i++){
      cin >> a >> b;
      arr.push_back(make_pair(a, b));
    }
    sort(arr.begin(), arr.end());
    cout << solve() << endl;
  }
  return 0;
}
