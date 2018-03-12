// Copyright 2018 Andrew Klotz

class BaseHandler {
 protected:
  BaseHandler *sucessor;

 public:
  void add(BaseHandler *n) {
    if (sucessor) {
      sucessor->add(n);
    } else {
      sucessor = n;
    }
  }

  int handle(int i) {
    if (canHandle(i)) {
      return value(i);
    } else if (sucessor) {
      sucessor->handle(i);
    } else {
      return 0;
    }
  }

  virtual bool canHandle(int i) {}
  virtual int value(int i) {}
};

class Handler1 : public BaseHandler {
 public:
  bool canHandle(int i) override { return i == 1; }
  int value(int i) override { return 10; }
};

class Handler2 : public BaseHandler {
 public:
  bool canHandle(int i) override { return i == 2; }
  int value(int i) override { return 20; }
};

class Handler3 : public BaseHandler {
 public:
  bool canHandle(int i) override { return i == 3; }
  int value(int i) override { return 30; }
};
