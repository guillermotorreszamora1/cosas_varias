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
long long int gcd(long long int m,long long int n){
  while(m>0){
    long long int c = n%m;n =m;m =c;
  }return n;
}
long long int lcm(long long int m,long long int n){
  return m*n / gcd(m,n);
}
int main(){
  long long int n_comensales;
  long long int i;
  long long int n,d;
  long long int comensales_n[10000];
  long long int comensales_d[10000];
  long long int total;
  long long int consumidos;
  while(1){
    total=1;
    scanf("%lld",&n_comensales);
    if(n_comensales==0)
      return 0;
    for(i=0;i<n_comensales;i++){
      scanf("%lld/%lld",&n,&d);
      total = lcm(total,d);
      comensales_n[i] = n;
      comensales_d[i] = d;
    }
    consumidos = 0;
    for(i=0;i<n_comensales;i++){
      consumidos += (total/comensales_d[i])*comensales_n[i];
    }
    printf("%lld\n",total-consumidos);
  }
  return 0;
}
