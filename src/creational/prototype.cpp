#include <string>

class Prototype {
  public:
    virtual Prototype *clone() = 0;
    virtual std::string type() = 0;
};

class Sheep : public Prototype {
  public:
    Sheep* clone() override {
      return new Sheep;
    }

    std::string type() override {
      return "Sheep!";
    }
};

class MagicSheep : public Sheep {
  public:
    MagicSheep* clone() override {
      return new MagicSheep;
    }

    std::string type() override {
      return "Magic Sheep!";
    }
};

class Factory {
  Sheep* sheep;

  public:
    Factory(Sheep* s) {
      sheep = s;
    }

    Sheep* makeSheep() const {
      return sheep->clone();
    }
};
