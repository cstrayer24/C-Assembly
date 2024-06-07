#include <stdio.h>

extern int increment(int thing);

int main()
{

    printf("result of my fun is %d\n", increment(9));
}