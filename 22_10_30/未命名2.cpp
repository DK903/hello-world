#include <stdio.h>
#include <string.h>//ʶ��strlen 
int main(){
	char arr1[] = "320804200009034910";//����
	char arr2[] = {'a','b','c'};
	//arr1 ����һ��������־   '\0' = 0
	printf("%d\n",strlen(arr1));
	printf("%d\n",strlen(arr2));
	printf("%d\n",sizeof(arr1));
	printf("%d\n",sizeof(arr2));
	
	printf("%s\n",arr1); 	
	printf("%s\n",arr2);
	return 0;
}
