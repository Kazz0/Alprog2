#include <stdio.h>

int i, j, temp;

int shellsort(int arr[], int n){
	for (int gap = n/2; gap > 0; gap /= 2){
		for (int i = gap; i < n; i += 1){
			temp = arr[i];
			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
			arr[j] = arr[j - gap];
			arr[j] = temp;
		}
	}
	return 0;
}

void printarray(int arr[], int n){
	for(i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
}

int main(){
	int arr[5] ={12, 34, 54, 2, 3};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	printf("Array before sorting: \n");
	printarray(arr, n);
	shellsort(arr, n);
	printf("\nSorted array: \n");
	printarray(arr, n);
	
	return 0;
}
