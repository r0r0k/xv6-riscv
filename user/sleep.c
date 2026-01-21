#include "kernel/types.h" // Order matters because user.h should refer to types.h
#include "user/user.h"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        fprintf(2, "Usage : sleep [tick]\n");
        exit(-1);
    }

    int ticks = atoi(argv[1]);
    pause(ticks);
}