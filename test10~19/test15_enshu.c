main(){
	int n = 1000;
	int day;
	int hour;

	day  = n / 24;
	hour = n % 24;

	printf("現在の時刻は0時です。");
	printf("%d時間後は%d日後の%d時", n, day, hour);
}