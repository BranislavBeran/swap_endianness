#include <stdio.h>

short int swap_endianness(short int x){
	
	short int *y;
	unsigned char *a,*b,c;
	
	
	y=&x;
	a=(unsigned char*)y;
	b=(unsigned char*)y+1;
	
	c=*a;
	*a=*b;
	*b=c;

		
	return x;
	
}

main(){
	short int x;
	
	scanf("%d",&x);
	x=swap_endianness(x);
	printf("%d",x);
}
