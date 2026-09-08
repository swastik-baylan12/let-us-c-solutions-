
// ============================================================
// Question 1: Find the smallest element in a 5x5 matrix.
// ============================================================
// #include<stdio.h>
// int main(){
//     int matrix[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
//     // for(int i=0;i<5;i++){
//     //     for(int j=0;j<5;j++){
//     //         printf("%d ",matrix[i][j]);
//     //     }
//     //     printf("\n");
//     // }
//     int smallest=matrix[0][0];
//         for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             if(matrix[i][j]<smallest){
//                 smallest=matrix[i][j];
//             }
            
//         }

       


// }
// printf("smallest number is %d",smallest);
// }

// ============================================================
// Question 2: Explore console cursor positioning / initialize the 4x4 block-game board.
// ============================================================
// #include<stdio.h>
// #include<windows.h>
// void gotoxy(short col,short row){
//     HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
//     COORD position={col,row};
//     SetConsoleCursorPosition(h,position);
//     int box[4][4]={{1,4,15,7},{8,10,2,11},{14,3,6,13},{12,9,5,}};
    
// }


// ============================================================
// Question 3: Input a 3x3 matrix, find its transpose, and check whether it is symmetric.
// ============================================================
// #include<stdio.h>
// int main(){
//     int matrix[3][3];
//     int issymettix=1;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("enter the element:\n");
//             scanf("%d",&matrix[i][j]);
//         }

