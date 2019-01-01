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
  long long int n_casos;
  long long int n_vueltas;
  long long int falta_precision;
  scanf("%lld",&n_casos);
  while(n_casos--){
    scanf("%lld",&n_vueltas);
    falta_precision = n_vueltas;
    while(falta_precision>=3600){
      n_vueltas += falta_precision/3600;
      falta_precision = (falta_precision%3600) + falta_precision/3600;
    }
    printf("%lld\n",n_vueltas);
  }
  return 0;
}
