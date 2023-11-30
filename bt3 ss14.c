#include<stdio.h>
#include<string.h>
int main(){
	char str1[100],str2[100];
	char *ptr1,*ptr2;
	printf("Nhap chuoi thu nhat:");
	gets(str1);
	printf("Nhap chuoi thu hai:");
	gets(str2);
	ptr1 = str1;
	int lth1 = 0;
	while(*ptr1 !='\0'){
		lth1++;
		ptr1++;
	}
	ptr2 = str2;
	int lth2 = 0;
	while(*ptr2 !='\0'){
		lth2++;
		ptr2++;
	}
	printf("Do dai cua chuoi thu nhat:%d\n",lth1);
	printf("Do dai cua chuoi thu hai:%d\n",lth2);
	if(lth1 > lth2){
		printf("Chuoi thu nhat dai hon\n");
	}else if(lth2 > lth1){
		printf("Chuoi thu hai dai hon\n");
	}else{
		printf("Hai chuoi co do dai bang nhau\n");
	}
	return 0;
}
