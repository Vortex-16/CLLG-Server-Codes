#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void myfork(int index)
{
    int cpid = fork();

    if(cpid < 0)
    {
        perror("Failed to fork");
        exit(1);
    }
    else if(cpid == 0)
    {
        printf("I am born, id: %d\n", index);
    }
    else
    {
        if(index <= 0)
        {
            return;
        }

        myfork(index - 1);
    }
}

int main()
{
    myfork(8);
    return 0;
}
