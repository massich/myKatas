#include <gtest/gtest.h>
#include "largest_series_product.h"

TEST (LargestSeriesProductTest, DummyGetZero)
{
  ASSERT_EQ (0, largest_series_product::get_zero());
}

int main(int ac, char* av[])
{
  testing::InitGoogleTest(&ac, av);
  return RUN_ALL_TESTS();
}
