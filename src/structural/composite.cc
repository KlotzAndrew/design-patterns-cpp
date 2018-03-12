// Copyright 2018 Andrew Klotz

#include <vector>

class Component {
 public:
  virtual int traverse() = 0;
};

class Element : public Component {
 public:
  int traverse() {
    return 1;
  }
};

class Composite {
 public:
  void add(Component* c) {
    children.push_back(c);
  }

  int traverse() {
    for (int i = 0; i < children.size(); i++) {
      value = value + children[i]->traverse();
    }
    return value;
  }

 private:
  std::vector < Component * > children;
  int value = 0;
};
