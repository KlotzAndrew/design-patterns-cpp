#include <iostream>

class Element {
  public:
    virtual std::string print() = 0;
};

class Title : public Element {
  std::string str;
  public:
    Title(std::string s) {
      str = s;
    }

    std::string print() override {
      return str;
    }
};

class Decorator : public Element {
  Element* element;
  public:
    Decorator(Element* e) {
      element = e;
    }

    std::string print() override {
      return element->print();
    }
};

class AsteriskDecorator : public Decorator {
  public:
    AsteriskDecorator(Element* e): Decorator(e) {}

    std::string print() override {
      std::string asterisk = "*";
      return asterisk + Decorator::print() + asterisk;
    }
};

class PlusDecorator : public Decorator {
  public:
    PlusDecorator(Element* e): Decorator(e) {}

    std::string print() override {
      std::string asterisk = "+";
      return asterisk + Decorator::print() + asterisk;
    }
};
