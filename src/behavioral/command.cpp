#include <vector>

class Account {
  public:
    Account() {
      balance = 100;
    }
    int getBalance() {
      return balance;
    }
    void add(int i) {
      balance = balance + i;
    }
    void subtract(int i) {
      balance = balance - i;
    }

  private:
    int balance;
};

class Command {
  public:
    Command(Account* a) {
      account = a;
    }
    virtual void execute() = 0;

  protected:
    Account* account;
};

class Invoker {
  public:
    void addCommand(Command* command) {
      commands.push_back(command);
    }

    void execute() {
      for (auto &command : commands) {
        command->execute();
      }
    }

  private:
    std::vector<Command*> commands;
};

class AddCommand : public Command {
  public:
    AddCommand(Account *a): Command(a) {}

    void execute() override {
      account->add(1);
    }
};

class SubtractCommand : public Command {
  public:
    SubtractCommand(Account *a): Command(a) {}

    void execute() override {
      account->subtract(1);
    }
};
