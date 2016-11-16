#include <vector>
#include <functional>
#include <numeric>

#include "largest_series_product.h"

namespace{
  template <class T>
  T digit_product(T const i, char const digit_c)
  {
    T digit = static_cast<T> ( digit_c - '0');
    return std::multiplies<T>( i, digit );
  }
}

int largest_series_product::largest_product(std::string const &s, unsigned int n)
{
  auto serie_left_bound = s.begin();
  auto serie_right_bound = s.begin()+n;
  int result = 0;

  for (; serie_right_bound <= s.end(); ++serie_left_bound, ++serie_right_bound)
  {
    int product = std::accumulate( serie_left_bound, serie_right_bound, 1,
                                   ::digit_product());
    if ( product > result )
      result = product;
  }
  return result;
}
