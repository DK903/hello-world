#include <stdio.h>
int main(){
	int line = 0;
	printf("��Ҫ�ú�ѧϰ�������ô���\n");
	printf("����������Ĵ���������");
	scanf("%d",&line);
	if(line>=20000)
		printf("�������������");
	else{
	
	while(line<20000){
		printf("Ŭ����һ�д��룺%d\n",line);
		line++; 
	}
	
	}
	return 0;
}
