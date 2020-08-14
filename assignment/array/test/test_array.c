#include "unity.h"
#include "array_sort.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_n(void)
{
  TEST_ASSERT_EQUAL(0, sort(3));
  TEST_ASSERT_EQUAL(0, sort(2));
}
void test_not_n(void)
{
  TEST_ASSERT_EQUAL(-1, sort(1));
   TEST_ASSERT_EQUAL(-1, sort(0));
}/*
void test_negative(void)
{
  TEST_ASSERT_EQUAL(-1, primenum(-5));
  TEST_ASSERT_EQUAL(-1, primenum(-10));
  TEST_ASSERT_EQUAL(-1, primenum(-0));
}
*/
int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_n);
  RUN_TEST(test_not_n);
  //RUN_TEST(test_negative);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
