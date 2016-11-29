#ifndef PATTERNS_INCLUDE_CONST_POOL_H
#define PATTERNS_INCLUDE_CONST_POOL_H

#include <set>

namespace patterns {

template <typename T, typename Container = std::set<T>>
class ConstPool {
  public:
    typedef T value_type;
    typedef Container container_type;

    const T& get(const T& t) { 
      const auto res = pool_.insert(t);
      return *(res.first);
    }

  private:
    Container pool_;
};

} // namespace patterns

#endif
