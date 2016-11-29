# patterns
Templated design patterns for c++ projects.

## singleton.h

Create references to a global instance of a type, constructed exactly once:
```
auto& c = Singleton<C>::get()      // Returns a global instance of C()
auto& c = Singleton<C>::get(x,y,z) // Returns a global instance of C(x,y,z)
```

## const_pool.h

Return a canonical instance of an object:
```
ConstPool<int> p;
auto& x = p.get(10);
auto& y = p.get(10);
assert(&x == &y);
```
