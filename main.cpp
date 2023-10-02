#include<iostream>
using namespace std;

//阿亮给sort函数添加注释
void sort(int arr[], int i, int j)
{
	int val = arr[i];
	int l = i;
	int r = j;
	while(l<r)
	{
		while(l<r&&arr[l]>=val)
		{
			r--;
		}
		if(l<r)
		{
			arr[l++]=arr[r];
		}
		while(l<r&&arr[l]<=val)
		{
			l++;
		}
		if(l<r)
		{
			arr[r--] = arr[l];
		}
		arr[l] = val;
		sort(arr,i,l-1);
		sort(arr,i+1,j);
		
	}
}

int main()
{
	//小张添加的注释
	int arr[]={12,4,89,43,21,78};
	int size = sizeof(arr)/sizeof(arr[0]);
	sort(arr,size);
	for(int i=0;i<size;++i)
		cout<<arr[i]<<"";
	return 0;
}





void test03()
{
	
}