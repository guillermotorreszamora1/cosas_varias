/*
Solution for the problem 10684 of uva.onlinejudge.org
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
#define MAX(x,y) ((x)>(y)?(x):(y))
int arr[10001],n,max_current,max_best;
int kadane(){
	int i;
	max_best = max_current = arr[0];
	for(i=1;i<n;i++){
		max_current = MAX(max_current+arr[i],arr[i]);
		max_best = MAX(max_best,max_current);
	}
	return max_best;
}
int main(){
	int i;
	int result;
	while(1){
		scanf("%d",&n);
		if (n == 0 ) return 0;
		for(i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		result = kadane();
		if ( result > 0){
			printf("The maximum winning streak is %d.\n", result);
		}else{
			printf("Losing streak.\n");
		}
	}
	return 0;
}
