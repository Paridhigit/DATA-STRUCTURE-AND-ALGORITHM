#include<stdio.h>
#define maxsize 10
int queue[maxsize];
int front=-1;
int rear=-1;
void insertion()
{ int val;
    printf("enter element:");
    scanf("%d",val);
    if((rear==maxsize-1)&&(front==0)||(front==rear+1))
    {
        printf("\noverflow");
        return;
    }
    if((front==-1)&&(rear==-1))
      { front++;
       rear++;
       queue[rear]=val;
    }
    if((rear==maxsize-1)&&(front>0))
    { rear=0;
        queue[rear]=val;
    }
    else
    {
        rear++;
        queue[rear]=val;
    }
    return;
}
void deletion()
{
    int val;
    if(front==-1){
        printf("underflow");
        return;
    }
    if(front==rear){
        val=queue[front];
        front-1;
        rear-1;
    }
    if(front==maxsize-1){
        val=queue[front];
        front=0;
    }
    else
    {
        val=queue[front];
        front++;
    }
    printf("%d is deleted from the queue",val);
}
int main()
{
int choice,item;
do
{
printf("1.Insertn");
printf("2.Deleten");
printf("3.Displayn");
printf("4.Quitn");
printf("Enter your choice : ");
scanf("%d",&choice);
switch(choice)
{
case 1 :
insertion();
break;
case 2 :
deletion();
break;
case 3:
break;
case 4:
break;
default:
printf("Wrong choicen");
}
}while(choice!=4);
return 0;
}



























