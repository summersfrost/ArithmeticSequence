#include <stdio.h>
#include <stdlib.h>
//Function to solve the arithmetic sequence built in not a calculator
int arithmetic (int start_num,int common_diff,int nth_term){

    for(int i=0; i<nth_term;i++){ //loop will end if i is greater than nth term

        printf("%d  ",start_num); //prints the starting number
    start_num+=common_diff; //adds the common difference and starts the loop if the condition is meet
    }
    printf("\n"); //once the loop is done, line break is added;
    }
int main()
{
    //calling the function and assigning the values

    int start_num, common_diff,nth_term, sum; //declaring variables
    printf("a) ");
    arithmetic(start_num=1,common_diff=1,nth_term=7);
    printf("b) ");
    arithmetic(start_num=3,common_diff=5,nth_term=5);
    printf("c) ");
   arithmetic(start_num=20,common_diff=-6,nth_term=6);
    printf("d) ");
    arithmetic(start_num=19,common_diff=8,nth_term=5);
}
