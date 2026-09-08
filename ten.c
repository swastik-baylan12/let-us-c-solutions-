
// ============================================================
// Question 1: Write a function to calculate the factorial of a number using pointers.
// ============================================================
// #include<stdio.h>
// int factorial(int *a,int *d);
// int main(){
//     int number,fact;
//     printf("enter a number:\n");
//     scanf("%d",&number);
//     factorial(&number,&fact);
//     printf("factorial is %d",fact);
// }
// int factorial(int *a,int *b){
//     *b=1;

//     for(int i=1;i<=*a;i++){
//         *b=(*b)*i;

//     }
// }


// ============================================================
// Question 2: Write a function using pointers to swap two numbers.
// ============================================================
#include<stdio.h>
void swap(int *a,int *b);
int main(){
    int a,b;
    printf("enter value of a and b:\n");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("swepped value is %d %d",a,b);

}
void swap(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
    
}
