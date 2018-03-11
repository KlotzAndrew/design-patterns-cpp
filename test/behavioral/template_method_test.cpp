#include <cassert>

#include "../../src/behavioral/template_method.cpp"

int main() {
  AbstractClass *klass = new ConcreteClass;

  assert(klass->primitiveOperation1() == 10);
  assert(klass->primitiveOperation2() == 20);
}
