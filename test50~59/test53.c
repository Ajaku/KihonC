main(){
	int v[6]={0,1,2,3,4,5},temp[6]={0},i;
	for(i=0; i<=5; i++){
		printf("va[%d]=%d\n",i ,v[i]);
	}
	for(i=0; i<=5; i++){
		temp[i] = v[i];
	}
	for(i=0; i<=5; i++){
		v[5-i]=temp[i];
	}
	for(i=0; i<=5; i++){
		printf("v[%d]=%d\n",i ,v[i]);
	}
}