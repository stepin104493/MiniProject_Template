#include "unity.h"
#include "prime.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_prime(void)
{
TEST_ASSERT_EQUAL(1, primenum(3));
TEST_ASSERT_EQUAL(1, primenum(5));
TEST_ASSERT_EQUAL(1, primenum(17));

}
void test_not_prime(void)
{
TEST_ASSERT_EQUAL(0, primenum(18));
TEST_ASSERT_EQUAL(0, primenum(4));
TEST_ASSERT_EQUAL(0, primenum(6));

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
  RUN_TEST(test_prime);
  RUN_TEST(test_not_prime);
  //RUN_TEST(test_negative);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
