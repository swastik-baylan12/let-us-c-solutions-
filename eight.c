// Q1 — Demonstrate the address and value of a variable using & and *.
// Solution 1
// #include<stdio.h>
// int main(){
//     int i=5;
//     printf("adress of i is %p\n",&i);
//     printf("value of i is %d\n",i);
//     printf("value of is %d",*(&i));
//     return 0;
// }
// * it give as value at adress and & is adress of any variable

// Q2 — Demonstrate a pointer storing the address of a variable.
// Solution 1
// #include<stdio.h>
// int main(){
//     int i=3;
//     int *j=&i;
//     printf("value of i is %d\n",i);
//     printf("value of is %d\n",*j);
//     printf("value of i is %d\n",*(&i));
//     printf("address  of is %p\n",j);
//     printf("adress of i is %p",&i);
//     return 0;
// }

// Q3 — Demonstrate a pointer to a pointer.
// Solution 1
// #include<stdio.h>
// int main(){
//     int i=1,*j,**k;
//     j=&i;
//     k=&j;
//     printf("value of i is %d\n",i);
//     printf("value of i is %d\n",*(&i));
//     printf("value of i is %d\n",*j);
//     printf("value of i is %d\n",**k);
//     printf("adress of i is %p\n",&i);
//        printf("adress of i is %p\n",j);
//           printf("adress of i is %p\n",*k);
//           return 0;


// }
// this is using passing by value🎈🎈🎈🎈🎈
// Q4 — Demonstrate swapping using pass-by-value.
// Solution 1
// #include<stdio.h>
// int swap();
// int main(){
//     int a=10,b=20;
//     swap(a,b);
//     printf("a=%d b=%d\n",a,b);
//     return 0;

// }
// int swap(int x,int y){
//     int t=x;
//     x=y;
//     y=t;
//     printf("a=%d b=%d\n",x,y);

// }

// passing by reference🎈🎈🎈🎈🎈🎈
// Q5 — Demonstrate swapping by passing addresses (pointers).
// Solution 1
// #include<stdio.h>
// int swap(int *a,int *b);
// int main(){
//     int x,y;
//     x=12,y=23;
//     swap(&x,&y);
//     printf("value of x and y aare now swapped to %d %d",x,y);


// }
// int swap(int *a,int *b){
//     int g=*a;
//     *a=*b;
//     *b=g;
// }

// Q6 — Find the sum and average of five values using pointers.
// Solution 1
// #include<stdio.h>
// int sum_avg(int *a1,int *a2,int *a3,int *a4,int *a5,int *b1,float *b2);
// int main(){
//     int m1,m2,m3,m4,m5,sum;
//     float avg;
//     printf("enter the value of m1,m2,m3,m4,m5:\n");
//     scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
//     sum_avg(&m1,&m2,&m3,&m4,&m5,&sum,&avg);
//     printf("sum of the digits is %d\n",sum);
//     printf("avg of the sum is %.2f\n",avg);
//     return 0;
    
// }
// int sum_avg(int *a1,int *a2,int *a3,int *a4,int *a5,int *b1,float *b2){
//     *b1=*a1+*a2+*a3+*a4+*a5;
//     *b2=*b1/5.0;
    
// }

// Q7 — Calculate the given series using a function that receives pointers. (This attempt is incomplete.)
// Solution 1
// #include<stdio.h>
// Solution 2
// #include<math.h>
// int series(int *a,float *b);
// int main(){
//     int x;
//     float ans;
//     printf("enter teh value of x:\n");
//     scanf("%d",&x);
//     series(&x,&ans);
//     printf("sum of the sereis is %f",ans);

// }
// int series(int *a,float *b){
//     int m=*a,c;
//     int l=*b;
//     l=0;
//     for(int i=1;i<=30;i+=2){
//         int factorial=1;
//         for(int j=1;j<=i;j++){
//         c=(pow(m,i)*pow(-1,j))/factorial*j;
//         }
//         l=l+c;
        
//     }

// }
// 🎈🎈🎈🎈🎈🎈 this code is wrong but learnt about code spillting method at my own
// Solution 3
// #include<stdio.h>
// Solution 4
// #include<math.h>
// int factorial();
// int negative();
// int series();
// int count();

// int main(){
//     int x;
//     printf("enter value of x:\n");
//     scanf("%d",&x);

