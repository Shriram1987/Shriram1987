#include <stdio.h>

int main(int argc, char const *argv[])
{
    int principal=100000 , rate=7 , Time=2 ;
    int simpleInterest=(principal * rate * Time )/100 ;
    printf("The value of simple interest is %d" , simpleInterest );
    return 0;
}
