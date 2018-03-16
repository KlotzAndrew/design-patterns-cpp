// Copyright 2018 Andrew Klotz

#include <cassert>

#include "../../src/structural/proxy.cc"

int main() {
  Client* client = new Client(10);
  int value = client->call();
  assert(value == 10);

  Proxy* proxy = new Proxy(10);
  value = proxy->call();
  assert(value == 10);

  proxy = new Proxy(1);
  value = proxy->call();
  assert(value == 0);
}