// }
// int negative(){
//     int x=1;
//     for(int i=1;i<=10;i++){
//         int y=pow(-1,i);
//         series(y);
//     }
// }
// int factorial(int *j){
//     int fact=1;
//     int a=*j;
//     for(int j=1;j<=1;j++){

//     for(int i=1;i<=a;i++){
//         fact=fact*i;

//     }
//     series(fact);
// }
// }
// int count(){
//     for(int i=1;i<=30;i+=2){
//     factorial(i);
//     }


// }
// int series(int *b,int *c){
//     int ser=0;
//     int ser=*b


// 

// 🎈🎈🎈🎈

// Solution 5
// #include <stdio.h>
// Solution 6
// #include <math.h>

// int get_sign(int term_count);
// float get_power(float x, int i);
// int get_factorial(int i);

// int main() {
//     float x;
//     int max_power;
//     float final_sum = 0.0;
//     int term_count = 0; 

//     printf("Enter the value of x: ");
//     scanf("%f", &x);

    
//     printf("Enter the maximum odd power to calculate  ");
//     scanf("%d", &max_power);

    
//     for (int i = 1; i <= max_power; i += 2) {
        
        
//         int sign = get_sign(term_count);

      
//         float power = get_power(x, i);

//         int fact = get_factorial(i);

      
//         float current_term = (sign * power) / (float)fact;
//         final_sum += current_term;

        
//         term_count++;
//     }

//     printf("\n--- Result ---");
//     printf("\nThe calculated value of the series is: %f\n", final_sum);

//     return 0;
// }


// int get_sign(int term_count) {
//     return (int)pow(-1, term_count);
// }


// float get_power(float x, int i) {
//     return (float)pow(x, i);
// }


// int get_factorial(int i) {
//     int fact = 1;
//     for (int j = 1; j <= i; j++) {
//         fact *= j;
//     }
//     return fact;
// }
// 🎈🎈🎈🎈🎈

// #include<stdio.h>
// #include<math.h>
// int power();
// int sign();
// int factorial();
// int main(){
//     int x;
//     float sum=0;
//     int term_count=0;
//     printf("enter the value of x:\n");
//     scanf("%d",&x);
//     for(int i=1;i<=20;i+=2){
//         int a= sign(term_count);
//         int b=power(x,i);
//         int c=factorial(i);
//         sum=sum+((a*b)*1.0)/c;
//         term_count++;


//     }
//     printf("sum of the series is %f",sum);

// }int sign(int b){
//     int a=pow(-1,b);
//     return (a);
// }
// int power(int x,int i){
//     int c=pow(x,i);
//     return(c);
// }
// int factorial(int i){
//     int fact=1;
//     for(int j=1;j<=i;j++){
//         fact=fact*j;
//     }
//     return(fact);
// }


// 1. In your prototypes (at the very top)
// Change int power(); to double power();

// Change int factorial(); to double factorial();

// 2. Inside the main() function
// Change int x; to double x;

// Change float sum=0; to double sum=0;

// Inside the scanf(), change "%d" to "%lf"

// Inside the loop, change int b=power(x,i); to double b=power(x,i);

// Inside the loop, change int c=factorial(i); to double c=factorial(i);

// Inside the final printf(), change "%f" to "%lf"

// 3. In your function headings & bodies (at the bottom)
// Change int power(int x,int i) to double power(double x, int i)

// Inside the power function, change int c=pow(x,i); to double c=pow(x,i);

// Change int factorial(int i) to double factorial(int i)

// 🎈🎈🎈🎈
// 🎈🎈🎈🎈 also use radian converter code in this for value of x
// #include<stdio.h>
// #include<math.h>
// int factorial(int a);
// int sign(int a);
// int power(int a,int b);
// int main(){
//     int x,term_count=0;
//     float sum=0.0;
//     printf("enter the vlaue of x:\n");
//     scanf("%d",&x);
//     for(int i=1;i<10;i+=2){
//     int a=sign(term_count);
//     int b=power(x,i);
//     int c=factorial(i);
//     sum=sum+((a*b)*(1.0))/c;
//     term_count++;
//     }
//     printf("sum of the series is %f",sum);
//     return 0;
// }
// int sign(int a){
//     int b=pow(-1,a);
//     return(b);
// }
// int power(int a,int b){
//     int c=pow(a,b);
//     return(c);

// }
// int factorial(int a){
//     int fact=1;
//     for(int i=1;i<=a;i++){
//         fact=fact*i;
//     }
//     return(fact);
// }
