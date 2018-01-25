/*

Solution for the problem 340 of aceptaelreto.com
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
	int i,n_casos;
	int cerillas,x,y;
	scanf("%d",&n_casos);
	for(i=0;i<n_casos;i++){
		scanf("%d",&x);
		scanf("%d",&y);
		cerillas = 1 + 3*x;
		/*printf("%d",cerillas);*/
		if(y>1){
			cerillas += 3*(y-1);
			/*printf("%d",cerillas);*/
			if(x>1){
				cerillas += 2*(y-1)*(x-1);
			}
		}
		printf("%d\n",cerillas);
	}
	return 0;
}
