// Copyright 2018 Andrew Klotz

class TargetInterface {
 public:
  virtual int newMethod() {}
};

class Adaptee {
 public:
  int oldMethod() { return 2; }
};

class Adapter : private TargetInterface, private Adaptee {
 public:
  int newMethod() {
    return oldMethod() * 2;
  }
};
