#include <stdio.h>

int main() {
     int x = 100;
     int * ptr = &x;
    //  x = 200;
    // x -> *ptr same 
    *ptr = 200;
    //  printf("x er address -%p\n",&x);
    //  printf("ptr er value -%p\n",ptr);
    //  printf("ptr er value -%p\n",&ptr);
    //  printf("ptr er value -%d\n",sizeof(ptr));
    printf("x er value - %d\n",x);
    printf("x er value - %d\n",*ptr);
    
    return 0;
}
