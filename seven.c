// Q1 — Demonstrate nested function calls through a world-tour example.
// Solution 1
// #include<stdio.h>
// void italy();
// void argentina();
// void brazil();
// int main(){
//     printf("iam goinf to world tour \n");
//     italy();
//     printf("i am back in india now\n");
//     return 0;

// }
// void italy(){
//     printf("i first got to italy\n");
//     argentina();
// }
// void argentina(){
//     char response;
//     printf("now i am in argentina\n");
//     printf("should i go back to bazil\n");
//     scanf(" %c",&response);
//     if(response == 'y' || response == 'Y'){
//         brazil();
//     }
//     else if(response =='n'){
//         printf("i am now going to india  then\n");
//        main();
//     }
    
// }
// void brazil(){
//     printf("i  got around the globe now in brazil\n");
//     printf("this is my final stop\n");
//     main();
// }

// Q2 — Write a function that returns the sum of two numbers.
// Solution 1
// #include<stdio.h>
// int sum();
// int main(){
//     int a,b,c;
//     printf("enter teh value of a and b:\n");
//     scanf("%d %d",&a,&b);
//     c=sum(a,b);
//     printf("sum of the number is %d",c);
//     return 0;
// }
// int sum(int a,int b){
//     int d=a+b;
//     return(d);
// }


// Q3 — Write a function that returns the factorial of a number.
// Solution 1
// #include<stdio.h>
// int value();
// int main(){
//     int a,b;
//     printf("enter the value of a:\n");
//     scanf("%d",&a);
//     b=value(a);
//     printf("facotial is %d",b);
//     return 0;
// }
// int value(int n){
//     int factorial=1;
//     for(int i=1;i<=n;i++){
//         factorial=factorial*i;

//     }
//     return(factorial);
// }

// Q4 — Write a function that returns a raised to the power b.
// Solution 1
// #include<stdio.h>
// int power();
// int main(){
//     int a,b,c;
//     printf("enter the value of a and b\n");
//     scanf("%d %d",&a,&b);
//     c=power(a,b);
//     printf("the power of %d raised to %d is %d ",a,b,c);
//     return 0;

// }
// int power(int e,int f){
//     int exp=1;
//     for(int i=1;i<=f;i++){
//         exp=e*exp;

//     }
//     return (exp);

// }

