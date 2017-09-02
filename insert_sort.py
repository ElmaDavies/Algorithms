#coding:utf-8
#插入排序,升序排序python版
'''
算法导论的第一次学习，算法还是比较好理解。
书中已给出了伪代码
简单的插入排序，建立一个循环不变式，并确定一个key值，
不断地与key之前的数据进行比较，并交换，之后不断移动
key的值，知道key的值移动到列表末尾。
有时间再添加C++版的插入排序
'''
a1 = [1,3,2,6,4,2,5,9,7]
j = 1
n = len(a1)
k = 0
while j < len(a1):
    key = a1[j]
    i = j-1
    while i>0 and a1[i]>key:
        a1[i+1] = a1[i]
        i = i-1
    a1[i+1] = key
    j = j+1
    
for k in range(0,n,1):
    print a1[k]

   
