# Solution for the problem 10183 of uva.onlinejudge.org 
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
while True:
	f1 = 1
	f2 = 1
	entrada = input().split()
	n1 = int(entrada[0])
	n2 = int(entrada[1])	
	if n1==0 and n2==0:
		break
	contador = 0;
	while f2 <= n2:
		if f2 >= n1:
			contador = contador +1;
		f1 = f1+f2;
		(f1,f2)=(f2,f1)
	print(contador)
