#include <stdlib.h>
void main(void){
	int i, arr[1000], max, min, sum, freq, hist[100]={0}, avg, prd;
	srand(10);
	for(i=0;i<1000;i++){
		arr[i] = rand()%100;
	}

	sum = 0;
	max = min = arr[0];

	for(i=0;i<1000;i++){
		sum = sum + arr[i];
		if(max<arr[i]) max=arr[i];
		if(min>arr[i]) min=arr[i];
	}

	avg = sum / 1000.0;
	prd = 100 * hist[50] / 1000.0;
}