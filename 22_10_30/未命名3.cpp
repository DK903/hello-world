#include <stdio.h>
#include <string.h>
//ת���ַ� 
int main(){
	printf("abc\\n");
	printf("\a\n"); 
	printf("");
	printf("\60\n");//2��8��������ʾ��ʮ���ƶ�Ӧ��ASCII 
	//\ddd �˽���
	printf("\x61\n"); 
	//\xdd ʮ������ 
	
	//  б��ת��б��  ��б�ܾ��Ǹ�б��
	printf("%d\n",strlen("c:\test\32\test.c")); 
	return 0;
}
