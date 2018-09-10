#!usr/bin/env python3
# -*- coding: utf-8 -*-

# 将不规范的英文名字，改成规范的首字母大写其他小写
def normalize(name):
    # capitalize()函数将字符串首字母变大写，其他小写
    return name.capitalize()
def normalize1(name):
    r = name[0].upper()
    r += name[1:len(name)].lower()
    return r
L1 = ['adam', 'LISA', 'barT']
L2 = list(map(normalize, L1))
L3 = list(map(normalize1, L1))
print(L2)
print(L3)

# 求list的积
from functools import reduce
def prod(L):
    def f(x, y):
        return x * y
    r = reduce(f, L)
    return r
s = prod([3, 5, 7, 9])
print(s)

# 把字符串'123.456'转换成浮点数123.456
def str2float(s):
    # 返回小数点在字符串中最后出现的位置
    dot_rindex = s.rindex('.')
    # 将小数点进行替换
    s_dotFree = s.replace('.', '')
    # 将字符串转换成整数
    resultint = reduce(lambda x, y: x * 10 + y, map(int, s_dotFree))
    # 将整数转换成浮点数
    resultfloat = resultint / (10 ** (len(s) - dot_rindex - 1))
    return resultfloat
print(str2float('45678.9'))
