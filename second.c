// 🎈🎈🎈🎈🎈method 1
// Q1 — Find the sum of the digits of a five-digit number.
// Solution 1
// #include<Stdio.h>
// int main(){
//     int n=0;
//     printf("enter a number :\n");
//     scanf("%d",&n);
//     int sum,d1,d2,d3,d4,d5;
//     d1=n%10;
//     n=n/10;
//     d2=n%10;
//     n=n/10;
//     d3=n%10;
//     n=n/10;
//     d4=n%10;
//     n=n/10;
//     d5=n%10;
//     n=n/10;
//     sum=d1+d2+d3+d4+d5;
//     printf("sum is %d",sum);
//     return 0;
// }

// 🎈🎈🎈🎈🎈 without using of loops
// Solution 2
// #include<stdio.h>
// int main(){
//     int n=0;
//     printf("enter a number :\n");
//     scanf("%d",&n);
//     int digit,sum=0;
//     digit=n%10;
//     n=n/10;
//     sum=sum+digit;
//     digit=n%10;
//     n=n/10;
//     sum=sum+digit;
//     digit=n%10;
//     n=n/10;
//     sum=sum+digit;
//     digit=n%10;
//     n=n/10;
//     sum=sum+digit;
//     digit=n%10;
//     n=n/10;
//     sum=sum+digit;
//     printf("sum of the digit is %d",sum);
//     return 0;


// }


// 🎈🎈🎈🎈usung loops
// Solution 3
// #include<stdio.h>
// int main(){
//     int number;
//     printf("enter a number:\n");
//     scanf("%d",&number);
//     int digit,sum=0;
//     while(number!=0){
//         digit=number%10;
//         sum=sum+digit;
//         number=number/10;
//     }
//     printf("sum of the number is %d",sum);
//     return 0;
// }


// Q2 — Reverse a five-digit number.
// Solution 1
// #include<stdio.h>
// int main(){
//     int n=0;
//     printf("enter a number :\n");
//     scanf("%d",&n);
//     int reversed,d1,d2,d3,d4,d5;
//     d1=n%10;
//     n=n/10;
//     d2=n%10;
//     n=n/10;
//     d3=n%10;
//     n=n/10;
//     d4=n%10;
//     n=n/10;
//     d5=n%10;
//     n=n/10;
//     reversed=d1*10000+d2*1000+d3*100+d4*10+d5*1;
//     printf("reversed number is %d",reversed);
//     return 0;
// }

// // 🎈🎈🎈using loops
// Solution 2
// #include<stdio.h>
// int main(){
//     int number;
//     printf("enter a number:\n");
//     scanf("%d",&number);
//     int digit,reversed=0;
//     while(number!=0){
//         digit=number%10;
//         reversed=digit+reversed*10;
//         number=number/10;

//     }
//     printf("reversed number is %d",reversed);
//     return 0;
// }


// Q3 — Calculate the area of a triangle using Heron’s formula.
// Solution 1
// #include<stdio.h>
// Q4 — Convert Cartesian coordinates (x, y) to polar coordinates.
// Solution 1
// #include<math.h>
// int main(){
//     float l1,l2,l3;
//     printf("enter the sides of the trianlge:\n");
//     scanf("%f %f %f",&l1,&l2,&l3);
//     float s=(l1+l2+l3)/2.0;
//     float area=sqrt(s*((s-l1)*(s-l2)*(s-l3)));
//     printf("Area of the trinalge is %f",area);
//     return 0;


// }

// Q5 — Calculate the distance between two locations from their latitude/longitude coordinates.
// Solution 1
// #include<Stdio.h>
// Q6 — Calculate the wind-chill factor from temperature and wind velocity.
// Solution 1
// #include<math.h>
// int main(){
//     float x,y,r,angle;
//     printf("enter the value of x and y:\n");
//     scanf("%f %f",&x,&y);
//     r=sqrt(x*x+y*y);
//     angle=atan2(y,x);
//     angle=(angle*180)/3.14;
//     printf("polar coordiantes are %f %f",r,angle);
//     return 0;

    
// }

// Q7 — Swap two values without using a third variable.
// Solution 1
// #include<stdio.h>
// Q8 — Calculate the minimum number of currency notes needed for a given amount.
// Solution 1
// #include<math.h>
// int main(){
//     float l1,l2,g1,g2,d;
//     printf("enter the longitutes and latitudes coordiantes:\n");
//     scanf("%f %f %f %f",&l1,&l2,&g1,&g2);
//     d=3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));
//     printf("distance in nautical miles is %f",d);
//     return 0;
// }

// #include<stdio.h>
// #include<math.h>
// int main(){
//     float t,v;
//     printf("enter the velocity and temp of the air Or wind:\n");
//     scanf("%f %f",&t,&v);
//     float wcf=35.74+.06215*t+(0.4275*t-35.75)*pow(v,0.16);
//     printf("the wcf of wind is %f",wcf);
//     return 0;

// }

// #include<stdio.h>
// int main(){
//     int c,d;
//     printf("enter the value of c and d:\n");
//     scanf("%d %d",&c,&d);
//     c=c+d;
//     d=c-d;
//     c=c-d;
//     printf("swapped values %d %d",c,d);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the value of n:\n");
//     scanf("%d",&n);
//     int n1,n2,n5,n10,n50,n100;
//     n100=n/100;
//     n=n%100;
//     n50=n/50;
//     n=n%50;
//     n10=n/10;
//     n=n%10;
//     n5=n/5;
//     n=n%5;
//         n=n/2;
//     n2=n%2;
//         n=n/1;
//     n1=n%1;

//     int sum=n100+n50+n10+n5+n2+n1;
//     printf("sum of the notes is %d",sum);
//     return 0;
// }

