#include "unity.h"
#include "string_sub.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void string_pass(void)
{
  TEST_ASSERT_EQUAL(0, sub_str("my_name_is_edcast_future_skills"));
  TEST_ASSERT_EQUAL(0, sub_str("hey_there_my_name_is_ayushi"));
}
/*
void string_not_pass(void)
{
  TEST_ASSERT_EQUAL(1, sub_str(" "));
  TEST_ASSERT_EQUAL(1, sub_str(""));
}
*/
int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(string_pass);
  //RUN_TEST(string_not_pass);
  //RUN_TEST(test_negative);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
