// Copyright 2018 Andrew Klotz

#include <cassert>

#include "../../src/structural/facade.cc"

int main() {
  Facade* facade = new Facade;
  facade->start();

  Database* db = new Database;
  assert(db->isConnected() == true);

  Cache* cache = new Cache;
  assert(cache->isConnected() == true);
}
