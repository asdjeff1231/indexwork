#include <stdio.h>
#include <stdlib.h>
#define SIZE 10


void bubbleSort( int *array, unsigned int size ); /*指向非常數資料的非常數指標*/ 

int main(void) {
	int a[SIZE]={468,810,34,100,180,360,270,45,90,135};
	
	unsigned int i; 
	
	puts(" before");
	
		for(i=0;i<SIZE;++i){
			printf("%4d ",a[i]);
		}
		bubbleSort(a, SIZE);
		
		puts("\n after");
		
		for(i=0;i<SIZE;++i){
			printf("%4d ",a[i]);
	    }
		
		puts("");
}
