#include<stdio.h>
#include<math.h>

void tower(int n,char from_peg, char aux_peg, char to_peg);
void main()
{
	int n;
	printf("\nEnter number of disks: ");
	scanf("%d", &n);
	tower(n, 'A', 'B', 'C');
	printf("\nthe total number moves=%0.0f",pow(2,n)-1);
}
void tower(int n, char from_peg,  char aux_peg, char to_peg)
{
	if(n==1)
	{
		printf("\nmove disk%d from %c peg to%c peg",n, from_peg,to_peg);
		return;
	}
	tower(n-1, from_peg, to_peg, aux_peg);
	printf("\nmoves disk%d from %c peg to%c peg",n, from_peg,to_peg);
	tower(n-1, aux_peg, from_peg, to_peg);
}
