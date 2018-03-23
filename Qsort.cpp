#include <iostream>
using namespace std;
void Qsort(int *arr, int start,int end){
	if (start>=end)
	{
		return;
	}
	int first = start, last = end;
	int std = arr[first];
	while(first < last){
		while(arr[last]>=std&&first<last){
			last--;
		}
		if (first<last)
		{
			swap(arr[first],arr[last]);
		}
		while(arr[first]<=std&&first<last){
			first++;
		}
		if (first<last)
		{
			swap(arr[first],arr[last]);
		}
	}
	arr[first] = std;
	Qsort(arr,start,first-1);
	Qsort(arr,first+1,end);
}

int main(int argc, char const *argv[])
{
	int arr[7] = {3,4,8,2,7,1,9};
	Qsort(arr,0,6);
	for (int i = 0; i < 7; ++i)
	{
		cout<<arr[i];
	}
	return 0;
}