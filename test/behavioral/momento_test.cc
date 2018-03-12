// Copyright 2018 Andrew Klotz

#include <cassert>

#include "../../src/behavioral/momento.cc"

int main() {
  Originator *originator = new Originator;
  CareTaker *caretaker = new CareTaker(originator);

  originator->setState(10);
  caretaker->save();

  assert(originator->getState() == 10);

  originator->setState(20);
  caretaker->save();

  assert(originator->getState() == 20);

  caretaker->undo();

  assert(originator->getState() == 10);
}
