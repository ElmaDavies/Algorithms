/************************************************************************/
/* insert_sort 
 �㷨����2-1-1����ϰ��

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
	cout<<"�����������Ԫ�ظ���"<<endl;
	cin>>n;
	int * array = new int [n];

	cout<<"������Ҫ�����Ԫ��"<<endl;
	for(int i = 0;i<n;i++)
	{

		cin>>array[i];

	}
	insertSort(array,n);
	cout<<"����������Ϊ��"<<endl;
	for (int i=0;i<n;i++)
	{
		
		cout<<array[i]<<endl;
	}
	system("pause");
	return 0;
} 
