#include <stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *prev;
  struct node *next;
  
};
struct node* head = NULL;
struct node* end = NULL;


void ifs(int data){
struct node* node1=malloc(sizeof(struct node));
node1->data=data;
node1->next=head;
node1->prev=NULL;
if(head==NULL){ head=node1; end=node1;}
else{ head->prev=node1; head=node1;}

}

void ie(int dat){
struct node* node1=malloc(sizeof(struct node));
node1->data=dat;
node1->prev=end;
node1->next=NULL;
if(end!=NULL){end->next=node1; end=node1;}
else{head=node1; end=node1;}
}

void inm(int pos,int data){
int i=0;
struct node* node1=malloc(sizeof(struct node));
node1->data=data;
struct node* temp;
temp=head;
while(temp->next!=NULL && pos>i){temp=temp->next;
    i++;
   }

node1->next=temp->next;
node1->prev=temp;
temp->next=node1;
}

void delf(){
if(head==NULL){printf("empty\n");}
else{head->next->prev=NULL;
struct node *temp =head;
head=head->next;
free(temp);}
}
void dele(){
if(end==NULL){printf("empty\n");}
else{
end->prev->next=NULL;
struct node* temp =end;
end=end->prev;
free(temp);}
}

void dispf(){
struct node* temp=head;
do{ printf("%d--",temp->data);
    temp=temp->next;     }while(temp->next!=NULL);

printf("\n");
}

void main(){
int input;
int input2;
char e;
while(e!='e'){
 printf("e --for exit \n i--to insert \n s--to show\n d--todeletefirst \n 1 --to delete end \n ");
 scanf("%c",&e);
 switch(e){
  case 'i':
  scanf("%d",&input);
  ie(input);
  break;

  case 's':
  dispf();
   break;

case 'd':
   delf();
   break;

case '1':
  scanf("%d",&input);
  scanf("%d",&input2);
  inm(input,input2);
   break;
          }}


}