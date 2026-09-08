// Q1 — Read marks of 10 students and calculate their sum and average.
// Solution 1
// #include<stdio.h>
// int main(){
//     int avg,sum=0;
//     int marks[10];
//     for(int i=0;i<10;i++){
//         printf("enter marks:\n");
//         scanf("%d",&marks[i]);
//     }
//     for(int i=0;i<10;i++){
//         sum=sum+marks[i];

//     }
//     avg=sum/10;
//     printf("sum of amrks is %d",sum);
//     printf("avg of student is %d",avg);
// }

// Q2 — Display all elements of an array by passing each element to a function.
// Solution 1
// #include<stdio.h>
// void display(int a);
// int main(){
//     int marks[10]={10,9,9,9,9,8,8,8,9,10};
//     for(int i=0;i<10;i++){
//         display(marks[i]);
//     }
//     return 0;

// }
// void display(int a){
//     printf("%d ",a);
// }

// Solution 2
// #include<stdio.h>
// void display(int *a);
// int main(){
//     int marks[10]={10,9,9,9,9,8,8,8,9,10};
//     for(int i=0;i<10;i++){
//         display(&marks[i]);
//     }
//     return 0;

// }
// void display(int *a){
//     printf("%d ",*a);
// }

// Q3 — Print each array element and its memory address.
// Solution 1
// #include<stdio.h>
// int main(){
//     int marks[5]={1,2,3,4,5};
//     for(int i=0;i<5;i++){
//         printf("element=%d ",marks[i]);
//         printf("adress %p ",&marks[i]);
//         printf("\n");
//     }
// }


// Q4 — Count how many times a given value occurs in an array.
// Solution 1
// #include<stdio.h>
// int dispaly(int a);
// int main(){
//     int x;
//     printf("enter the value of i u wna to find:\n");
//     scanf("%d",&x);
//     int num[10]={1,1,1,2,2,2,2,3,4,5};
//     int count=0;
//     for(int i=0;i<10;i++){
//         if(x==num[i]){
//             count++;
           
//         }


//     }
//     printf("no of times prensent is %d",count);
    
   
// }


// 🎈🎈🎈🎈selection sorting

// Q5 — Sort an array using a manual selection-sort style approach.
// Solution 1
// #include<stdio.h>
// int swap(int *a,int *b);
// int main(){
//     int num[5]={44,33,55,22,11};
//     for(int i=0;i<5;i++){
//         if(num[0]>num[i+1]){
//             swap(&num[0],&num[i+1]);
//         }
//     }
//         for(int i=1;i<5;i++){
//         if(num[1]>num[i+1]){
//             swap(&num[1],&num[i+1]);
//         }
//     }
//             for(int i=2;i<5;i++){
//         if(num[2]>num[i+1]){
//             swap(&num[2],&num[i+1]);
//         }
//     }
//                 for(int i=3;i<5;i++){
//         if(num[3]>num[i+1]){
//             swap(&num[3],&num[i+1]);
//         }
//     }
//     for(int i=0;i<5;i++){
//     printf("%d ",num[i]);
//     }
// }
// int swap(int *a,int *b){
//     int c=*a;
//     *a=*b;
//     *b=c;
// }


// Solution 2
// #include<stdio.h>
// int swap(int *a,int *b);
// int main(){
//     int num[5]={44,33,55,22,11};
//     for(int i=0;i<4;i++){
//         for(int j=i+1;j<5;j++){
//             if(num[i]>num[j]){
//                 swap(&num[i],&num[j]);
//             }
//         }
//     }
//     for(int i=0;i<5;i++){
//         printf("%d ",num[i]);
//     }

// }
// int swap(int *a,int *b){
//     int c=*a;
//     *a=*b;
//     *b=c;
// }

// 🎈🎈🎈🎈🎈🎈bubble sorting
// Q6 — Sort an array using repeated bubble-sort passes.
// Solution 1
// #include<stdio.h>
// void swap(int *a,int *b);
// int main(){
//     int num[5]={44,33,55,22,11};
//     for(int i=0;i<5;i++){
//         if(num[i]>num[i+1]){
//             swap(&num[i],&num[i+1]);
//         }
//     }
//         for(int i=0;i<5;i++){
//         if(num[i]>num[i+1]){
//             swap(&num[i],&num[i+1]);
//         }
//     }
//         for(int i=0;i<5;i++){
//         if(num[i]>num[i+1]){
//             swap(&num[i],&num[i+1]);
//         }
//     }
//         for(int i=0;i<5;i++){
//         if(num[i]>num[i+1]){
//             swap(&num[i],&num[i+1]);
//         }
//     }
//     for(int i=0;i<5;i++){
//     printf("%d ",num[i]);
//     }
    
// }
// void swap(int *a,int *b){
//     int c=*a;
//     *a=*b;
//     *b=c;
// }

// 🎈🎈🎈🎈🎈bubble sorting with loops
// Solution 2
// #include<stdio.h>
// void swap(int *a,int *b);
// int main(){
//     int num[5]={44,33,55,22,11};
//     for(int k=1;k<5;k++){
//     for(int i=0;i<5;i++){
//         for(int j=i+1;j<5;j++){
//             if(num[i]>num[j]){
//                 swap(&num[i],&num[j]);
//             }
//         }
//     }
// }
// for(int i=0;i<5;i++){
// printf(" %d ",num[i]);
// }

// }
// void swap(int *a,int *b){
//     int c=*a;
//     *a=*b;
//     *b=c;
// }

// Q7 — Print an array in reverse order.
// Solution 1
// #include<stdio.h>

// int main(){
//     int num[5]={11,22,33,44,55};
//     for(int i=4;i>=0;i--){
//         printf("%d ",num[i]);
        

//     }
// }


// Q8 — Compare elements from opposite ends of an array.
// Solution 1
// #include<stdio.h>
// int main(){
//     int num[10]={11,22,22,33,33,44,33,55,22,11};
//     for(int i=0;i<10;i++){
//         if(num[i]==num[9-i]){
//             printf("%d",num[i]);
//         }
//         printf("\n");
//     }
// }

// Q9 — Find the smallest element in an array.
// Solution 1
// #include<stdio.h>
// int main(){
//     int num[10]={5,2,3,4,5,0,7,8,9,10};
//     int smallest=num[0];
//     for(int i=1;i<10;i++){
//         if(num[i]<smallest){
//             smallest=num[i];
//         }
//     }
//     printf("smallest number is %d",smallest);
//     return 0;
// }

