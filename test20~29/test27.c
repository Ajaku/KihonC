main(){
	int a;

	printf("���l����͂��Ă��������B\n");
	scanf("%d", &a);

	switch(a % 3) {
	case 0:
	printf("���̐���3�Ŋ���؂�܂��B\n"); 
	break;
	case 1:
	printf("���̐���3�Ŋ������]���1�ł��B\n"); 
	break;
	case 2:
	printf("���̐���3�Ŋ������]���2�ł��B\n"); 
	break;
}

}