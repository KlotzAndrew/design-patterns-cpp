#include <string>

class Pet {
  public:
    Pet() {};
    virtual std::string speak() { return 0; };
};

class Dog : public Pet {
  public:
    std::string speak() override {
      return "woof";
    }
};

class Walker {
  public:
    Walker() {};

    std::string walk() {
      return getPet()->speak();
    }

  private:
    virtual Pet* getPet() { return 0; }
};

class DogWalker : public Walker {
  private:
    Pet* getPet() override {
      return new Dog;
    }
};
