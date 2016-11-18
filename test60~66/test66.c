#include<stdio.h>
#include<stdlib.h>
/*
//////////////入力された数の二倍を出す関数///////////////////////////
int value(int a){
	int num;
	num=a*2;
	printf("%d\n",num);
}
///////////////入力された数で大きいほうを出す//////////////////////////
int look(int a,int b){
	if(a>b){
		printf("%d\n",a);
	}else if(a<b){
		printf("%d\n",b);
	}else{
		printf("same\n");
	}
}
/////////////////台形の面積/////////////////////////
int flow(double a,double b,double c){
	int answer;
	answer=((a+b)*c)/2;
	printf("%d\n",answer);
}
*/
/////////////////配列をシフト↓（これ）分ずらす////////////////////////
void change(int array[8],int shift){
	int ary[8]={0},x;
	int syatyo;
	//配列の入れ込み
	for(x=0;x<8;++x){
				syatyo=(shift+x)%8;
        ary[syatyo]=array[x];
	}
	for(x=0;x<8;++x){
	   printf("%d",ary[x]);
	}
	printf("\n");
}
/*
//////////////////度数：ラジアンのルックアップテーブル////////////////////////
int LUT(int input) {
	int x;
	float pai;
	int deg[359];
	float rad[359];
		pai = 3.1415926535;
	for (x = 0; x < 360; x++) {
		deg[x] = x;
		rad[x] = deg[x]*2*pai/360;
	}
	printf("%d°は%fラジアンです\n", deg[input],rad[input]);
}
//////////////////ランダムに0-5出して一番出た数を表示////////////////////////
int rang(int input) {
	int loop, rnd;
	int result[6] = {0};
	srand(10);
	for(loop = 0; loop < 1000; loop++) {
		rnd = rand() % 6;
		result[rnd] = result[rnd]+1;
	}
	printf("%d",result[input]);
}
//////////////最後の課題////////////////////////////
/////////////間違ってる可能性大//////////
int randum() {
	int rnd;
	int loop;
	int result[100]={0};
	int IMD[1000]={0};
	int min, max, sum=0;
	float average;
	float per;
	int flag,flag_nest=0;
  int box=0;
	srand(10);
/////////////////
	for (loop = 0; loop < 1000; loop++) {
		rnd = rand() % 100;
		result[rnd] = result[rnd] + 1;
		IMD[loop]=rnd;
	}
///////////////
	for (loop = 99; loop >= 0 ; loop--) {
		if (result[loop] > 0) {
			min = loop;
		}
	}
//////////////////
	for (loop = 0; loop < 100; loop++) {
		if (result[loop] > 0) {
			max = loop;
		}
	}
///////////////////
	for (loop = 0; loop < 100; loop++) {
		sum = sum + IMD[loop];
	}
///////////////
	average = sum / 1000;
///////////////////
	per = result[50] / 1000;
////////////////
	for (loop = 0; loop < 100; loop++) {
		if (flag_nest<result[loop]) {
			flag = loop;
            flag_nest=result[loop];
		}
	}
/////////////////
	printf("min%d\nmax%d\nsum%d\naverge%f\nper%f\nflag%d\n",min,max,sum,average,per,flag);
}
//////////////////////////////////////////
//////////////////////////////////////////
*/
main(){
	int array[8]={1,2,3,4,5,6,7,8};
/*
	int into=0;
	value(5);
	look(2,5);
	flow(2,2,2);
*/
	change(array,3);
/*
	printf("見たい度数を入力");
	scanf("%d",&into);
	LUT(into);
	printf("見たい賽の目を入力");
	scanf("%d", &into);
	rang(into);
	randum();
	*/
}
//////////////////////////////////////////