//     }
//     int transpose[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             transpose[j][i]=matrix[i][j];
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(transpose[i][j]!=matrix[i][j]){
//               issymettix=0;  
//             }

//         }
//     }
//     if(issymettix==0){
//         printf("this is not symmetix amtrix");
//     }
//     else if(issymettix==1){
//         printf("this is symetrix matrix");
//     }
//     return 0;
// }


// ============================================================
// Question 4: Add two 3x3 matrices.
// ============================================================
// #include<stdio.h>
// int main(){
//     int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int b[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int c[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             c[i][j]=a[i][j]+b[i][j];
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf(" %d ",c[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;

// }


// ============================================================
// Question 5: Multiply two 3x3 matrices.
// ============================================================
// #include<stdio.h>
// int main(){
//     int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int b[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int c[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             c[i][j]=0;
//             for(int k=0;k<3;k++){
//                 c[i][j]=c[i][j]+a[i][k]*b[k][j];
//             }

           
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf(" %d ",c[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;

// }

// ============================================================
// Question 6: Shift/rotate the elements of an array by 2 positions.
// ============================================================
// 🎈🎈🎈🎈🎈 shiftinh element by 2 steps in array
// #include <stdio.h>

// int main() {
//     int arr[5] = {10, 20, 30, 40, 50};
//     int k = 2;
//     int n = 5;

//     // Directly access the elements in rotated order
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[(i + k) % n]);
//     }
//     // Output: 30 40 50 10 20

//     return 0;
// }


// ============================================================
// Question 7: Shift array elements by 2 positions using swaps.
// ============================================================
// #include<stdio.h>
// void swap(int *a,int *b);
// int main(){
//     int a[5]={1,2,3,4,5};
//     for(int i=0;i<5;i++){
//         for(int j=i+2;j<5;j++){
//             swap(&a[i],&a[j]);

//         }
//     }
//     for(int i=0;i<5;i++){
//     printf("%d ",a[i]);
//     }
// }
// void swap(int *a,int *b){
//     int c=*a;
//     *a=*b;
//     *b=c;
// }


// ============================================================
// Solution 2 for Question 6: Rotate an array by 2 positions using modulo indexing.
// ============================================================
// #include<stdio.h>
// int main(){
//     int a[5]={1,2,3,4,5};
//     int k=2,n=5;
//     for(int i=0;i<5;i++){
//         printf("%d ",a[(i+k)%n]);
//     }
// }


// ============================================================
// Question 8: Declare a 4x5 matrix.
// ============================================================
// #include<stdio.h>
// int main(){
//     int a[4][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
// }


// ============================================================
// Question 9: Implement the 4x4 block/sliding game by moving the blank space with l/r/u/d.
// ============================================================
// #include<stdio.h>
// void swap(int *a,int*b);
// int main(){
//     int row,column;
//     char response='\0';
//     int a[4][4]={{1,4,15,7},{8,10,2,11},{14,3,6,13},{12,9,5,0}};
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             printf(" %d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             if(a[i][j]==0){
//                 row=i;
//                 column=j;
//             }
//         }
//     }
//     printf("blank position row=%d column=%d\n",row+1,column+1);
//     printf("enter ur response u,d l,rand q for quit:\n");
//     scanf(" %c",&response);
//     while(response!='q'){
//     switch(response){
//         case 'l':
//         if(column>0){
//         swap(&a[row][column],&a[row][column-1]);
//         }
//         else{
//             printf("cant move ");
//         }
//         break;
//         case 'r':
//         if(column<3){
//         swap(&a[row][column],&a[row][column+1]);
//         }
//         else{
//             printf("cant move");
//         }
//         break;
//         case 'u':
//         if(row>0){
//         swap(&a[row][column],&a[row-1][column]);
//         }
//         else{
//             printf("cant move");
//         }
//         break;
//         case 'd':
//         if(row<3){
//         swap(&a[row][column],&a[row+1][column]);
//         }
//         else{
//             printf("cant move");
//         }
//         break;
//         default:
//         printf("invalid inpu");
//         break;
//     }
//         for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             printf(" %d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             if(a[i][j]==0){
//                 row=i;
//                 column=j;
//             }
//         }
//     }
//     printf("blank position row=%d column=%d\n",row+1,column+1);
//     printf("enter ur response u,d l,rand q for quit:\n");
//     scanf(" %c",&response);


// }}
// void swap(int *a,int*b){
//     int c=*a;
//     *a=*b;
//     *b=c;


// }



// ============================================================
// Solution 2 for Question 9: Implement the block game and check the board against the winning configuration.
// ============================================================
// #include<stdio.h>
// void swap(int*a,int *b);
// int main(){
//     int row,column;
//     char response='\0';
//     int b[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,0}};
//     int flag;
//     int a[4][4]={{1,4,15,7},{8,10,2,11},{14,3,6,13},{12,9,5,0}};
//     printf("-------game block-----------\n");
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
            
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             if(a[i][j]==0){
//                 row=i;
//                 column=j;
//             }
//         }
//     }
//     printf("blank row= %d,column =%d\n",row+1,column+1);
//     printf("enter ur response(l,r,u,d,q)\n");
//     scanf(" %c",&response);
//     while(response!='q'){
//         switch (response)
//         {
//         case 'l':
//         if(column>0){
//         swap(&a[row][column],&a[row][column-1]);
//         }else{
//             printf("cant move");
//         }
           
//             break;
//         case 'r':
//         if(column<3){
//         swap(&a[row][column],&a[row][column+1]);
//         }else{
//             printf("cant move");
//         }
           
//             break;
//         case 'u':
//         if(row>0){
//         swap(&a[row][column],&a[row-1][column]);
//         }else{
//             printf("cant move");
//         }
           
//             break;
//        case 'd':
//        if(row<3){
//         swap(&a[row][column],&a[row+1][column]);
//        }else{
//         printf("cant move");
//        } 
//             break;
        
//         default:
//         printf("enter valid input");
//             break;
//         }

//             printf("-------game block-----------\n");
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
            
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             if(a[i][j]==0){
//                 row=i;
//                 column=j;
//             }
//         }
//     }
//     printf("blank row= %d,column =%d\n",row+1,column+1);
//     printf("enter ur response(l,r,u,d,q)\n");
//     scanf(" %c",&response);
//     flag=1;
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             if(b[i][j]!=a[i][j]){
//                 flag=0;
//                 break;
//             }
            
//             }
//         }
//             if(flag==1){
//         printf("u won the game");
//         break;
//     }
//     }
//     return 0;


//     }


// void swap(int *a,int *b){
//     int c=*a;
//     *a=*b;
//     *b=c;
// }



// ============================================================
// Solution 3 for Question 6: Rotate an array by 2 positions using modulo indexing.
// ============================================================
// #include<stdio.h>
// int main(){
//     int a[5]={1,2,3,4,5};
//     int k=2;
//     for(int i=0;i<5;i++){
//         printf(" %d ",a[(i+k)%5]);
//     }
// }


// ============================================================
// Question 10: Shift each row of a 4x5 matrix by 2 positions.
// ============================================================
// #include<stdio.h>
// int main(){
//     int a[4][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
//     for(int i=0;i<4;i++){
//         for(int j=0;j<5;j++){
//             printf(" %d ",a[i][(j+2)%5]);
//         }
//         printf("\n");
//     }

// }


// ============================================================
// Question 11: Calculate the area using values stored in a 2D array and sin().
// ============================================================
// #include<Stdio.h>
// #include<math.h>
// int main(){
//     float a[6][3]={{137.4,80.9,.78},{155.2,92.62,.89},{149.3,97.93,1.35},{160.0,100.25,9.00},{155.6,68.95,1.25},{149.7,120.0,1.75}};
//     float area;
    
//     for(int i=0;i<6;i++){
//         area=0.5*(a[i][0]*a[0][1]*sin(a[i][2]));
//         printf("area is %f\n",area);

//     }
// }


// ============================================================
// Question 12: Attempt to detect duplicate rows/elements in a 9x9 Sudoku grid.
// ============================================================
// #include<stdio.h>
// int main(){
//     int flag=0;
//     int a[9][9]={{5,3,4,6,7,8,9,1,2},{6,7,2,1,9,5,3,4,8},
//     {1,9,8,3,4,2,5,6,7},{8,5,9,7,6,1,4,2,3},
//     {4,2,6,8,5,3,7,9,1},{7,1,3,9,2,4,8,5,6},
//     {9,6,1,5,3,7,2,8,4},{2,8,7,4,1,9,6,3,5},
//     {3,4,5,2,8,6,1,7,9}};
//     for(int i=0;i<9;i++){
//         for(int j=i+1;j<9;j++){
//         if(a[i]==a[j]){
//         printf("duplicate number is %d",a[i]);
//         }
//     }

//     }
// }






// ============================================================
// Question 13: Find duplicate numbers in an integer array.
// ============================================================
// #include<stdio.h>
// int main(){
//     int a[10]={1,2,3,3,4,5,6,7,8,9};
//     for(int i=0;i<10;i++){
//         for(int j=i+1;j<10;j++){
//         if(a[i]==a[j]){
//         printf("duplicate number is %d",a[i]);
//         }
//     }

//     }
// }
