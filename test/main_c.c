#include "c_test_framework.h"

int main()
{
  setbuf(stdout, NULL);
  fprintf(stdout, "-------------\n");
  fprintf(stdout, "Running Tests\n");
  fprintf(stdout, "-------------\n\n");
  fflush(0);

  fff_test_suite();

  printf("\n-------------\n");
  printf("Complete\n");
  printf("-------------\n\n");
  return 0;
}
