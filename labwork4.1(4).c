#include <stdio.h> 

main()
{
    int a,b,c; 
    printf("Enter value of a=");
    scanf("%d", &a);
    printf("Enter value of b=");
    scanf("%d", &b);
    
    c = a;
    a = b;
    b = c;
   
    printf("swapping value of a=%d\n",a);
    printf("swapping value of b=%d",b);
   
}