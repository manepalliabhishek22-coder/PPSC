/* write a C programe to evaluate the following experssion a/b*c-b+a*d/3 */
#include <stdio.h>
int main() 
{
    float a, b, c, d, result;

    printf("Enter value for a: ");
    scanf("%f", &a);

    printf("Enter value for b: ");
    scanf("%f", &b);

    printf("Enter value for c: ");
    scanf("%f", &c);

    printf("Enter value for d: ");
    scanf("%f", &d);

    if (b == 0); 
        printf("Error: Division by zero is not allowed.\n");
        return 1;
}


    
