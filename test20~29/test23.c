main(){
	int a, amari;

	printf("�֐�����͂��Ă��������B\n");
	scanf("%d", &a);

	amari = a % 3;

	if (amari==0) {
		printf("���̐���3�Ŋ���؂�܂��B");
	}
		else{
			printf("���̐��̗]���%d�ł��B\n" ,amari);
		}		
}