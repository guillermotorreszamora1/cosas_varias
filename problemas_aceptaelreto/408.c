/*

Solution for the problem 408 of aceptaelreto.com
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
#include<stdio.h>
int main(){
	long n_casos;

	long p,l_d,l_s,l_m;


	long d,s,m;
	scanf("%ld",&n_casos);
	for(;n_casos>0;n_casos--){
		scanf("%ld",&p);
		scanf("%ld",&l_d);
		scanf("%ld",&l_s);
		scanf("%ld",&l_m);
		if(p>l_m){
			m =  p/l_m;
			p = p-m*l_m;
			if(p==0){
				p = l_m;
				m--;
			}
		}else{
		m=0;
		}
		if(p>l_s){
			s = p/l_s;
			p = p-s*l_s;
			if(p==0){
				p = l_s;
				s--;
			}
		}else{
		s=0;
		}
		d = p/l_d;
		if(p%l_d!=0){
			d++;
		}
		printf("%ld %ld %ld\n",m,s,d);
	}
	return 0;
}

