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

TEST (LargestSeriesProductTest, TestLargestProductof3)
{
  ASSERT_EQ (504, lsp::largest_product( "0123456789", 3));
}

TEST (LargestSeriesProductTest, TestLargestProductof3UnsortedInput)
{
  ASSERT_EQ (270, lsp::largest_product("1027839564", 3));
}

TEST (LargestSeriesProductTest, TestLargestProductof5)
{
  ASSERT_EQ (15120, lsp::largest_product( "0123456789", 5));
}

TEST (LargestSeriesProductTest, TestBigNumber)
{
  auto const series = "73167176531330624919225119674426574742355349194934";
  ASSERT_EQ (23520, lsp::largest_product( series, 6));
}

int main(int ac, char* av[])
{
  testing::InitGoogleTest(&ac, av);
  return RUN_ALL_TESTS();
}
