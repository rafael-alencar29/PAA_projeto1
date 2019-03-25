#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
using namespace std;

void Merge(int *a, int low, int high, int mid)
{
  int i, j, k, temp[high-low+1];
	i = low;
	k = 0;
	j = mid + 1;

	while (i <= mid && j <= high)
	{
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}

	while (i <= mid)
	{
		temp[k] = a[i];
		k++;
		i++;
	}

  while (j <= high)
	{
		temp[k] = a[j];
		k++;
		j++;
	}

	for (i = low; i <= high; i++)
	{
		a[i] = temp[i-low];
	}
}
void MergeSort(int arr[],int L,int R){
    int middle;

    if (L < R){
      middle = (L + R)/2;

      MergeSort(arr,L,middle);
      MergeSort(arr,middle+1,R);

      Merge(arr,L,R,middle);
    }
}
int main(){
    int arr[100000];
    int size = 0,i=0;
    char temp;

    while (temp != '\n') {
      scanf("%d%c",&arr[i],&temp);
      i++;
      size++;
    }
    /*
    while (cin >> n) {
      arr[i++] = n;
      size++;
    }
    for(int i = 0;i<size;i++){
      cout << arr[i] << " ";
    }
    cout <<endl;
    */
    MergeSort(arr,0,size-1);

    for(int i = 0;i<size;i++){
      cout << arr[i] << " ";
    }
    cout <<endl;

    return 0;
}
