/*
Solution for the problem 10198 of uva.onlinejudge.org
    Copyright (C) 2018 Guillermo Torres Zamora
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include<stdio.h>
int main(){
	int n;
	int i;
	long long dp[1010];
	dp[0] = 1;
	for (i=0; i<=1000; ++i){
		dp[i+1] += 2*dp[i];
		dp[i+2] += dp[i];
		dp[i+3] += dp[i];
	}
	while (scanf("%d",&n)!=EOF){
		printf("%lld\n",dp[n]);
	}
	return 0;
}
