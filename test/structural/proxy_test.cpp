#include <cassert>

#include "../../src/structural/proxy.cpp"

int main()
{
  Client* client = new Client(10);
  assert(client->call() == 10);

  Proxy* proxy = new Proxy(10);
  assert(proxy->call() == 10);

  proxy = new Proxy(1);
  assert(proxy->call() == 0);
}
