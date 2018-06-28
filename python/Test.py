#!/usr/bin/env python3
# -*- coding: utf-8 -*-
'''
classmates = ['Jeff', 'jack', 'Neo']
print(classmates[0], '\n')
print(classmates[-1], '\n')
# 在末尾增加列表元素
classmates.append('利永')
print(classmates, '\n')
# 在指定位置增加列表元素
classmates.insert(1, 'puppy')
print(classmates, '\n')
# 删除最后一个列表元素
classmates.pop()
print(classmates, '\n')
# 删除指定位置列表元素
classmates.pop(1)
print(classmates, '\n')
# 替换指定位置列表元素
classmates[2] = '阿炮'
print(classmates, '\n')
'''
L = [
	['Apple', 'Google', 'Microsoft'],
	['Java', 'Python', 'Ruby', 'PHP'],
	['Adam', 'Bart', 'Lisa']
]
t = L[0]
e = L[1]
m = L[2]
print(L[0][0])
print(L[1][1])
print(L[2][2])
for i in L:
	print(i)
	for j in t:
		print(j)		
	for k in e:
		print(k)	
	for p in m:
		print(p)