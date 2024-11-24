// 24/11/24 PHX - V1.0 - BM
// Getting hold of preprocessor, macros and other shennenigans

#include <stdio.h>

#define MIN(A,B) A<B?A:B
#define MY_VALUE_A 3
#define MY_VALUE_B 5
#define MY_OPERATION(N) (N)*(N)

int main(){
    
    printf("My Value 1 is %d \n", MY_VALUE_A);
    printf("My Value 2 is %d \n", MY_VALUE_B);
    printf("Sum of my Values is: %d \n", MY_VALUE_A + MY_VALUE_B);
    printf("The smaller of my values is: %d\n", MIN(MY_VALUE_A,MY_VALUE_B));
    printf("And square of sum of my values is: %d\n",MY_OPERATION(MY_VALUE_A+MY_VALUE_B));
    
    printf("This is the line number %d of this code\n",__LINE__);
    printf("This is part of the %s function\n",__FUNCTION__);
    printf("And this code has been compiled on %s at %s\n",__DATE__,__TIME__);
}
