#ifndef PATTERNS_INCLUDE_SINGLETON_H
#define PATTERNS_INCLUDE_SINGLETON_H

namespace patterns {

template <typename T>
struct Singleton {
  typedef T value_type;

  Singleton() = delete;
  Singleton(const Singleton& rhs) = delete;
  Singleton(const Singleton&& rhs) = delete;
  Singleton& operator=(const Singleton& rhs) = delete;

  template <typename ...Args>
  static T& get(Args... args) {
    static T t{args...};
    return t;
  }
};

} // namespace patterns

#endif
