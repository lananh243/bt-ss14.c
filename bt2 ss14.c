#include<stdio.h> 
void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
	
	
}
int main(){
	int x,y;
	printf("Nhap gia tri x:");
	scanf("%d",&x);
	printf("Nhap gia tri y:");
	scanf("%d",&y);
	int *a= & x;
	int *b= & y;
	printf("Truoc khi duoc doi cho x = %d,y = %d\n",x,y);
	swap(&x,&y);

	printf("Sau khi duoc doi cho x = %d,y = %d\n",x,y);
	int diffTruoc = a-b;
	int diffSau = *a-*b;
	printf("Hieu truoc khi doi cho :%d\n",diffTruoc);
	printf("Hieu sau khi doi cho:%d\n",diffSau);
	return 0;
	
}


	

