/*

Solution for the problem 222 of aceptaelreto.com
    Copyright (C) 2017 Guillermo Torres Zamora

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
#include <stdio.h>
int main(){
	int x;
	int n;
	int i,j;
	int sum;
	int pot;
	int mod = 1000007;
	while(1){
		if(scanf("%d",&x)==EOF){
			return 0;
		}
		if(scanf("%d",&n)==EOF){
			return 0;
		}
		sum = 1;
		pot = 1;
		for(j=0;j<n;j++){
			pot = pot * x;
			pot = pot % mod;
			sum = sum + pot;
			sum = sum % mod;
		}
		printf("%ld\n",sum);
	}
	return 0;
}
