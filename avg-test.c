
#include "utst.h"

int avg( int x, int y )
{
  int sum = x + y;
  return sum / 2;
}

int main()
{
  UTST_ASSERT_INT_EQ( avg(10,20), 15 );
  return 0;
}

