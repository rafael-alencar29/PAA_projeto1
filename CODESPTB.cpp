#include<iostream>
using namespace std;

void InsertionSort(int *array, int element,int j,int *swaps){

			while (j>0 && array[j-1] > element) {
				    array[j] = array[j-1];
			 	    ++(*swaps);
				    --j;
  		}
			array[j] = element;
}
int main () {
	int n, T,element,i,j;
	int swaps;

	cin >> T;
	while (T--) {
		 cin >> n;

		 swaps = 0;
	 	 int array[n];
		 for(i=0;i<n;i++){
			   cin >> element;

			    j=i;
			    InsertionSort(array,element,j,&swaps);
		  }
			cout<<swaps<<endl;
	}
	return 0;
}
