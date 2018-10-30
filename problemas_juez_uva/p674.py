#Solution for the problem 674 of uva.onlinejudge.org
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
coins = [1,5,10,25,50]
result = [ 0 for _ in range(7500)]
result[0] = 1;
for coin in coins:
	for i in range(coin,7500):
		result[i] += result[i-coin]
while(True):
	try:
		a = int(input())
		print(result[a])
	except EOFError:
		break;
