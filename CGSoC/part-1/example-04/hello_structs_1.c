#include <stdio.h>
#include <stdlib.h>
struct complex {
	int x;
	int y;
};
#define complexi struct complex
complexi addComplex(complexi a,complexi b);
int main(void){
	complexi z;
	complexi w;
	z.x = 1;
	z.y = 2;
	w.x = 2;
	w.y = 3;
	complexi c = addComplex(z,w);
	printf("z=%i+%ii\n",z.x,z.y);
	printf("w=%i+%ii\n",w.x,w.y);
	printf("c=%i+%ii\n",c.x,c.y);
	printf("Hello world\n");
	return EXIT_SUCCESS;
}
complexi addComplex(complexi a, complexi b){
	complexi w;
	w.x = a.x + b.x;
	w.y = a.y + b.y;
	return w;
}
