#Solution for the problem 10183 of uva.onlinejudge.org
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
tabla = []
a = 0;
b = 1;
for i in range(0,500):
	c = a + b;
	a = b;
	b = c;
	tabla.append(c);
while True:
	(a,b) = input().split();
	(a,b) = (int(a),int(b));
	if a == 0 and b == 0:
		break;
	i = 0;
	count = 0;
	while True:
		if tabla[i] >= a:
			break;
		i = i +1;
	while True:
		if tabla[i] > b:
			break;
		i = i +1 ;
		count = count + 1;
	print(count);
