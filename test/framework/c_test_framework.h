#ifndef C_TEST_FRAMEWORK_H_
#define C_TEST_FRAMEWORK_H_

#include <assert.h>
#include <stdio.h>
#include <string.h>

/* Test Framework :-) */
void setup();
void fff_test_suite();

#define PRINTF(FMT, ...) printf(FMT, __VA_ARGS__)

#define TEST_F(SUITE, NAME) void NAME()
#define RUN_TEST(SUITE, TESTNAME) do { PRINTF(stdout, " Running %s.%s: \n", #SUITE, #TESTNAME); setup(); TESTNAME(); PRINTF(stdout, " SUCCESS\n"); } while (0)
#define ASSERT_EQ(A, B) assert((A) == (B))
#define ASSERT_TRUE(A) assert((A))

#endif /* C_TEST_FRAMEWORK_H_ */
