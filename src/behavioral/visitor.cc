// Copyright 2018 Andrew Klotz

class Element {
 public:
  virtual int accept(class Visitor *visitor) = 0;

  int getValue() {
    return value;
  }

 protected:
  int value;
};

class Visitor {
 public:
  virtual int visitElementA(Element *element) = 0;
  virtual int visitElementB(Element *element) = 0;
};

class ConcreteVisitorA : public Visitor {
 public:
  int visitElementA(Element *element) override {
    return element->getValue() * 10;
  }

  int visitElementB(Element *element) override {
    return element->getValue() * 10;
  }
};

class ConcreteVisitorB : public Visitor {
 public:
  int visitElementA(Element *element) override {
    return element->getValue() * 20;
  }

  int visitElementB(Element *element) override {
    return element->getValue() * 20;
  }
};

class ConcreteElementA : public Element {
 public:
  ConcreteElementA() {
    value = 10;
  }

  int accept(Visitor *visitor) override {
    return visitor->visitElementA(this);
  }
};

class ConcreteElementB : public Element {
 public:
  ConcreteElementB() {
    value = 20;
  }

  int accept(Visitor *visitor) override {
    return visitor->visitElementA(this);
  }
};
