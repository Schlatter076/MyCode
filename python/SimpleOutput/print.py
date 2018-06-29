# -*- coding: utf-8 -*-

L = ['Bart', 'Lisa', 'Adam']
for name in L:
	print("hello", name)

n = 0
while n < 100:
	n= n + 1
	if n % 2 == 0:
		continue
	print(n)

n1 = 87
print(hex(n1))