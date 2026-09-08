// Q1 — Print a string character-by-character using a for loop.
// Solution 1
// #include<stdio.h>
// int main(){
//     char name[]="swastik";
//     for(int i=0;i<7;i++){z`
//         printf("%c",name[i]);
//     }
//     return 0;
// }

// Solution 2
// #include<stdio.h>
// int main(){
//     char name[]="swastik";
//     int i=0;
//     while(name[i]!='\0'){
//         printf("%c",name[i]);
//         i++;
//     }

//     return 0;
// }

// Solution 3
// #include<stdio.h>
// int main(){
//     char name[]="kingsman";
//     char *ptr;
//     ptr=name;
//     while(*ptr!='\0'){
//         printf("%c",*ptr);
//         ptr++;
//     }
//     printf("\n");
//     return 0;
// }

// Q2 — Read and print a full name using fgets().
// Solution 1
// #include<stdio.h>
// int main(){
//     char name[25];
//     printf("enter ur full name:\n");
//     fgets(name,sizeof(name),stdin);
//     printf("hello %s",name);
//     return 0;
// }

// Q3 — Find the length of strings using strlen().
// Solution 1
// #include<stdio.h>
// Solution 2
// #include<string.h>
// int main(){
//     char arr[]="bamboolabs";
//     int len1,len2;
//     len1=strlen(arr);
//     len2=strlen("happy birthday to u");
//     printf("l1 = %d l2 = %d",len1,len2);
//     return 0;

// }

// Q4 — Copy one string to another using strcpy().
// Solution 1
// #include<stdio.h>
// int main(){
//     char name[]="swastik";
//     int i=0,length=0;
//     while(name[i]!='\0'){
//         length++;
//         i++;
//     }
//     printf("%d",length);
//     return 0;
// }

// Solution 2
// #include<stdio.h>
// Q5 — Validate a 10-character ISBN using the ISBN checksum rule.
// Solution 1
// #include<string.h>
// int main(){
//     char source[]="arvidsametha";
//     char target[20];
//     strcpy(target,source);
//     printf("%s ",source);
//     printf(" %s ",target);
//     return 0;


// }

// Q6 — Read an ATM number as a character array and convert its characters to numeric values.
// Solution 1
// #include<stdio.h>
// int copy_name(char *a,char *b);
// int main(){
//     char name[]="swastik";
//     char copy[10];
//     copy_name(name,copy);
//     printf("copy=%s ",copy);

// }
// int copy_name(char *a,char *b){
//     while(*a!='\0'){
//     *b=*a;
//     b++;
//     a++;
//     }
// }

// Q7 — Reverse and print a string.
// Solution 1
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char isbn[15];
//     printf("enter a isbn number:\n");
//     fgets(isbn,sizeof(isbn),stdin);
//     int sum=0;
//     for(int i=0;i<10;i++){
//         sum=sum+isbn[i]*(i+1);
//     }
//     if(sum%11!=0){
//         printf("not valid");
//     }
//     else{
//         printf("valid isbn number");
//     }
//     return 0;


// }

// #include<stdio.h>
// int main(){
//     char atm_num[16];
//     printf("enter a atm number:\n");
//     fgets(atm_num,sizeof(atm_num),stdin);
//     for(int i=0;i<16;i++){
//         atm_num[i]=atm_num[i]-48;
//     }
// }

// #include<stdio.h>
// int main(){
//     char name[7]="swastik";
//     for(int i=6;i>=0;i--){
//         printf("%c",name[i]);


//     }
//     return 0;
// }

