// Q1 — Calculate overtime pay for 10 employees.
// Solution 1
// #include<stdio.h>
// int main(){
//     int n=1;
//     while(n<11){
//         int overtime;
//         printf("enter the ovetime of employees\n");
//         scanf("%d",&overtime);
//         int salary=overtime*12;
//         printf("overtime salary is %d\n",salary);
//         n++;
//     }
//     return 0;
// }

// Q2 — Calculate the factorial of a number using a while loop.
// Solution 1
// #include<Stdio.h>
// int main(){
//     int n;
//     printf("enter a number :\n");
//     scanf("%d",&n);
//     int i=1,factorial=1;
//     while(i<=n){
//         factorial=i*factorial;
//         i++;
//     }
//     printf("factorial is %d",factorial);
//     return 0;
// }

// Q3 — Calculate a raised to the power b using a while loop.
// Solution 1
// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("enter the value of a and b:\n");
//     scanf("%d %d",&a,&b);
//     int i=1,power=1;
//     while(i<=b){
//         power=a*power;
//         i++;
//     }
//     printf("power of a raised to b is %d",power);
//     return 0;
// }

// Q4 — Print the ASCII values/characters from 0 to 255.
// Solution 1
// #include<Stdio.h>
// int main(){
//     int i=0;
//     while(i<=255){
//         printf("ascii value of %c =is %d\n",i,i);
//         i++;
//     }
//     return 0;
// }

// Q5 — Find Armstrong numbers from 1 to 500.
// Solution 1
// #include<stdio.h>
// int main(){
//     int i=1;
//     while(i<=500){
//         int a=i,cube,sum=0;
//         while(a!=0){
//             int digit=a%10;
//             cube=digit*digit*digit;
//             a=a/10;
//             sum+=cube;
//         }
//         if(sum==i){
//             printf("%d is aarmstong number:\n",i);
//         }
//         i++;
//     }
// }

// Q6 — Implement the 21-matchstick game where the last match picked loses.
// Solution 1
// #include<stdio.h>
// int main(){
//     int matches=21;
//     printf("------------------matches game------------\n");
//     printf("u have to pick upto 4 matches from 21 last one pick will lose\n");
//     while(matches!=0){
//         int you,comp;
//         printf("enter a number from 1 to 4:\n");
//         scanf("%d",&you);
//         comp=5-you;
//         printf("computerpicked up %d\n",comp);
//         matches=matches-comp-you;
//         if(matches==1){
//             printf("u lose the game\n");
//             break;
//         }

//     }
//     return 0;
// }

// Q7 — Keep accepting numbers while the user chooses Yes/No.
// Solution 1
// #include<stdio.h>
// int main(){
//     char response;
//     int num;
//     do{
//         printf("do u want to enter a number: Yes(Y/y) or no(N/n)\n");
//         scanf(" %c",&response);
//         if(response=='y'||response=='Y'){
//             printf("enter a number:\n");
//             scanf(" %d",&num);
//         }
//     }
//     while(response=='y'|| response=='Y');
//     return 0;
// }

// Q8 — Read numbers until the user stops and find the smallest number.
// Solution 1
// #include<stdio.h>
// int main(){
//     int num;
//     printf("enter a number:\n");
//     scanf("%d",&num);
//     int smallest=num;
//     char response;
//     while (1)
//     {
//         printf("do u want to enter other number:\n");
//         scanf(" %c",&response);
//         if(response=='n'|| response=='N'){
//             break;
//         }
//         else{
//             printf("enter other number:\n");
//             scanf("%d",&num);
            
//         }
//         if(smallest>num){
//             smallest=num;
//         }
//     }
//     printf("smallest number is %d",smallest);
//     return 0;
    
// }
