main(){

	//�ϐ��錾
	int a, b, amari;
	//�L�[�{�[�h����̓���
	printf("����A�F");
	scanf("%d", &a);
	printf("����B�F");
	scanf("%d", &b);

	amari = a % b;

	if(amari==0)
		printf("%d��%d�̖񐔂ł��B\n",a ,b);
	else if(amari!=0)
		printf("%d��%d�̖񐔂łȂ��B\n",a ,b);

}