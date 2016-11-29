#include "gtest/gtest.h"
#include "include/const_pool.h"

using namespace patterns;
using namespace std;

// Basic functionality test
TEST(const_pool, basic) {
  ConstPool<int> cp;

  const auto& x = cp.get(10);
  const auto& y = cp.get(10);
  const auto& z = cp.get(20);

  EXPECT_EQ(&x, &y);
  EXPECT_NE(&x, &z);
}
