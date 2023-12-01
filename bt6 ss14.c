#include<stdio.h>
#include<stdlib.h>
 
int main(){
	char str[100];
	char str1[100];
	char str2[100];
	char *ptr = str;
	char str3[100];
	int doDai;
	do{
		printf("**********MENU*************\n");
		printf("1.Nhap vao chuoi\n");
		printf("2.In ra chuoi\n");
		printf("3.Sao chep chuoi vao mot chuoi khac\n");
		printf("4.Nhap vao chuoi khac , tien hanh them chuoi do vao chuoi ban dau\n");
		printf("5.Nhap vao chuoi khac , so sanh chuoi do voi chuoi ban dau\n");
		printf("6.In ra chuoi dao nguoc\n");
		printf("7.Thoat\n");
		printf("Lua chon cua ban:");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
			    fflush(stdin);
			    printf("Nhap vao chuoi: ");
			    gets(str);
			    break;
			case 2:
				printf("Chuoi vua nhap la:%s\n",str);
				break;
			case 3:
				strcpy(str1,str);
				printf("Chuoi sao chep la:%s\n",str1);
				break;
			case 4:
				fflush(stdin);
				
				printf("Nhap vao chuoi khac: ");
			  	fgets(str2, sizeof(str2), stdin);
			
			    
			    size_t len = strlen(str2);
			    if (len > 0 && str2[len - 1] == '\n') {
			        str2[len - 1] = '\0';
			    }
			    strcat(str,str2);
	
			    printf("Chuoi sau khi them: %s\n", str);

			    
			case 5:
				fflush(stdin);
				 printf("Nhap vao chuoi khac: ");
			    fgets(str2, sizeof(str2), stdin);
			    if (len > 0 && str2[len - 1] == '\n') {
			        str2[len - 1] = '\0';
			    }
			    int ketQua = strcmp(str,str2);
			
			    if (ketQua == 0) {
			        printf("Hai chuoi giong nhau.\n");
			    } else {
			        printf("Hai chuoi khac nhau.\n");
			    }

				break;
			case 6:

			   	strrev(str);
				printf("Chuoi theo chieu dao nguoc:%s\n",str);
				break;
			
			    printf("\n");
				break;
			case 7:
				exit(0);
			default:
				printf("Vui long nhap tu 1-7");

		}
	}while(1==1);
}
