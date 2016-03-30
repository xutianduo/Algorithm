#include "quick_sort.h"
#include<iostream>
using namespace std;

int main()
{
	int arr[10] = {9,7,6,4,2,3,1,8,5,10};
	QuickSort(arr,0,9);

	for(auto i:arr)
		cout<<i;
	getchar();
	return 0;
}