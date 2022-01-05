#include<stdio.h>
#include<stdlib.h>
#define size_ar  5

int f=-1;
int ar[size_ar];
int p =0;

void push(){
if(f==size_ar){ printf("the size is full \n");}
else { printf("number to insert\n"); scanf("%d",&p); ar[f]=p; printf("%d is added \n",p); f++;  }
}


void pop(){
if(f<0){printf("stack is empty\n");}
else{ printf("%d is poped \n",ar[f]); ar[f]=0; f--; }

}



void main(){
char e=0;
while(e!= 'e'){
printf("e to exit p to pop and i to push \n");
scanf("%c",&e);
 switch(e)
 {
  
  case 'p':
   pop();
   break;
  case 'i':
   push();
   break;
 }


}





}