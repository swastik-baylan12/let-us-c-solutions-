// Q1 — Implement a 4×4 sliding/block game where the blank tile can move left, right, up or down.
// Solution 1
// #include<stdio.h>
// void swap(int *a,int *b);
// int main(){
//     int a[4][4]={
//         {1,4,15,7},
//         {8,10,2,11},
//         {14,3,6,13},
//         {12,9,5,0}
//     };
//     int row,column;
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             printf("%d",a[i][j]);
//         }
//     }
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             if(a[i][j]==0){
//                 row=i;
//                 column=j;
//             }
//         }
//     }
//     char response='\0';
//     printf("position of balnk is row=%d column=%d\n",row+1,column+1);
//     printf("enter ur response {r,l,u,d,q}\n");
//     scanf("%c",&response);
//     while(response!='q'){
//         switch(response){
//             case 'l':
//             if(column>0){
//             swap(&a[row][column],&a[row][column-1]);
//             }else{
//                 printf("cant move");
//             }
//             break;
        
//             case 'r':
//             if(column<3){
//             swap(&a[row][column],&a[row][column+1]);
//             }else{
//             printf("cant move");
//             }
//             break;
//             case 'u':
//             if(row>0){
//             swap(&a[row][column],&a[row-1][column]);
//             }else{
//                 printf("cant move");
//             }
//             break;
//             case 'd':
//             if(row<3){
//             swap(&a[row][column],&a[row+1][column]);
//             }
//             else{
//                 printf("cant move");
//             }
//             break;
//         }
//             for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             printf("%d",a[i][j]);
//         }
//     }
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             if(a[i][j]==0){
//                 row=i;
//                 column=j;
//             }
//         }
//     }
  
//     printf("position of balnk is row=%d column=%d\n",row+1,column+1);
//     printf("enter ur response {r,l,u,d,q}\n");
//     scanf("%c",&response);

//     }
// }
// void swap(int *a,int*b){
//     int c=*a;
//     *a=*b;
//     *b=c;
// }

// Solution 2
// #include<stdio.h>
// void swap(int *a,int *b);
// int main(){
//     int a[4][4]={{1,4,15,7},
// {8,10,2,11},{14,3,6,13},{12,9,5,0}};
// for(int i=0;i<4;i++){
//     for(int j=0;j<4;j++){
//         printf("%d ",a[i][j]);
//     }
//     printf("\n");
// }
// int row,column;
// for(int i=0;i<4;i++){
//     for(int j=0;j<4;j++){
//         if(a[i][j]==0){
//             row=i;
//             column=j;
//             printf("row=%d column=%d",row+1,column+1);
//         }
//     }
// }
// char response='\0';
// printf("enter response l r u d or q for quit:\n");
// scanf(" %c",&response);
// while(response!='q'){
// switch(response){
//     case 'l':
//     if(column>0){
    
//     swap(&a[row][column],&a[row][column-1]);
//     }else{
//         printf("cant move there");
//     }
//     break;
//         case 'r':
//             if(column<3){
    
//     swap(&a[row][column],&a[row][column+1]);
//     }else{
//         printf("cant move there");
//     }
//     break;
//         case 'u':
//                     if(row>0){
    
//     swap(&a[row][column],&a[row-1][column]);
//     }else{
//         printf("cant move there");
//     }
//     break;
//         case 'd':
//                             if(row<3){
    
//     swap(&a[row][column],&a[row+1][column]);
//     }else{
//         printf("cant move there");
//     }
//     break;
    

// }
// for(int i=0;i<4;i++){
//     for(int j=0;j<4;j++){
//         printf("%d ",a[i][j]);
//     }
//     printf("\n");
// }
// printf("enter response l r u d or q for quit:\n");
// scanf(" %c",&response);
//  }}

// void swap(int *a,int *b){
//     int c=*a;
//     *a=*b;
//     *b=c;
// }
