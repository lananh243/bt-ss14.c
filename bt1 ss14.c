#include<stdio.h>
int main(){
	int a; 
	printf("Nhap gia tri cho bien:");
	scanf("%d",&a);
	int *pointer= &a;
	printf("Cach 1\n");
	printf("Gia tri cua bien a = %d\n",a);
	printf("Dia chi cua bien a = %d\n",&a);
	printf("Cach2\n");
	printf("Dia chi cua bien a nam trong con tro pointer =%d\n",pointer);
	printf("Truy cap vao gia tri nam trong bien a thong qua con tro pointer %d",*pointer);

	
}
