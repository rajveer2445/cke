#include<stdio.h>
struct number{
	unsigned n:1;
};
main(){
	int numb;
	struct number a;
	scanf("%d",&numb);
	a.n=numb;
	if(a.n)
	printf("entered number %d is odd",numb);
	else
	printf("entered number %d is even",numb);
	
	
}
