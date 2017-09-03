#coding:utf-8
'''
归并排序
算法导论
递归，分治的时，自己调用自己
好久没有写过python，对数据结构不熟悉，参考了网上先相关代码，有时间，再写C++版本
'''

def merge(a,b):
    c = []
    h = j =0
    while h < len(a) and j < len(b):
        if a[h] < b[j]:
            c.append(a[h])
            h = h+1
        else:
            c.append(b[j])
            j = j+1

    """当a，b不相等时，完成剩下的某个数组排列 """
    if j == len(b):
        for i in a[h:]:
            c.append(i)
    else:
        for i in b[j:]:
            c.append(i)
    
    return c
            
def mergeSort(lists):
    if len(lists) <= 1:
        
        return lists
    middle = len(lists)/2
    left = mergeSort(lists[:middle])
    right = mergeSort(lists[middle:])
    return merge(left,right)
if __name__ == '__main__':
    lists = [1,4,5,2,6,2,4]
    
    print mergeSort(lists)
    

 
