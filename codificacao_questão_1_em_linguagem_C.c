#include <stdio.h>
#include <stdlib.h>
int main(){
	int a,b,x;
	  a = 0;
	  b = 0;
	  x = (!(a && b));
	printf("OPERADOR AND\n");
	printf("|%d|and|%d|invertido:%d\n",a,b,x);
	  a = 0;
	  b = 1;
	  x = (!(a && b));
	printf("|%d|and|%d|invertido:%d\n",a,b,x);
	  a = 1;
	  b = 0;
	  x = (!(a && b));
	printf("|%d|and|%d|invertido:%d\n",a,b,x);
	  a = 1;
	  b = 1;
	  x = (!(a && b));
	printf("|%d|and|%d|invertido:%d\n",a,b,x);
	return 0;
}
