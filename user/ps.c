#include "kernel/types.h"
#include "kernel/stat.h"
#include "kernel/pstat.h"
#include "user/user.h"




void
ps()
{
  struct pstat pinfo = {0};
  getpinfo(&pinfo);
  settickets(1);

}

int
main(int argc, char *argv[])
{

  ps();
  exit(0);
}
