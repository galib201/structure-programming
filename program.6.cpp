#include<stdio.h>
int main()
{
	float a,b,c,addition,substraction,multiply,division,disibility;
	printf("Enter the float number a: ");
	scanf("%f",&a);
	printf("Enter the float number b: ");
	scanf("%f",&b);
	printf("Enter the float number c: ");
	scanf("%f",&c);
	
	addition=a+b+c;
	substraction=a-b-c;
	multiply=a*b*c;
	division=a/b/c;
	///disibility=a%b%c;
	
	
	printf("Addition=%.2f\n",addition);
	printf("substraction=%.2f\n",substraction);
	printf("Multiply=%.2f\n",multiply);
	printf("Division=%.2f\n",division);
	printf("disibility=%.2f",disibility);
	
	return 0;
	
}
