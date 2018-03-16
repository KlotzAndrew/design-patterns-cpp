// Copyright 2018 Andrew Klotz

#include <cassert>

#include "../../src/behavioral/chain_of_responsibility.cc"

int main() {
  Handler1* root = new Handler1;
  Handler2* handler2 = new Handler2;
  Handler3* handler3 = new Handler3;

  root->add(handler2);
  root->add(handler3);

  int value = root->handle(1);
  assert(value == 10);

  value = root->handle(2);
  assert(value == 20);

  value = root->handle(3);
  assert(value == 30);

  value = root->handle(4);
  assert(value == 0);
}
