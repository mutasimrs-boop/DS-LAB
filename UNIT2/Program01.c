#include<stdio.h>
#include<conio.h>
#define max 5
int stack[max];
int top=-1;

void push()
{
int item;
if(top==max-1)
{
    printf("\nStack Is Full (overflow0)");

}
    else{
    printf("\nEnter the element: ");
    scanf("%d",&item);

    top++;
    stack[top] = item;

    printf("\n%d inserted successfully.",item);

    }
}

void main()
{

push();
push();
push();
getch();

}
