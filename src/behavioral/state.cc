// Copyright 2018 Andrew Klotz

class State {
 public:
  virtual int handle() = 0;
};

class ConcreteStateA : public State {
 public:
  int handle() override {
    return 10;
  }
};

class ConcreteStateB : public State {
 public:
  int handle() override {
    return 100;
  }
};


class Context {
 public:
  Context() {
    state = 0;
  }

  void setState(State *s) {
    if (state) {
      delete state;
    }
    state = s;
  }

  int request() {
    return state->handle();
  }

 private:
  State *state;
};
