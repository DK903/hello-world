#include <stdio.h>
enum Color{
	Yellow,
	Green,
	Blur
}; 


int main(){
	int a = 4;
	printf("%d\n",a);
	
	a =10;//�����ɱ� 
	printf("%d\n",a);
	
	const int b = 22;//const���εĳ��������ɱ� 
	//b=20;   �����޸�  bΪron 
	printf("%d\n",b); 
	
	enum Color color = Green;
	printf("%d\n",color);
	return 0;
}
