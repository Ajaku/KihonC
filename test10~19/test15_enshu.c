main(){
	int n = 1000;
	int day;
	int hour;

	day  = n / 24;
	hour = n % 24;

	printf("���݂̎�����0���ł��B");
	printf("%d���Ԍ��%d�����%d��", n, day, hour);
}