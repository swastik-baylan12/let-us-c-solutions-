
// ============================================================
// Question 1: Search for a name in a list and print a greeting if the name is found.
// ============================================================
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char name[6][8]={
//         "swastik","akshay","aditya","layra","akshita","father"
//     };
//     int flag,a;
//     char urname[10];
//     printf("enter ur name:\n");
//     scanf("%s",&urname);
//     flag=0;
//     for(int i=0;i<6;i++){
//         a=strcmp(&name[i][0],urname);
//         if(a==0){
//             printf("hello sir %s",name[i]);
//             flag=1;
//             break;
//         }
        

//     }

//     if(flag==0){
//         printf("sorry sir u are not invited");
//     }
//     return 0;


// }


// ============================================================
// Question 2: Sort a list of names alphabetically.
// ============================================================
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char name[10][8]={"swastik",
//     "aditya",
//     "abhi",
//     "abimanu",
//     "daksh",
//     "vishal",
//     "harsh",
//     "vardan",
//     "ramesh",
//     "vishesh"

// };
// char temp[10];
// for(int i=0;i<9;i++){
//     for(int j=i+1;j<10;j++){
//         if(strcmp(name[i],name[j])>0){
//             strcpy(temp,name[i]);
//             strcpy(name[i],name[j]),
//             strcpy(name[j],temp);
//         }
//     }
    
// }
// for(int i=0;i<10;i++){
//     printf("%s\n",name[i]);
// }
// return 0;
// }


// ============================================================
// Question 3: Remove/skip vowels while printing the characters of a word.
// ============================================================
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char word[10]="elephant";
//     for(int i=0;i<10;i++){
//         if(word[i]!='a'&& word[i]!='e'&& word[i]!='i'&&word[i]!='o'
//         &&word[i]!='u'){
//             printf("%c",word[i]);
//         }
//     }
// }



// ============================================================
// Question 4: Print a sentence after skipping vowels.
// ============================================================
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char sentence[50]="hello my name is swastik";
//     for(int i=0;i<strlen(sentence);i++){
//         if(sentence[i]!='a'&& sentence[i]!='e'&& sentence[i]!='i'&&sentence[i]!='o'
//             &&sentence[i]!='u'){
//             printf("%c",sentence[i]);
//             }
//     }
//     return 0;
// }
