#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
    if(argc != 2) {
        printf(2, "invalid exec \n");
        exit(1);
    }
    int newPol = atoi(argv[1]);
    if(newPol < 1 || newPol > 3) {
        printf(2, "invalid policy number\n");
        exit(1);
    }
    policy(newPol);
    exit(0);
}
