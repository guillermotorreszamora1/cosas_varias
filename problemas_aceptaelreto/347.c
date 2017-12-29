/*
	Solution for the problem 347 of aceptaelreto.com

	- Haciendo pajaritas de papel - 

    Copyright (C) 2017 hnko
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

int making_birds(int a, int b){
	int aux;
	if(a<10 || b<10) return 0;
	else{
		if(b>a){/* take into account that could be more than one square */
			aux = b/a;
			b-=aux*a;
			return aux+making_birds(a, b);
		}else
			aux = a/b;
			a-=aux*b;
			return aux+making_birds(a,b);

	}
}


int main(int argc, char const *argv[])
{
	int a, b;
	while(scanf("%d %d", &a, &b) && (a!=0 || b!=0)){
		printf("%d\n", making_birds(a, b));
	}

	return 0;
}
