#include<stdio.h>
#include<math.h>

int main(){
    int a;
    int b;
    
    printf("wrie the first number\n");
    scanf("%d",&a);
    printf("wrie the second number\n");
    scanf("%d",&b);
    int c = a*b;
    printf("multinliplication of number is %d\n",c);
    printf("adition if number is %d\n",a + b);
    printf("power of a^b is %.2f ",pow(a,b));
    
return 0;
}