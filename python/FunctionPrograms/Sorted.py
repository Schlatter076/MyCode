#!usr/bin/env python3
# -*- coding: utf-8 -*-

# sorted()函数
L = [('Bob', 75), ('Adam', 92), ('Bart', 66), ('Lisa', 88)]
# 按名字排序
def by_name(t):
    return t[0].upper()
print(sorted(L, key = by_name))

# 按成绩排序
def by_score(n):
    return -n[1]
print(sorted(L, key = by_score))

# 返回函数 调用一次值增加1
def createCounter():
    def counter():
        num = 1
        while True:
            yield num
            num += 1
    s = counter()
    def f():
        return next(s)
    return f
counterA = createCounter()
print(counterA(), counterA(), counterA())
