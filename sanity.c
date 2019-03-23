#include "types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  int pid;
  int first_status;
  int second_status;
  pid = fork();
  if(pid > 0) {
    first_status = detach(pid);
    second_status = detach(777);
    wait(0);

    printf(2, "Wat is life? First status [%d] second: [%d] \n", first_status, second_status);
  }
}