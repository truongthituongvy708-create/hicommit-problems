#include <stdio.h>
int main()
{

	float a, b, c, max;
	
	printf("nhap so thu nhat: ");
	scanf("%f", &a);
	
	printf("nhao so thu hai :");
	scanf("%f", &b);
	
	printf("nhao so thu ba :");
 	scanf("%f", &c);
 	
	max = a;
	
	if (b > max)
{
	max = b;
}
	if (c > max)
{
	max = c;
}
	printf("so lon nhat laf: %.2f\n", max);
	
	return 0;
}