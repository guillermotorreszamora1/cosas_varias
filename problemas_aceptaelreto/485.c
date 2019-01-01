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
  int n_etapas;
  int i;
  int etapas[100];
  int etapa;
  int acum;
  while(1){
    scanf("%d",&n_etapas);
    if(n_etapas==0){
      return 0;
    }
    acum =0;
    for(i=0;i<n_etapas;i++){
      scanf("%d",&etapa);
      etapas[i]=etapa;
      acum += etapa;
    }
    for(i=0;i<(n_etapas-1);i++){
      printf("%d ",acum);
      acum -= etapas[i];
    }
    printf("%d\n",acum);
  }
}
