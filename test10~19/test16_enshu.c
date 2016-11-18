main(){
	float f = 4.5678;
	int a,c;
	float b;

	a = (int)f;
	b = f - a;
	c = (int)(f + 0.5);

	printf("値は%fです。\n", f);
	printf("整数部分は%d 、小数部分は%f です。\n",a ,b);
	printf("小数点以下を四捨五入すると%dです。\n", c);
}
