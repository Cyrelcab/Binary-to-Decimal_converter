#include <stdio.h>
#define DECIMAL_BASE 10 //define the variable DECIMAL_BASE with a value of 10 because decimal is base 10
#define BINARY_BASE 2 //define the variable BINARY_BASE with a variable of 2 because binary is  base 2

int bin_num(); //function prototype
int main(){
  int binary_number, decimal_number = 0, remainder, place = 1; //declaring the variables and the values

  binary_number = bin_num(); //storing the bin_num function as a value of binary_number variable

  if(binary_number % DECIMAL_BASE == 1 || binary_number % DECIMAL_BASE == 0){ /*checking the input of user if it is really a
      binary or not; if the input is a binary then the program will perform the while loop*/
    while(binary_number > 0)/*this is the condition that the binary_number is greater than 0
    then it will perform the given statement, if it is false then the loop will stop*/{
      remainder = binary_number % DECIMAL_BASE; /*we will get the remainder of the binary_number then
  it will store it in the remainder variable*/
      decimal_number += remainder * place; /*getting the decimal_number by adding the product of remainder
      and place,then store it in the decimal_number variable*/
      binary_number /= DECIMAL_BASE; /*getting the binary_number by dividing it in DECIMAL_BASE which have a value of 10*/
      place *= BINARY_BASE; /*getting the product of place and BINARY_BASE with a value of 2 then store it in place variable,
      place is the corresponding value of a digit*/
    }
    printf("\nThe decimal result is %d\n", decimal_number); /*when the loop will stop then we will print the decimal_number*/
  }else{
    printf("\n%d is not a Binary number!\n", binary_number); /*this is the else statement, if the input of user is not a binary*/
  }
  return 0; //if there is no error then the program will return 0
}
int bin_num()//this is my user-defined function
{
  int num;

  printf("Input Binary no.: ");
  scanf("%d", &num);

  return num;
}
