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
int main(){
  char c;
  long long int n_negros=0;
  long long int n_grises=0;
  while(1){
    scanf("%c",&c);
    if(c=='N'){
      n_negros++;
    }
    if(c=='G'){
      n_grises++;
    }
    if(c=='.'){
      if(n_negros==0&&n_grises==0)
        return 0;
      if((n_negros&1)&(n_grises&1)){
        printf("PAREJA MIXTA\n");
      }else if(n_negros&1){
        printf("NEGRO SOLITARIO\n");
      }else if(n_grises&1){
        printf("GRIS SOLITARIO\n");
      }else{
        printf("EMPAREJADOS\n");
      }
      n_negros = 0;
      n_grises = 0;
    }
  }
}
