#ifndef PATTERNS_INCLUDE_SINGLETON_H
#define PATTERNS_INCLUDE_SINGLETON_H

namespace patterns {

template <typename T>
struct Singleton {
  typedef T& reference;

  Singleton() = delete;
  Singleton(const Singleton& rhs) = delete;
  Singleton(const Singleton&& rhs) = delete;
  Singleton& operator=(const Singleton& rhs) = delete;
  Singleton&& operator==(const Singleton&& rhs) = delete;

  static T& get() {
    static T;
    return t;
  }
};

} // namespace patterns

#endif
