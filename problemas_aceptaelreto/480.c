/*
Solution for the problem 471 of aceptaelreto.com
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
#define MIN(x,y) ((x)<(y)?(x):(y))
int main(){
  int n_casos;
  int malas;
  int total;
  int p,p_malas;
  scanf("%d",&n_casos);
  while(n_casos--){
    scanf("%d",&total);
    scanf("%d",&p_malas);
    scanf("%d",&p);
    malas = total/p*p_malas;
    total = total%p;
    malas += MIN(p_malas,total);
    printf("%d\n",malas);
  }
  return 0;
}
