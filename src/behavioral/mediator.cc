// Copyright 2018 Andrew Klotz

#include <vector>

class Colleague;

class Mediator {
 public:
  virtual void add(Colleague *c) = 0;
  virtual void gossip(Colleague *sender, int msg) = 0;
};

class Colleague {
 public:
  explicit Colleague(Mediator *m) : mediator(m) {}

  int getValue() {
    return value;
  }

  virtual void gossip(int) = 0;
  virtual void receive(int) = 0;

 protected:
  Mediator* mediator;
  int value;
};

class ConcreteMediator : public Mediator {
 public:
  void add(Colleague *c) {
    colleagues.push_back(c);
  }

  void gossip(Colleague *sender, int msg) {
    for (int i = 0; i < colleagues.size(); i++) {
      colleagues.at(i)->receive(msg);
    }
  }

 private:
  std::vector<Colleague*> colleagues;
};

class ConcreteColleague : public Colleague {
 public:
  explicit ConcreteColleague(Mediator *m) : Colleague(m) {}

  void gossip(int msg) override {
    mediator->gossip(this, msg);
  }

  void receive(int msg) override {
    value = msg;
  }
};
