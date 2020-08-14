#include "unity.h"
#include "func_pointer.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_sum(void)
{
  TEST_ASSERT_EQUAL(7, add(3,4));
  TEST_ASSERT_EQUAL(16, add(8,8));
}
void test_dif(void)
{
  TEST_ASSERT_EQUAL(11, sub(22,11));
  TEST_ASSERT_EQUAL(7, sub(17,10));

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
  RUN_TEST(test_sum);
  RUN_TEST(test_dif);
  //RUN_TEST(test_negative);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
