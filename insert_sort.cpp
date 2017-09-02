/************************************************************************/
/* insert_sort 
 算法导论2-1-1的练习题

*/
/************************************************************************/

#include<iostream>
using namespace std;
template<typename T>
void insertSort(T array[],int length)
{
	if(array==nullptr||length==0)
		return;
	int i=  0;
	int j = 0;
	for(i=1;i<length;i++)
	{

		T key = array[i];
		j = i-1;
		while (j>=0 && array[j]<=key)
		{
			array[j+1] = array[j];
			j = j-1;
		}
		array[j+1] = key;
	}
	




}
int main()
{
	int n;
	cout<<"请输入排序的元素个数"<<endl;
	cin>>n;
	int * array = new int [n];

	cout<<"请输入要排序的元素"<<endl;
	for(int i = 0;i<n;i++)
	{

		cin>>array[i];

	}
	insertSort(array,n);
	cout<<"排序后的数组为："<<endl;
	for (int i=0;i<n;i++)
	{
		
		cout<<array[i]<<endl;
	}
	system("pause");
	return 0;
} 
