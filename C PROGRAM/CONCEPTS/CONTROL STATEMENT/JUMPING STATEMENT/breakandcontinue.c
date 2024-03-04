// break and continue
/*
break statment is used to break the statement  and  end the process
continue statment is used to skip the statement and continue the process

*/
#include <stdio.h>
void main()
{
    for (int i = 0; i < 100; i++)
    {
        if (i == 10)
            continue; // this will skip the number 10 and continue
        if (i == 50)
            break; // this end the itration at the 50 and exit from the loop
        printf("%d\n", i);
    }
}