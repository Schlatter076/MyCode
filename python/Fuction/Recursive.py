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
可惜解释器没有做尾递归优化，仍然回溢出
'''
print('优化阶乘函数：')
def fact(n):
    return fact_1(n, 1)
def fact_1(num, product):
    if num == 1:
        return product
    return fact_1(num - 1, num * product)
print('10! = ', fact_1(10, 1))
