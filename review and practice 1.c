//P32 2.11
//������
#include <stdio.h>
int main()
{
	int s;
	s = 56;
	
	printf("There are %d weeks in a year.\n",s);
//������
printf("Baa Baa Black Sheep.");
printf("Have you any wool?\n") ;

printf("Begone!\nO creature of lard!\n") ;//һ��������������п����кܶ�λ��� 
printf("What?\nNo/nfish?\n") ;//һ���������� 

	int num;
	num = 2;
	
	printf("%d + %d = %d\n",num,num,num + num);
	
//������	
	int words,lines;
	words = 3020;
	lines = 350;
	
	printf("There are %d words and %d lines.\n",words,lines);
	
//�ڰ���
	int a,b;
	a = 5;
	b = 2;
	b = a;//b������5 
	a = b;//�ȸ�a��һ��5����b��һ��2���ٰ�a����b����ʱb�б�����5���ٰ�b����a����ʱa�б�����5��a������5 
	
	printf("%d %d\n",b,a);
	
//�ھ���
	int x,y;
	x = 10;
	y = 5;
	y = x + y;//y������15 
	x = x * y;//x = 10 * 15 = 150 
	
	printf("%d %d\n",x,y) ;
	 

	return 0;
	
}


