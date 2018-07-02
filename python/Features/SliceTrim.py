#!user/bin/env python3
# -*- coding: utf-8 -*-

# 定义一个切片函数
def trim(s):
    if s[:1] == ' ':
        return trim(s[1:])

    elif s[-1:] == ' ':
        return trim(s[:-1])
    else:
        return s
# 测试函数功能
if trim('hello  ') != 'hello':
    print('测试失败!')
elif trim('  hello') != 'hello':
    print('测试失败!')
elif trim('  hello  ') != 'hello':
    print('测试失败!')
elif trim('  hello  world  ') != 'hello  world':
    print('测试失败!')
elif trim('') != '':
    print('测试失败!')
elif trim('    ') != '':
    print('测试失败!')
else:
    print('测试成功!')
