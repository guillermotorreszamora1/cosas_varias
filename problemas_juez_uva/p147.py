#Solution for the problem 147 of uva.onlinejudge.org
#    Copyright (C) 2018 Guillermo Torres Zamora
#    This program is free software: you can redistribute it and/or modify
#    it under the terms of the GNU General Public License as published by
#    the Free Software Foundation, either version 3 of the License, or
#    (at your option) any later version.
#    This program is distributed in the hope that it will be useful,
#    but WITHOUT ANY WARRANTY; without even the implied warranty of
#    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#    GNU General Public License for more details.
#    You should have received a copy of the GNU General Public License
#    along with this program.  If not, see <http://www.gnu.org/licenses/>.
coins = [5,10,20,50,100,200,500,1000,2000,5000,10000]
result = [ 0 for _ in range(40000)]
result[0] = 1;
for coin in coins:
	for i in range(coin,40000):
		result[i] += result[i-coin]
while(True):
	a = float(input())
	b = int(a*100);
	if b%5==1:
		b -= 1
	if b%5==2:
		b -= 2;
	if b%5==4 :
		b += 1
	if b%5==3 :
		b += 2
	if a == 0:
		break;
	print("%6.2f%17d"%(a,result[b]))
