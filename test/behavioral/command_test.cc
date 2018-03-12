// Copyright 2018 Andrew Klotz

#include <cassert>

#include "../../src/behavioral/command.cc"

int main() {
  Account* account = new Account;
  AddCommand* add_command = new AddCommand(account);
  add_command->execute();
  assert(account->getBalance() == 101);

  Invoker* invoker = new Invoker;
  invoker->addCommand(new AddCommand(account));
  invoker->addCommand(new SubtractCommand(account));
  invoker->addCommand(new SubtractCommand(account));
  invoker->execute();

  assert(account->getBalance() == 100);
}
