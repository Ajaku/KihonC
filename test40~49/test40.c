main(){
	int n,m,cou,num=0,sum=0,mul=1,fact=1,c_mul=0,count=0,counter=1,check=0;
	printf("mの値を入力してください。\n");
	scanf("%d", &m);
	printf("nの値を入力してください。\n");
	scanf("%d", &n);
//1からnまでの数字の合計と素数
	for(cou=1; cou<=n; cou++){
		sum=sum+cou;
		fact=cou*fact;
		if(n%cou==0){
			check++;
		}
	}
		printf("1から%dまで繰り返し足した数は%dです。\n",n, sum);
		printf("階乗は%dです\n",fact);
		if (check==2){
			printf("素数です。\n");
		}else{
			printf("素数でありません。\n");
		}

//nのm乗を求める
	for(cou=1; cou<=m; cou++){
		mul=n*mul;
	}
	printf("%dの%d乗は%dです。\n",n,m,mul);

//奇数の書き出し
	printf("n個の奇数\n");
	while(count<n){
		if(num%2==1){
			printf("%d\n",num);
			count++;
		}
		num++;
	}
//最小公倍数の求め方
	for(counter=m*n;counter>=0;counter--){
		if(counter%m==0&&counter%n==0&&counter!=0){
			c_mul=counter;
		}
	}
	printf("最小公倍数%d\n",c_mul);
}
