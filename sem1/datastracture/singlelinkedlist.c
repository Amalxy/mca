#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* prev;
};

struct node* head=NULL;


 void addp(int in){
     struct node* nodet=malloc(sizeof(struct node));
     nodet->data=in;
     nodet->prev=head;
     head=nodet;		
}
void show(){
struct node* nodet=head;
while(head!=NULL){
printf("[%d]---",head->data);
head=head->prev;
}
head=nodet;
}

void delete(){
	if(head!=NULL){
	struct node* nodet=head;
        head=head->prev;
        free(nodet);
         printf("element deleted\n");}
	else printf("list is empty\n");
}	 


void search(int in){
	struct node* nodet=head;
	while(nodet!=NULL){
		if(nodet->data==in){printf("element is presenet \n"); break;}
			nodet=nodet->prev;
	}
	if(nodet==NULL) printf("element is not present\n");
}




void main(){

int p= 0;

while(p!=5){
	switch(p){
		case 1:
			printf("element to add \n");
			scanf("%d",&p);
			addp(p);
			p=0;
			break;

                case 2:
		    delete();
	            p=0;
	         break;	    
			
		case 3:
		    show();
		    p=0;
	         break;	    
		

		case 4:
		   printf("enter element to search\n");
		   scanf("%d",&p);
		   search(p);
		   p=0;
		   break;



        default:
            printf("\n 1-insert\n 2-delete\n 3-show\n 4-search\n 5-exit\n");
scanf("%d",&p);
        
        break;




	}
           
	}
}
