
// ============================================================
// Question 1: Store and input book name, pages, and price using a structure.
// ============================================================
// #include<stdio.h>
// int main(){
//     struct book
//     {
//         char name;
//         float price;
//         int pages;

//     }b[3];
//     for(int i=0;i<3;i++){
//         printf("enter the name of teh book\n");
//         scanf("%s",&b[i]);
//         printf("enter the pages in book\n");
//         scanf("%d",&b[i].price);
//         printf("enter the price opf the book\n");
//         scanf("%f",&b[i].price);

//     }
//     return 0;

    
// }


// ============================================================
// Solution 2 for Question 1: Another attempt to input book details using a structure.
// ============================================================
//  #include<stdio.h>
// int main(){
//     struct book{
//         char name;
//         int pages;
//         float price;

//     }b[3];
//     for(int i=0;i<3;i++){
//         printf("enter the name of the  book\n");
//         scanf(" %d",&b[i].name);
//         printf("enter the no of pages of book\n");
//         scanf(" %d",&b[i].pages);
//         printf("ente the price of the book\n");
//         scanf(" %f",&b[i].price);
//     }
//     return 0;
// }


// ============================================================
// Question 2: Demonstrate assigning individual structure members and copying one structure to another.
// ============================================================
// #include<stdio.h>
// int main(){
//     struct employee{
//         char name[10];
//         int age;
//         float salary;
//     };
//     struct employee e1= {"sanajay",30,59600.8};
//     struct employee e2,e3;
//     e2.age=e1.age;
//     e3=e1;
//     printf("enter the age of employee e2 %d\n",e2.age);
//     printf("name age and salary of e3 is %s,%d,%f",e3.name,e3.age,e3.salary);
    
// }


// ============================================================
// Question 3: Input details of three employees using an array of structures.
// ============================================================
// #include<stdio.h>
// int main(){
//     struct employee{
//         char name[15];
//         int age;
//         float salary;

//     }b[3];
//     for(int i=0;i<3;i++){
//         printf("ente the name,age and salary of employee:\n");
//         scanf("%s %d %f",&b[i].name,&b[i].age,&b[i].salary);
//     }
//     return 0;
// }


// ============================================================
// Question 4: Copy employee structures and display the copied employee details.
// ============================================================
// #include<stdio.h>
// int main(){
//     struct employee{
//         char name[10];
//         int age;
//         float salary;
//     };
//     struct employee b1={"radhe",23,156000};
//     struct employee b2={"shyam",24,20000};
//     struct employee e1,e2;
//     e1=b1;
//     e2=b2;
//     printf("name =%s age =%d salalry=%f",e1.name,e1.age,e1.salary);
//     return 0;

    

// }


// ============================================================
// Question 5: Store student records and search students by year and roll number.
// ============================================================
// #include<stdio.h>
// int main(){
//     struct  student{
//         int rollno;
//         char name[10];
//         char department[10];
//         char course[15];
//         int year;
//     }student[450]={
//         {150,"swastik","IT","btech",2025},
//         {151,"aditya","IT","btech",2025},
//         {152,"ram","IT","btech",2025}
//     };
//     int y;
//     printf("enter year after u want to find: ");
//     scanf("%d",&y);
//     for(int i=0;i<450;i++){
//         if(student[i].year==y){
//             printf("name=%s\n",student[i].name);
//         }
//     }
//     int roll;
//     printf("enter the roll no of the student:\n");
//     scanf("%d",&roll);
//     for(int i=0;i<450;i++){
//         if(roll==student[i].rollno){
//             printf("details of student are\n");
//             printf("name=%s\n",student[i].name);
//             printf("department=%s\n",student[i].department);
//             printf("course=%s\n",student[i].course);
//             printf("year=%d\n",student[i].year);

//         }
//     }
    
   
    
// }


// ============================================================
// Question 6: Store bank account records and print names of accounts with balance <= 100.
// ============================================================
// #include<stdio.h>
// int main(){
//     struct bank_data{
//         int account_number;
//         char name[15];
//         int balance;
//     }bank_data[250]={
//         {150,"swastik",200000},
//         {151,"aditya",200000},
//         {152,"ram",4000},
//         {153,"shaym",50},
//         {154,"madhu",67}
//     };
//     for(int i=0;i<250;i++){
//         if(bank_data[i].balance<=100){
//             printf("name : %s",bank_data[i].name);
//         }
//     }

// }

