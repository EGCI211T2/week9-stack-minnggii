#include<iostream>
using namespace std;

#include "stack.h"

int main(int argc, char **argv){
  Stack s;
   for(i=1;i<argc;i++){
     for(j=0;j<strlen(argv[i]);j++){
        Stack s; //Change node to char-->****
        if(argv[i][j]=='[' || argv[i][j]=='{' )
                s.push(argv[i][j]);
        else{
          if(argv[i][j]==']' || argv[i][j]=='}' ) {
              char x=s.pop();
              /*How to check????*/
          }

        }
      }
    }

//Exercise 2
 printf("Checking the parentheses in argv arguments\n");

     for(j=0;j<strlen(argv[i]);j++){
       // Use stack to help with the parentheses

  }


   return 0;
}
