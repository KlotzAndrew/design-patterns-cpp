// Copyright 2018 Andrew Klotz

#include <cassert>

#include "../../src/behavioral/iterator.cc"

int main() {
  ConcreteAggregate* list = new ConcreteAggregate(5);
  Iterator* iterator = list->createIterator();

  for (int i = 0; !iterator->isDone(); iterator->next()) {
    assert(iterator->currentItem() == i);
    i++;
  }
}
