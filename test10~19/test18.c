main(){
	float teihen, takasa, area;

	//底辺と高さをキーボードから入力する
	printf("底辺：");
	scanf("%f", &teihen);
	printf("高さ：");
	scanf("%f", &takasa);

	area=teihen*takasa/2;
	printf("底辺%f、高さ%fの三角形の面積は%fです。\n", teihen, takasa, area);
}