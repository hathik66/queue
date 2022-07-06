#include<stdio.h>
#include<stdlib.h>
#define n 5
int front=-1;
int rear=-1;
int q[n];



int isfull()
{
        if(rear==n-1)
        {
                return 1;
        }
        else
        {
                return 0;
        }

}
int isempty()
{
        if(front==-1)
        {
                return 1;
        }
        else
        {
                return 0;
        }
}
void enq()

{
        int val;
        printf("Enter the value ");
        scanf("%d",&val);
        if(isfull())
        {
                printf("\nQue full");
        }
        else
        {
                if(front==-1)
                {
                        front=0;
                        rear++;
                        q[rear]=val;
                }
        }
}
void dq()
{
        if(isempty())
        {
                printf("\nQueueEmpty");
        }
        else
        {
                front++;
                if(front>rear)
                {
                        front=-1;
                        rear=-1;
                }
        }
}
void display()
{
        int i,x,y;
        x=rear;
        y=front;
        for(i=x;i>=y;i--)
        {
                printf("%d",q[i]);
        }
}
        

void main()
{
        int ch,entry;
        while(1)
        {
                printf("\nEnter your choice\n");
                printf("\n1.enque\n2.deque\n3.display\n4.exit\n");
                scanf("%d",&ch);
                switch(ch)
                {
                        case 1:
                        {
                                enq();
                                break;
                        }
                        case 2:
                        {       
                                dq();
                                break;
                        }
                        case 3:
                        {       
                                display();
                                break;
                        }
                        case 4:
                        {
                                exit(0);
                        }
                  }
                        
        }
        
}
