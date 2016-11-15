#include <gtest/gtest.h>
#include "largest_series_product.h"
namespace lsp = largest_series_product;

/*
 * Normal (or Expected) Behavior Tests
 */

TEST (LargestSeriesProductNormalTest, TestLargestProductof2)
{
  ASSERT_EQ (72, lsp::largest_product( "0123456789", 2));
}

TEST (LargestSeriesProductNormalTest, TestLargestProductof2UnsortedInput)
{
  ASSERT_EQ (48, lsp::largest_product("576802143", 2));
}

TEST (LargestSeriesProductNormalTest, TestLargestProductof3)
{
  ASSERT_EQ (504, lsp::largest_product( "0123456789", 3));
}

TEST (LargestSeriesProductNormalTest, TestLargestProductof3UnsortedInput)
{
  ASSERT_EQ (270, lsp::largest_product("1027839564", 3));
}

TEST (LargestSeriesProductNormalTest, TestLargestProductof5)
{
  ASSERT_EQ (15120, lsp::largest_product( "0123456789", 5));
}

TEST (LargestSeriesProductNormalTest, TestBigNumber)
{
  auto const series = "73167176531330624919225119674426574742355349194934";
  ASSERT_EQ (23520, lsp::largest_product( series, 6));
}

TEST (LargestSeriesProductNormalTest, TestStringOfZeros)
{
  auto const series = "00000000";
  ASSERT_EQ (0, lsp::largest_product( series, 2));
}

/*
 *  Un-sanitized (or wired) Input Tests
 */

TEST (LargestSeriesProductInputTest, TestSeriesContainingNonDigitChars)
{
  ASSERT_EQ (72, lsp::largest_product( "012a345b789", 2));
}

TEST (LargestSeriesProductInputTest, TestLargestProductof1)
{
  ASSERT_EQ (9, lsp::largest_product( "0123456789", 1));
}

TEST (LargestSeriesProductInputTest, TestLargestProductof0)
{
  ASSERT_EQ (0, lsp::largest_product( "0123456789", 0));
}



int main(int ac, char* av[])
{
  testing::InitGoogleTest(&ac, av);
  return RUN_ALL_TESTS();
}
