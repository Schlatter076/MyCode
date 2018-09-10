#!usr/bin/env python3
# -*- coding: utf-8 -*-

# 用filter求素数
def nums():
    n = 1
    while True:
        n += 2
        # 定义成生成器,调用一次则取下一个数如，3，5，7等
        yield n
def notDivisible(n):
    return lambda x : x % n > 0  # 取大于n的数
# 此函数返回一个序列
def primes():
    yield 2
    it = nums() # 初始序列
    while True:
        n = next(it) # 返回序列的第一个数
        yield n
        it = filter(notDivisible(n), it) # 构造新序列
# 打印1000以内的素数:
for n in primes():
    if n < 1000:
        print(n)
    else:
        break

# 求回数 12321
def isPalindrome(n):
    s = str(n)
    return s == s[::-1]
output = filter(isPalindrome, range(1, 1000))
print('1~1000:', list(output))
if list(filter(isPalindrome, range(1, 200))) == [1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 22, 33, 44, 55, 66, 77, 88, 99, 101, 111, 121, 131, 141, 151, 161, 171, 181, 191]:
    print('测试成功!')
else:
    print('测试失败!')
