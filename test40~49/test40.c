main(){
	int n,m,cou,num=0,sum=0,mul=1,fact=1,c_mul=0,count=0,counter=1,check=0;
	printf("m�̒l����͂��Ă��������B\n");
	scanf("%d", &m);
	printf("n�̒l����͂��Ă��������B\n");
	scanf("%d", &n);
//1����n�܂ł̐����̍��v�Ƒf��
	for(cou=1; cou<=n; cou++){
		sum=sum+cou;
		fact=cou*fact;
		if(n%cou==0){
			check++;
		}
	}
		printf("1����%d�܂ŌJ��Ԃ�����������%d�ł��B\n",n, sum);
		printf("�K���%d�ł�\n",fact);
		if (check==2){
			printf("�f���ł��B\n");
		}else{
			printf("�f���ł���܂���B\n");
		}

//n��m������߂�
	for(cou=1; cou<=m; cou++){
		mul=n*mul;
	}
	printf("%d��%d���%d�ł��B\n",n,m,mul);

//��̏����o��
	printf("n�̊\n");
	while(count<n){
		if(num%2==1){
			printf("%d\n",num);
			count++;
		}
		num++;
	}
//�ŏ����{���̋��ߕ�
	for(counter=m*n;counter>=0;counter--){
		if(counter%m==0&&counter%n==0&&counter!=0){
			c_mul=counter;
		}
	}
	printf("�ŏ����{��%d\n",c_mul);
}
