#include <gtest/gtest.h>
#include "largest_series_product.h"
namespace lsp = largest_series_product;

TEST (LargestSeriesProductTest, TestLargestProductof2)
{
  ASSERT_EQ (72, lsp::largest_product( "0123456789", 2));
}

TEST (LargestSeriesProductTest, TestLargestProductof2UnsortedInput)
{
  ASSERT_EQ (48, lsp::largest_product("576802143", 2));
}

int main(int ac, char* av[])
{
  testing::InitGoogleTest(&ac, av);
  return RUN_ALL_TESTS();
}
