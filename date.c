#include "types.h"
#include "user.h" 
#include "date.h"

int
main(int argc, char **argv)
{
  struct rtcdate r;
  date(&r);
  printf(1, "%d - %d - %d \n %d : %d: %d\n", r.day, r.month, r.year, r.hour, r.minute, r.second);
  exit();
}