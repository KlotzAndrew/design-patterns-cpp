// Copyright 2018 Andrew Klotz

#include <string>
#include <unordered_map>

class Context {
 public:
  void set(std::string var, bool value) {
    vars.insert(std::pair<std::string, bool>(var, value));
  }

  bool get(std::string exp) {
    return vars[exp];
  }

 private:
  std::unordered_map<std::string, bool> vars;
};

class AbstractExpression {
 public:
  virtual bool interpret(Context *context) = 0;
};

class TerminalExpression : public AbstractExpression {
 public:
  explicit TerminalExpression(std::string val) : value(val) {}

  bool interpret(Context *context) override {
    return context->get(value);
  }

 private:
  std::string value;
};

class NonTerminalExpression : public AbstractExpression {
 public:
  NonTerminalExpression(AbstractExpression *l, AbstractExpression *r) {
    left = l;
    right = r;
  }

  bool interpret(Context *context) override {
    return left->interpret(context) && right->interpret(context);
  }

 private:
  AbstractExpression *left;
  AbstractExpression *right;
};
