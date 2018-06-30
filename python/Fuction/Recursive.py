#!/usr/bin/env python3
# -*- coding: utf-8 -*-

print('求阶乘函数：')
def fact(n):
    if n == 1:
        return 1
    return n * fact(n - 1)
print('8! = ', fact(8))
'''
使用递归要小心栈(stack)溢出
可通过尾递归优化--类似循环语句
尾递归是指，在函数返回的时候，调用自身本身，并且，return语句不能包含表达式
可惜解释器没有做尾递归优化，仍然会溢出
'''
print('优化阶乘函数：')
def fact(n):
    return fact_1(n, 1)
def fact_1(num, product):
    if num == 1:
        return product
    return fact_1(num - 1, num * product)
print('10! = ', fact_1(10, 1))
print('求解汉诺塔')
'''
从a将n个盘子借助b移动到c，小盘子上不能放大盘子
先把n-1个盘子移动到b，再把第n个盘子从a移到c
最后从b把n-1个盘子移动到c
'''
def move(n, a, b, c):
    if n == 1:
        print(a, '-->', c)
    else:
        move(n - 1, a, c, b)
        move(1, a, b, c)
        move(n - 1, b, a, c)
move(6, 'A', 'B', 'C')
