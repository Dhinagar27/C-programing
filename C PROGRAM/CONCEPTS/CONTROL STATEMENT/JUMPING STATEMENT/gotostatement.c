// Goto label
//label name must be end with the ":" like "dhinagar":
//in goto statement it must be like this "goto dhinagar;"" "

#include <stdio.h>

void main()
{

    int num = 0;
dhinagar:
    printf("\n%d", num);
    num++;
    if (num != 10)
    {
        goto dhinagar;
    }
    printf("\nEnd");
}