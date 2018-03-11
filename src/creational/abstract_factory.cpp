#include <string>

class Shape {
  public:
    std::string getValue() {
      return value;
    }

  protected:
    std::string value;
};

class Circle : public Shape {
  public:
    Circle() {
      value = "circle";
    }
};

class Ellipse : public Shape {
  public:
    Ellipse() {
      value = "ellipse";
    }
};

class AbstractFactory {
  public:
    virtual Shape* createCurvedInstance() = 0;
};

class SimpleFactory : public AbstractFactory {
  public:
    Shape* createCurvedInstance() {
      return new Circle();
    }
};

class ComplexFactory : public AbstractFactory {
  public:
    Shape* createCurvedInstance() {
      return new Ellipse();
    }
};
