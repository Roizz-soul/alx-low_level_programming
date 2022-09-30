#!/usr/bin/python3
def my_function(x):
	  return x[::-1]
alist = []
for i in range(100, 1000):
	for j in range(100, 1000):
		if str(i * j) == my_function(str(i * j)):
			alist.append(i * j)
print(max(alist))
