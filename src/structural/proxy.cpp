class Api {
  public:
    Api(int i) {
      value = i;
    }

    virtual int call() = 0;

  protected:
    int value;
};

class Client : public Api {
  public:
    Client(int i): Api(i) {}

    int call() override { return value; }
};

class Proxy : public Api {
  public:
    Proxy(int i): Api(i) {}

    int call() override {
      if (value >= 10) { return value; }
      else { return 0; }
    }
};
