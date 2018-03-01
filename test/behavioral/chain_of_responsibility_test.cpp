#include <cassert>

#include "../../src/behavioral/chain_of_responsibility.cpp"

int main()
{
  Handler1* root = new Handler1;
  Handler2* handler2 = new Handler2;
  Handler3* handler3 = new Handler3;

  root->add(handler2);
  root->add(handler3);

  assert(root->handle(1) == 10);
  assert(root->handle(2) == 20);
  assert(root->handle(3) == 30);
  assert(root->handle(4) == 0);
}
