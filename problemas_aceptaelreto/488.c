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
  long long int n_puntos;
  long long int t_max;
  long long int puntos[1001];//coste en tiempo
  long long int coste[10001];//coste en save-points
  long long int punto;
  long long int i,j;
  long long int n_casos;
  scanf("%lld",&n_casos);
  while(n_casos--){
    scanf("%lld",&n_puntos);
    scanf("%lld",&t_max);
    puntos[0]=0;
    coste[0]=0;
    for(i=1;i<=n_puntos;i++){
      scanf("%d",&punto);
      puntos[i] = punto;
      coste[i] = 2000;/*Coste suficientemente alto(potencialmente infinito)*/
    }
    for(i=0;i<=n_puntos;i++){
      for(j=i+1;j<=n_puntos;j++){
        if(puntos[j]>(puntos[i]+t_max)){
          break;
        }
        if(coste[j]>(coste[i]+1)){
          coste[j]=coste[i]+1;
        }
      }
    }
    printf("%lld\n",coste[n_puntos]);
  }
  return 0;
}
