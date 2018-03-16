// Copyright 2018 Andrew Klotz

#include <cassert>

#include "../../src/behavioral/momento.cc"

int main() {
  Originator *originator = new Originator;
  CareTaker *caretaker = new CareTaker(originator);

  originator->setState(10);
  caretaker->save();

  int value = originator->getState();
  assert(value == 10);

  originator->setState(20);
  caretaker->save();

  value = originator->getState();
  assert(value == 20);

  caretaker->undo();

  value = originator->getState();
  assert(value == 10);
}
