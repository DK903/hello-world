#include <stdio.h>
int main(){
	int input = 0;
	printf("��Ҫ�ú�ѧϰ��(ѡ��1/0)>:");
	scanf("%d",&input);//��ȡ�û���������� 
	if(input == 1)
		printf("��֣������н300k\n"); 
	else
		printf("��û��ѡ������ú�ѧϰ\n");
	
	return 0;
}
