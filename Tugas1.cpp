#include<stdio.h>
int main(){
	int a, b, num, search, flag;
	
	// Input for list array length
	scanf("%d", &num);
	// Use if to set the minimum and maximum value
	if(num < 5 || num > 100){
		printf("[ERROR]Value melebihi batas");
	}else{
	int list[num];	// make array for list number
	// Input list array values	
	for (a=1;a<=num;a++){
		scanf("%d", &list[a]);
	}
	
	// Input searched array length
	scanf("%d", &search);
	int find[search]; // make array for searched number	
	// Input searched array values
	for (b=1;b<=search;b++){
		scanf("%d", &find[b]);
	}
	
	// Result
	
	// Looping the searched array
	for (b=1;b<=search;b++){
		// Looping the list array
		for(a=1;a<=num;a++){
			if(find[b]==list[a]){
				flag=1; // change the value into 1 after finding the number
				break; // stop the looping if found the number
			}else{
				flag=0; // change the value into 0 if not finding the number
			}
		}
		// Output based on flag
		if(flag==1){
			printf("Ditemukan\n");
		}else{
			printf("Tidak Ditemukan\n");
		}
	}
	}
	return 0;
}
