#include "gtest/gtest.h"
#include "include/singleton.h"

using namespace patterns;
using namespace std;

struct C {
  int x;
};

// Basic functionality test
TEST(singleton, basic) {
  auto& x = Singleton<int>::get();
  auto& y = Singleton<int>::get();
  x = 10;
  y = 20;
  EXPECT_EQ(x, 20);

  auto& c = Singleton<C>::get(10);
  c = Singleton<C>::get(20);
  EXPECT_EQ(c.x, 10);
}

