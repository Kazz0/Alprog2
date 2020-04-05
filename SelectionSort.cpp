# include <stdio.h>

void swap(int arr[], int firstindex, int secondindex){
	int temp;
	temp = arr[firstindex];
	arr[firstindex] = arr[secondindex];
	arr[secondindex] = temp;
}

int indexminimum(int arr[], int startindex, int n){
	int minvalue = arr[startindex];
	int minindex = startindex;
	
	for(int i = minindex + 1; i < n; i++) {
		if(arr[i] < minvalue){
			minindex = i;
			minvalue = arr[i];
		}
	}
	return minindex;
}

void selectionSort(int arr[], int n){
	for(int i = 0; i < n; i++){
	int index = indexminimum(arr, i, n);
	swap(arr, i, index);
	}
}

void printArray(int arr[], int size){
	for(int i = 0; i < size; i++){
	printf("%d ", arr[i]);
	}
}

int main(){
	int arr[] = {46, 52, 21, 22, 11};
	int n = sizeof(arr)/sizeof(arr[0]);

	printf("Array before sorting: \n");
	printArray(arr, n);
	selectionSort(arr, n);
	printf("\nSorted array: \n");
	printArray(arr, n);

	return 0;
}
