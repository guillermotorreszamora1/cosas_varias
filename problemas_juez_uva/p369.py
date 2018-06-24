#Solution for the problem 369 of uva.onlinejudge.org
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

def fact(N):
	resultado=1;
	for i in range(1,N+1):
		resultado = i*resultado;
	return resultado;
while True:
	entrada = input().split();
	N = entrada[0];
	M = entrada[1];
	N = int(N)
	M = int(M)
	if N==0 and M==0 :
		exit()
	print(str(N)+" things taken "+str(M)+" at a time is "+str(int(fact(N)/(fact(N-M)*fact(M))))+" exactly.")
