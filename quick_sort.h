#pragma
void QuickSort(int arr[], int l, int r)
{
	if(l<r)
	{
		int key = arr[l];
		int i = l, j = r;

		while(i<j)
		{
			while(i<j&&key<=arr[j])
				j--;
			if(i<j)
				arr[i++] = arr[j];

			while(i<j&&key>=arr[i])
				i++;
			if(i<j)
				arr[j--] = arr[i];
		}
		arr[i] = key;

		QuickSort(arr,l,i-1);
		QuickSort(arr,i+1,r);
	}
}