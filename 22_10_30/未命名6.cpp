#include <stdio.h>

int Add(int x,int y){ //��һ��int�Ƿ�������  
	//������
	int z = x + y;
	return z; //������ɺ󷵻ظ�sum 
}
int main(){
	int a = 12,b=20;
	int sum;
	sum = Add(a,b);//a,b��ֵ����x,y    
	printf("sum = %d\n",sum);
	return 0;
}
