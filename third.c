
// ============================================================
// Question 1: Determine whether a selling price gives profit or loss and calculate the amount.
// ============================================================
// #include<stdio.h>
// int main(){
//     int sp,cp,loss,profit;
//     printf("enter the sp and cp of the product:\n");
//     scanf("%d %d",&sp,&cp);
//     if(sp>=cp){
//         printf("he got profit\n");
//         profit=sp-cp;
//         printf("profit is %d",profit);
//     }
//     else if(cp>sp){
//         printf("he got loss\n");
//         loss=cp-sp;
//         printf("loss is %d",loss);
//     }
//     return 0;
// }


// ============================================================
// Question 2: Check whether a number is even or odd.
// ============================================================
// #include<stdio.h>
// int main(){
//     int n=0;
//     printf("enter a number:\n");
//     scanf("%d",&n);
//     if(n%2==0){
//         printf("this is even");
//     }
//     else{
//         printf("this is odd");
//     }
//     return 0;
// }


// ============================================================
// Question 3: Check whether a given year is a leap year.
// ============================================================
// #include<stdio.h>
// int main(){
//     int year;
//     printf("enter a year");
//     scanf("%d",&year);
//     if(year%4==0){
//         printf("leap year");
//     }
//     else{
//         printf("not leap year");
//     }
//     return 0;
// }


// ============================================================
// Question 4: Determine the day of the week from a year using a simple modulo calculation.
// ============================================================
// #include<stdio.h>
// int main(){
//     int year;
//     printf("write year to find out:\n");
//     scanf("%d",&year);
//     year=year*365;
//     if(year%7==0){
//         printf("monday");
//     }
//     else if(year%7==1){
//         printf("tuesday");
//     }
//         else if(year%7==2){
//         printf("wednesday");
//     }
//         else if(year%7==3){
//         printf("thusday");
//     }
//         else if(year%7==4){
//         printf("friday");
//     }
//         else if(year%7==5){
//         printf("saturday");
//         }

//         return 0;
//     }


// ============================================================
// Question 5: Reverse a five-digit number and compare it with the original.
// ============================================================
// #include<stdio.h>
// int main(){
//     int n=0;
//     printf("enter a number:\n");
//     scanf("%d",&n);
//     int d1,d2,d3,d4,d5;
//     d1=n%10;
//     n=n/10;
//     d2=n%10;
//     n=n/10;
//         d3=n%10;
//     n=n/10;
//         d4=n%10;
//     n=n/10;
//         d5=n%10;
//     n=n/10;
//     int reversed=d1*10000+d2*1000+d3*100+d4*10+d5*1;
//     printf("reversed number is %d\n",reversed);
//     if(n=reversed){
//         printf("both number are same\n");
//     }
//     else{
//         printf("not same");
//     }
//     return 0;
// }


// ============================================================
// Question 6: Find the greatest among three numbers using nested if statements.
// ============================================================
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter value of a  b  c\n");
//     scanf("%d %d %d",&a,&b,&c);
//     if(a>=b){
//         if(a>=c){
//             printf("a is the greatest");
//         }
//         else{
//             printf("c is the greatest");
//         }
//     }
//     if(a<=b){
//         if(b>=c){
//             printf("b is the greatest");
//         }
//         else{
//             printf("c is the greatest");
//         }
//     }
// }


// ============================================================
// Question 7: Check whether three given angles can form a triangle.
// ============================================================
// #include<Stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter teh angles of the trianlges");
//     scanf("%d %d %d",&a,&b,&c);
//     if((a+b+c)>=180){
//         printf("this traingle is not possible");
//     }
//     else{
//         printf("trianlge is possible");
//     }
//     return 0;
// }


// ============================================================
// Question 8: Find the absolute value of a number.
// ============================================================
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the value of n:\n");
//     scanf("%d",&n);
//     if(n>=0){
//         printf("abs value is %d",n);
//     }
//     else{
//         printf("abs value is %d",-n);
//     }
//     return 0;
// }


// ============================================================
// Question 9: Compare the area and perimeter of a rectangle.
// ============================================================
// #include<stdio.h>
// int main(){
//     int l,b,area,peri;
//     printf("enter the length and breadth of the rectangl:\n");
//     scanf("%d %d",&l,&b);
//     area=l*b;
//     peri=2*(l+b);
//     if(area>peri){
//         printf("area if greater");
//     }
//     else{
//         printf("perimeter is greater");
//     }
//     return 0;
// }



// ============================================================
// Question 10: Check whether three points lie on a straight line using slopes.
// ============================================================
// #include<stdio.h>
// int main(){
//     int x1,x2,x3,y1,y2,y3;
//     printf("enter value of x1,x2,x3,y1,y2,y3\n");
//     scanf("%d %d %d %d %d %d",&x1,&x2,&x3,&y1,&y2,&y3);
//     float m1=(x2-x1)/(y2-y1);
//     float m2=(x3-x2)/(y3-y2);
//     if(m1=m2){
//         printf("st line");
//     }
//     else{
//         printf("not str");
//     }
//     return 0;
// }


// ============================================================
// Question 11: Determine whether a point is on, inside, or outside a circle.
// ============================================================
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int r,x,y,a,b;
//     printf("enter the r,x,y center of circle\n");
//     scanf("%d %d %d %d %d",&x,&y,&r,&a,&b);
//     int d=sqrt(pow((x-a),2)+pow((y-b),2));
//     if(r==d){
//         printf("on circumfence");

//     }
//     else if(r<d){
//         printf("outside circle");
//     }
//     else {
//         printf("inside");
//     }
//     return 0;

// }



// ============================================================
// Question 12: Check whether a year is a leap year.
// ============================================================
// #include<Stdio.h>
// int main(){
//     int year;
//     printf("enter a year:\n");
//     scanf("%d",&year);
//     if(year%4!=0){
//         printf("this is not leap year");
//     }
//     else{
//         printf("this is leap year");
//     }
//     return 0;
// }


// ============================================================
// Question 13: Display the ASCII value of a character and identify uppercase, lowercase, or digit.
// ============================================================
// #include<stdio.h>
// int main(){
//     char c;
//     printf("enter a cahracter\n");
//     scanf("%c",&c);
//     printf("acsi value of ch is %c = %d \n",c,c);
//     if(c>65 && c<97){
//         printf("this is capital letters");
//     }
//     else if(c>97 && c<122){
//         printf("this is small letters");
//     }
//     else if(c>48 &&c<57){
//         printf("character is numbers");
//     }
//     return 0;
// }

