// Copyright 2018 Andrew Klotz

class Api {
 public:
  explicit Api(int i) : value(i) {}

  virtual int call() = 0;

 protected:
  int value;
};

class Client : public Api {
 public:
  explicit Client(int i): Api(i) {}

  int call() override { return value; }
};

class Proxy : public Api {
 public:
  explicit Proxy(int i): Api(i) {}

  int call() override {
    if (value >= 10) { return value; }

    return 0;
  }
};
