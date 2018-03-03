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
  std::vector < Component * > children;
  int value = 0;

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
};
