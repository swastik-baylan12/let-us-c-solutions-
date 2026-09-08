// Q1 — Pass a value to a function and display it.
// Solution 1
#include<stdio.h>
void display(int x);
int main(){

    int y=12;
    display(y);
}
void display(int x){
    printf("%d",x);
}
