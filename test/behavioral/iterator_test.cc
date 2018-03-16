// Copyright 2018 Andrew Klotz

#include <cassert>

#include "../../src/behavioral/iterator.cc"

int main() {
  ConcreteAggregate* list = new ConcreteAggregate(5);
  Iterator* iterator = list->createIterator();
  int value;

  for (int i = 0; !iterator->isDone(); iterator->next()) {
    value = iterator->currentItem();
    assert(value == i);
    i++;
  }

  iterator->first();

  value = iterator->currentItem();
  assert(value == 0);
}
