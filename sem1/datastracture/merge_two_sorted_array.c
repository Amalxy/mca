#include<stdio.h>


int arr1[20],arr2[20];
int arrs1,arrs2=0;
int bigar[100];

void main(){
printf("number of elents in first array\n");
scanf("%d",&arrs1);
printf("number of elents in second array\n");
scanf("%d",&arrs2);
printf("elements of first array\n");
for(int i=0; i<arrs1; i++){
    printf("next element first array\n");
	scanf("%d",&arr1[i]);
	
}
for(int i=0; i<arrs1; i++){
    printf("next element second array\n");
	scanf("%d",&arr2[i]);	
}
int ok=0;
while(ok==0){
ok=1;
for(int i=0;(i+1)<arrs1;i++){
if(arr1[i]>arr1[i+1]){
int tmp=arr1[i];
arr1[i]=arr1[i+1];
arr1[i+1]=tmp;
ok=0;}}
}

printf("sorted array 1--");
for(int i=0;i<arrs1;i++){
printf("[%d]  ",arr1[i]);}
printf("\n");
printf("\n");

ok=0;
while(ok==0){
ok=1;
for(int i=0;(i+1)<arrs2;i++){
if(arr2[i]>arr2[i+1]){
int tmp=arr2[i];
arr2[i]=arr2[i+1];
arr2[i+1]=tmp;
ok=0;}}
}
printf("sorted array 2--");
for(int i=0;i<(arrs2);i++){
printf("[%d]  ",arr2[i]);}
printf("\n");
printf("\n");

int i=0;
for(i;i<arrs1;i++){
bigar[i]=arr1[i];}

for(i;i<(arrs1+arrs2);i++){
bigar[i]=arr2[i-arrs1];
}
printf(" merged array--");
for(int i=0;i<(arrs1+arrs2);i++){
printf("[%d]  ",bigar[i]);}
printf("\n");


}







