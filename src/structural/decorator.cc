// Copyright 2018 Andrew Klotz

#include <iostream>

class Element {
 public:
  virtual std::string print() = 0;
};

class Title : public Element {
 public:
  explicit Title(std::string s) :str(s) {}

  std::string print() override {
    return str;
  }

 private:
  std::string str;
};

class Decorator : public Element {
 public:
  explicit Decorator(Element* e) : element(e) {}

  std::string print() override {
    return element->print();
  }

 protected:
  Element* element;
};

class AsteriskDecorator : public Decorator {
 public:
  explicit AsteriskDecorator(Element* e): Decorator(e) {}

  std::string print() override {
    std::string asterisk = "*";
    return asterisk + Decorator::print() + asterisk;
  }
};

class PlusDecorator : public Decorator {
 public:
  explicit PlusDecorator(Element* e): Decorator(e) {}

  std::string print() override {
    std::string asterisk = "+";
    return asterisk + Decorator::print() + asterisk;
  }
};
