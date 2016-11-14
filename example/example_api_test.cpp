#include <gtest/gtest.h>
#include "example_api.h"
namespace ex_api = example_api;

TEST (ExampleApiTest, DummyGetZero)
{
  ASSERT_EQ (0, ex_api::get_zero());
}

int main(int ac, char* av[])
{
  testing::InitGoogleTest(&ac, av);
  return RUN_ALL_TESTS();
}
