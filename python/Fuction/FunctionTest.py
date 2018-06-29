#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import math

# 一个简单的求绝对值函数
print('求绝对值函数：')
def my_abs(x):
	# isinstance函数用来检查参数类型
	if not isinstance(x, (int, float)):
		raise TypeError('bad oprand type')
	if x >= 0:
		return x
	else:
		return -x
L = [1, -4, 4]
for element in L:
	print(my_abs(element))

'''
定义函数getRoot(a, b, c)
求ax^2+bx+c=0的两个解
'''
print('求平方根函数：')
def getRoot(a, b, c):
	# math.sqrt()--求平方根函数
	delt = b**2 - 4 * a * c
	if delt >= 0:
		x1 = (-b + math.sqrt(delt)) / (2 * a)
		x2 = (-b - math.sqrt(delt)) / (2 * a)
		return x1, x2
	else:
		return '无解'
def RootPrint(a, b, c):
	print(getRoot(a, b, c))
RootPrint(-2, 78, 4)
RootPrint(1, -2, 1)
RootPrint(-2, 0, -56)

# 函数的默认参数--默认参数必须在后--且必须是不变对象
# 求一个数的任意次方
print('默认参数：')
def power(x, n=2):
	s = 1
	while n > 0:
		n -= 1
		s = s * x
	return s
print(power(5, 3))
print(power(5))
print(power(5, 2))

# 可变参数
'''
定义可变参数和定义一个list或tuple参数相比，
仅仅在参数前面加了一个*号
'''
print('可变参数1：')
def SumLoop1(numbers1):
	sum = 0
	for n in numbers1:
		sum = sum + n * n
	return sum
print(SumLoop1([1, 2, 5]))
print(SumLoop1([1, 2]))
print(SumLoop1([]))

print('可变参数2')
def SumLoop2(*numbers2):
	sum = 0
	for n in numbers2:
		sum = sum + n * n
	return sum
print(SumLoop2(1, 2, 3))
print(SumLoop2())
print(SumLoop2(2, 5, 7, 9))

# 关键字参数
print('关键字参数：')
def person(name, age, **kw):
	print('name:', name, 'age:', age, 'other:', kw)
person('Jeff', 24)
'''
除了name和age，还可以接受关键字kw
上面为只传入了必选参数
还可以传入任意任意个数的关键字
'''
person('Jeff', 24, city='文县', job='工程师')
# 也可写作下面的内容
extra = {'city':'文县', 'job':'工程师'}
person('Jeff', 24, **extra)

# 关键字参数变体
print('关键字参数变体：')
def person(name, age, **kw):
	if 'city' in kw:
		# 检查是否有city参数
		pass
	if 'job' in kw:
		# 检查是否有kw参数
		pass
	print('name:', name, 'age', 'other:', kw)
person('Jeff', 24, city='文县', job='工程师', addr='屯儿')