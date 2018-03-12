// Copyright 2018 Andrew Klotz

class Strategy {
 public:
  virtual int runAlgorithm() = 0;
};

class ConcreteStrategyA : public Strategy {
 public:
  int runAlgorithm() override {
    return 10;
  }
};

class ConcreteStrategyB : public Strategy {
 public:
  int runAlgorithm() override {
    return 20;
  }
};

class Context {
 public:
  explicit Context(Strategy *s) : strategy(s) {}

  int calculate() {
    return strategy->runAlgorithm();
  }

 private:
  Strategy *strategy;
};
