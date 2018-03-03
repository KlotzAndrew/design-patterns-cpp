#include <cassert>

#include "../../src/structural/facade.cpp"

int main()
{
  Facade* facade = new Facade;
  facade->start();

  Database* db = new Database;
  assert(db->isConnected() == true);

  Cache* cache = new Cache;
  assert(cache->isConnected() == true);
}
