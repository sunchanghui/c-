#include <iostream>
using namespace std;
void Hsort(int *arr, int node, int length){
	int left = 2*node+1,right = left+1;
	while(right<length){
		if (arr[node]>arr[left]&&arr[node]>arr[right])
		{
			return;
		}
		if (arr[left]>=arr[right])
		{
			swap(arr[node],arr[left]);
			node = left,left = 2*node+1,right = left+1;
		}else{
			swap(arr[node],arr[right]);
			node = right,left = 2*node+1,right = left+1;
		}
	}
	if (right == length)
	{
		if (arr[left]>arr[node])
		{
			swap(arr[node],arr[left]);
		}
	}
	return;
}

int main(int argc, char const *argv[])
{
	int arr[] = {3,4,8,3,4,2,7,1,9};
	int length = sizeof(arr)/sizeof(arr[0]);
	for (int i = length; i > 0; --i)
	{
		Hsort(arr,i-1,length);
	}
	for (int i = length-1; i > 0; --i)
	{
		swap(arr[0],arr[i]);
		Hsort(arr,0,i);
	}
	for (int i = 0; i < length; ++i)
	{
		cout<<arr[i];
	}
	return 0;
}