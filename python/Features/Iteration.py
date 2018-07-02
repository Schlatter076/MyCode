#!user/bin/env python3
# -*- coding: utf-8 -*-

# 判断一个对象是否可迭代--from collections import Iterable
# enumerate()把list变为索引-元素，P.S: for i, j in enumerate(L)
def findMinAndMax(L):
    from collections import Iterable
    while(isinstance(L, Iterable)):
        if L == []:
            return(None,  None)
        else:
            max = L[0]
            min = L[0]
            for i in L:
                if max < i:
                    max = i
                if min > i:
                    min = i
            return (min, max)
    return 'Error!'
# 不可迭代
print(findMinAndMax(123))
# 测试
if findMinAndMax([]) != (None, None):
    print('测试失败!')
elif findMinAndMax([7]) != (7, 7):
    print('测试失败!')
elif findMinAndMax([7, 1]) != (1, 7):
    print('测试失败!')
elif findMinAndMax([7, 1, 3, 9, 5]) != (1, 9):
    print('测试失败!')
else:
    print('测试成功!')
# 索引-元素
Lt = [7, 1, 3, 9, 5]
for i, j in enumerate(Lt):
    print(i, j)
