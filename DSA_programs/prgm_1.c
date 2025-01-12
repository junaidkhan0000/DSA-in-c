#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int a[MAX],pos,elem;
int n=0;

void create();
void display();
void insert();
void delete();

void main()
{
	int choice;
	while(1)
	{
	
	printf("\n\n~~~~MENU~~~~");
	printf("\n1. Create an Array Element: ");
	printf("\n2. Display Array Elements: ");
	printf("\n3. Insert An Element at given Position");
	printf("\n4 .Delete An Element at given Position");
	printf("\n5. EXIT");
	printf("\nEnter your choice: ");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1: create();
		        break;
		case 2: display();
		        break;
		case 3: insert();
		        break;
		case 4: delete();
		        break;
		case 5: exit(1);
		        break;
		default: printf("\n Enter valid choice!");
	}
}
}
void create()
{
	int i;
	printf("\nEnter number of elements: ");
	scanf("%d", &n);
	printf("\nEnter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void display()
{
	int i;
	if(n==0)
	{
	 printf("\nNo elements to display");
	 return;
}
printf("\nArray Elements are: ");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
void insert()
{
	int i;
	if(n==MAX)
	{
		printf("\nArray if full! insertion is not possible");
		return;
	}
	do
	{
		printf("\nEnter a valid position to be inserted: ");
		scanf("%d",&pos);
	}while(pos>n);
	printf("\nEnter the Element to be insert");
	scanf("%d",&elem);

for(i=n-1;i>=pos;i--)
{
	a[i+1]=a[i];
}
a[pos]=elem;
n=n+1;
display();
} 
void delete() 
{ 
    int i; 
            
    if(n == 0) 
    { 
        printf("\nArray is empty and no elements to delete"); 
        return; 

    } 
    do 
    { 
        printf("\n Enter a valid position from where element to be deleted:    "); 
        scanf("%d", &pos); 
    } 
while(pos>=n); 
    elem = a[pos]; 
    printf("\n Deleted element is : %d \n", elem); 
    for( i = pos; i< n-1; i++) 
    { 
        a[i] = a[i+1]; 
    } 
    n = n-1; 
    display(); 
} 
