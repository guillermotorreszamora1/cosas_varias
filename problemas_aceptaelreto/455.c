/*
Solution for the problem 455 of aceptaelreto.com
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
int mcd(int m, int n)  {  
    while(m>0)  {  
        int c = n % m;  
        n = m;  
        m = c;  
    }  
    return n;  
}
int main(){
	int i,n_casos;
	scanf("%d",&n_casos);
	for(i=0;i<n_casos;i++){
		int estadistica;
		int personas;
		scanf("%d",&estadistica);
		personas = 10000/mcd(10000,estadistica);
		printf("%d\n",personas);
	}
	return 0;
}
