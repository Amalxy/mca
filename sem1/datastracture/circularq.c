#include<stdio.h>
#include<stdlib.h>
# define size 4 

arr[size];
int f=0;
int r = -1;

void add(int in){
if((r-f)==size)printf("this q full\n");
else{r++; arr[(r%size)]=in; printf("%d -is added to q\n",in);}
if(f<0)f=1;
}

void delete(){
if((f==r)||f<0) printf("stack is empty\n");
else{ printf("%d-dequed\n",arr[(f%size)]); arr[(f%size)]=0; f++;  } 

}
void search(int s){
int c=f;
while(c<=r){ 
if(s==arr[c%size]) printf("%d is present in this q\n",arr[c%size]);
c++;}
if(c>r)printf("element not present in q\n");
}

void main(){

int p=0;
while(p!=4){

switch(p){

default:
 printf("\n 1--add \n 2--delete \n 3--search\n 4--exit\n");
 scanf("%d",&p);
   break;  


case 1:
  printf("enterthevalue \n");
  scanf("%d",&p);
  add(p);
  p=0;
   break;  
  
case 2:
  delete();
   p=0;
   break;      
case 3:
  scanf("%d",&p);
  search(p);
  p=0;
   break;
}
}
}

