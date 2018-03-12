// Copyright 2018 Andrew Klotz

#include <string>

class Pet {
 public:
  virtual std::string speak() = 0;
};

class Dog : public Pet {
 public:
  std::string speak() override {
    return "woof";
  }
};

class Walker {
 public:
  std::string walk() {
    return getPet()->speak();
  }

 private:
  virtual Pet* getPet() = 0;
};

class DogWalker : public Walker {
 private:
  Pet* getPet() override {
    return new Dog;
  }
};
