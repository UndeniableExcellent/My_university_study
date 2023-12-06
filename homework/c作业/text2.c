#include <stdio.h>
//int main()
//{
//	short int a=32767,b,c;
//	b=a+1;
//	c=a+2;
//	printf("a=%d,b=%dc=%d\n",a,b,c);
//	printf("You are \rA\x20niceE\bboy!");
//	
//	return 0;
// } 

/*int main()
{
	printf("%d\n",sizeof("\x5d"));
	short int a=-1;
	unsigned short b;
	b=a;
	printf("a=%d,b=%u\n",a,b);
	return 0;
 } */
 
/* int main()
 {
 	double num=3.1415927;
 	printf("%f,% 5.4f,% 3.3f\n",num,num,num);
 	float f=31.41592f;
 	printf("%f,%g,%e",f,f,f);
 	return 0;
 }*/
 
 int main()
 {
 	int a=4,b=9;
 	float x=75.8654f,y=-456.123f;
 	char c='B';
 	long n=2345678;
 	unsigned u=65535;
 	printf("%d%d\n",a,b);
 	printf("%3d%3d\n",a,b);
 	printf("%f,%f\n",x,y);
 	printf("%-12f,%-12f\n",x,y);
 	printf("%8.2f,%8.2f\n",x,y);
 	printf("%.4f,%.4f\n",x,y);
 	printf("%3f,%3f\n",x,y);
 	printf("%e,%10.2e\n",x,y);
 	printf("%c,%d,%o,%x\n",c,c,c,c);
 	printf("%ld,%lo,%x\n",n,n,n);
 	printf("%u,%o,%x,%d\n",u,u,u,u);
 	printf("%s,%5.3s\n","Nanjing","Jiangsu");
 	return 0;
 }
