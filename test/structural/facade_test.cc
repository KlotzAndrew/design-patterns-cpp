// Copyright 2018 Andrew Klotz

#include <cassert>

#include "../../src/structural/facade.cc"

int main() {
  Facade* facade = new Facade;
  facade->start();

  Database* db = new Database;
  bool db_connected = db->isConnected();
  assert(db_connected == true);

  Cache* cache = new Cache;
  bool cache_connected = cache->isConnected();
  assert(cache_connected == true);

  delete db;
  delete cache;
}
