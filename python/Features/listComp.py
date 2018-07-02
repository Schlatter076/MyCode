#!user/bin/env python3
# -*- coding: utf-8 -*-

# 列表生成式
L1 = ['Hello', 'World', 18, 'Apple', None]
'''
L2 = []
for s in L1:
    # 如果是字符串
    if isinstance(s, str):
        L2.append(s)
        # 转换成小写字母
        L2 = [i.lower() for i in L2]
    else:
        pass
# 测试
print(L2)
if L2 == ['hello', 'world', 'apple']:
    print('测试通过!')
else:
    print('测试失败!')
'''
# 列表生成式写法
L2 = [i.lower() for i in L1 if isinstance(i, str)]
print(L2)
if L2 == ['hello', 'world', 'apple']:
    print('测试通过!')
else:
    print('测试失败!')
