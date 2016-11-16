#include <vector>

#include "largest_series_product.h"

namespace{
  int compute_interval_prodcut( std::string const & substring)
  {
    int result = 1;
    for( auto c : substring )
    {
      result *= c-'0';
    }
    return result;
  }
}

int largest_series_product::largest_product(std::string const &s, unsigned int n)
{
  auto serie_left_bound = s.begin();
  auto serie_right_bound = s.begin()+n;
  int result = 0;

  for (; serie_right_bound <= s.end(); ++serie_left_bound, ++serie_right_bound)
  {
    std::string const current_substring( serie_left_bound, serie_right_bound );
    int const current_value = ::compute_interval_prodcut( current_substring );

    if ( current_value > result )
      result = current_value;
  }
  return result;
}
