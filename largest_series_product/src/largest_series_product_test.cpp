#include <gtest/gtest.h>
#include "largest_series_product.h"
namespace lsp = largest_series_product;

TEST (LargestSeriesProductTest, DummyGetZero)
{
  ASSERT_EQ (0, lsp::get_zero());
}

int main(int ac, char* av[])
{
  testing::InitGoogleTest(&ac, av);
  return RUN_ALL_TESTS();
}
