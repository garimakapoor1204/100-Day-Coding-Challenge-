// Write a program to input two numbers and display their sum, difference, product, and quotien
#include <stdio.h>
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("Sum = %d, ", a + b);
    printf("Diff = %d, ", a -b);
    printf("Product = %d, ", a * b);
    /*
        for quotient we have to check for b 
        if b is 0 just print not defined else print a/b
    */
    if(b!=0){
        printf("Quotient = %d\n", a/b);
    }else{
        printf("Not Defined.\n");
    }
    return 0;
}
