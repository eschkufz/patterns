#ifndef PATTERNS_INCLUDE_SINGLETON_H
#define PATTERNS_INCLUDE_SINGLETON_H

namespace patterns {

template <typename T>
struct Singleton {
  typedef T value_type;

  Singleton() = delete;

  template <typename ...Args>
  static T& get(Args... args) {
    static T t{args...};
    return t;
  }
};

} // namespace patterns

#endif
