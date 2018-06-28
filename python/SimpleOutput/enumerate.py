# -encoding utf-8
# 枚举法，慢到黑晕
for i in range(1, 1001):
	for j in range (1, 1001):
		for temp in range(1, 1001):
			if i + j + temp == 1000 and i**2 + j**2 == temp**2 :
				print(i, j, temp)
print('完成啦')