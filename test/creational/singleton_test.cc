// Copyright 2018 Andrew Klotz

#include <cassert>

#include "../../src/creational/singleton.cc"

int main() {
  const Singleton& singleton1 = Singleton::Instance();
  const Singleton& singleton2 = Singleton::Instance();

  assert(&singleton1 == &singleton2);
}
