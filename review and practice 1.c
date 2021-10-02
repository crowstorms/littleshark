//P32 2.11
//第四题
#include <stdio.h>
int main()
{
	int s;
	s = 56;
	
	printf("There are %d weeks in a year.\n",s);
//第五题
printf("Baa Baa Black Sheep.");
printf("Have you any wool?\n") ;

printf("Begone!\nO creature of lard!\n") ;//一条像这样的语句中可以有很多次换行 
printf("What?\nNo/nfish?\n") ;//一条错误的语句 

	int num;
	num = 2;
	
	printf("%d + %d = %d\n",num,num,num + num);
	
//第七题	
	int words,lines;
	words = 3020;
	lines = 350;
	
	printf("There are %d words and %d lines.\n",words,lines);
	
//第八题
	int a,b;
	a = 5;
	b = 2;
	b = a;//b现在是5 
	a = b;//先给a赋一个5，给b赋一个2；再把a赋给b，此时b中被赋了5；再把b赋给a，此时a中被赋了5；a现在是5 
	
	printf("%d %d\n",b,a);
	
//第九题
	int x,y;
	x = 10;
	y = 5;
	y = x + y;//y现在是15 
	x = x * y;//x = 10 * 15 = 150 
	
	printf("%d %d\n",x,y) ;
	 

	return 0;
	
}


