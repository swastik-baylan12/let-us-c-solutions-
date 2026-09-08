// Q1 — Find and print prime numbers from 1 to 300.
// Solution 1
// #include<stdio.h>
// int main(){
//     int i;
//     for( i=1;i<=300;i++){
//         int count=0;
//         for(int=i;j=1;j<){
//             if(i%j==0){
//                 count++;
                
//             }
//         }
//         if(count==2){
//             printf("%d is prime number:\n",i);
//         }
//     }
//     return 0;
// }

// Q2 — Print the character “a” 4000 times.
// Solution 1
// #include<stdio.h>
// int main(){
//     int i;
//     for(i=1;i<4000;i++){
//         printf("%c",97);
//     }
// }

// 🎈🎈🎈🎈// use double for better answer instead of int 
// Q3 — Calculate the sum of the first seven terms of the series involving i/i!.
// Solution 1
// #include<Stdio.h>
// int main(){
//     int sum=0;
   
//     for(int i=1;i<=7;i++){
//         int factorial=1;
  
//     for(int j=1;j<=i;j++){
//         factorial=factorial*j;
//     }
//     sum=sum+i/factorial;
// }
// printf("sum of the number is %d",sum);

// }

// Q4 — Print the multiplication table of a given number.
// Solution 1
// #include<stdio.h>
// int main(){
//     int i;
//     printf("enter the value of i:\n");
//     scanf("%d",&i);
//     for(int j=1;j<=10;j++){
//         printf("%d*%d=%d\n",i,j,i*j);
//     }
//     return 0;
// }

// Q5 — Calculate i = 2 + (y + 0.5x) for the given ranges of x and y.
// Solution 1
// #include<stdio.h>
// int main(){
//     int y;
//     float x,i;
//     for(y=1;y<=6;y++){
//         for(x=5.5;x<=122.5;x=x+.5){
//         i=2+(y+.5*x);
//         printf ( "y = %d, x = %f i = %f\n", y, x, i ) ; 
//     }}
//     return 0;

// }

// Q6 — Calculate the sum of the given power series for a supplied x.
// Solution 1
// #include<stdio.h>
// Q7 — Find Pythagorean triples within the range 1 to 30.
// Solution 1
// #include<math.h>
// int main(){
//     float x,sum=0,power=0;
//     printf("enter the value of x:\n");
//     scanf("%f",&x);
//     for(int i=1;i<=7;i++){
      
//         power=pow(0.5*((x-1)/x),i);
//         sum=sum+power;
//     }
//     printf("sum of the series is %f",sum);
//     return 0;

// }

// Q8 — Print a 3×5 pattern of asterisks.
// Solution 1
// #include<stdio.h>
// int main(){
//     int a,b,c,d;
//     for(a=1;a<=30;a++){
//         for(b=1;b<=30;b++){
//             for(c=1;c<=30;c++){
//                 d=c*c-(a*a+b*b);
//                 if(d==0){
//                     printf("%d %d %d  are tripelt \n ",a,b,c);
//                 }
                
                    
                
//             }
//         }
//     }
//     return 0;
// }

// 🎈🎈🎈🎈 some other patterns question
// Q9 — Print a 3×3 pattern of asterisks.
// Solution 1
// #include<stdio.h>
// int main(){
//     for(int i=1;i<4;i++){
//         for(int j=1;j<6;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q10 — Print a 3×4 number pattern.
// Solution 1
// #include<stdio.h>
// int main(){
//     for(int i=1;i<4;i++){
//         for(int j=1;j<4;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     for(int i=1;i<4;i++){
//         for(int j=1;j<5;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

