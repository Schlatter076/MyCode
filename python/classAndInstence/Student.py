# !usr/bin/env python3
# _*_ coding: utf-8 _*_

class Student(object):
    def __init__(self, name, gender):
        self.name = name
        self.__gender = gender # 将性别属性私有化，不允许外部访问
    def get_gender(self):
        return self.__gender # 提供获取__gender属性的方法
    def set_gender(self, gender):
        self.__gender = gender # 提供设置__gender属性的方法

# 测试:
bart = Student('Bart', 'male')
if bart.get_gender() != 'male':
    print('测试失败!')
else:
    bart.set_gender('female')
    if bart.get_gender() != 'female':
        print('测试失败!')
    else:
        print('测试成功!')

class Student_1(object):
    count = 0
    def __init__(self, name):
        self.name = name
        Student_1.count += 1

# 测试:
if Student_1.count != 0:
    print('测试失败!')
else:
    bart = Student_1('Bart')
    if Student_1.count != 1:
        print('测试失败!')
    else:
        lisa = Student_1('Bart')
        if Student_1.count != 2:
            print('测试失败!')
        else:
            print('Students:', Student_1.count)
            print('测试通过!')
