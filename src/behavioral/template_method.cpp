class AbstractClass {
  public:
    virtual int primitiveOperation1() = 0;
    virtual int primitiveOperation2() = 0;
};

class ConcreteClass : public AbstractClass {
  public:
    int primitiveOperation1() override {
      return 10;
    }

    int primitiveOperation2() override {
      return 20;
    }
};
