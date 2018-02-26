#include <cassert>

#include "../../src/creational/singleton.cpp"

int main()
{
  const Singleton& singleton1 = Singleton::Instance();
  const Singleton& singleton2 = Singleton::Instance();

  assert(&singleton1 == &singleton2);
}
