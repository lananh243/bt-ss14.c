#include<stdio.h> 
void nhapMang(int *a,int n){
	for(int i=0;i<n;i++){
		printf("Nhap a[%d]=",i);
		scanf("%d",&a[i]);
	}
}
void xuatMang(int *a,int n){
	for(int i=0;i<n;i++){
		printf("%d",a[i]);
	}
}
void giamDan(int *a,int n){
	int temp;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
void tangDan(int *a,int n){
	int temp;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
int main(){
	int a[100];
	int n;
	printf("Nhap so luong phan tu n = ");
	do{
		scanf("%d",&n);
		if(n<=0){
			printf("Nhap lai n =");
		}
	}while(n<=0);
	nhapMang(a,n);
	printf("\nMang vua nhap la:");
	xuatMang(a,n);
	giamDan(a,n);
	printf("\nMang sap xep giam dan la:");
	xuatMang(a,n);
	tangDan(a,n);
	printf("\nMang sap xep tang dan la:");
	xuatMang(a,n);
}
