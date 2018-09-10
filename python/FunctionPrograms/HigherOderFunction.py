#!usr/bin/env python3
# -*- coding: utf-8 -*-

# 高阶函数 函数名是变量，故可以用函数本身做另一个函数的参数
def add(x, y, f):
    return f(x) + f(y)
print(add(-5, 6, abs))

# map()函数 将传入的函数作用到Iterable(可迭代对象)中，并把结果作为Iterator(生成器)返回
def f(x):
    return x**2
r = map(f, [1, 2, 3, 4, 5, 6, 7])
print(list(r))

# reduce()函数 将传入函数作用到序列中，并且结果继续和序列中下一个元素进行运算
from functools import reduce
def fn(x, y):
    return x * 10 +y
def char2num(s):
    digits = {'0': 0, '1': 1, '2': 2, '3': 3, '4': 4, '5': 5, '6': 6, '7': 7, '8': 8, '9': 9}
    return digits[s]
print(list(map(char2num, '2468')))
print(reduce(fn, map(char2num, '13579')))
