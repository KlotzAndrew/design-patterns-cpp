class Maze {
  public:
    int level;

    void setLevel(int i) {
      level = i;
    }
};

class Builder {
  public:
    Builder() {
      maze = new Maze;
    }

    virtual void setLevel() = 0;

    Maze* getMaze() {
      return maze;
    }

  protected:
    Maze* maze;
};

class SimpleBuilder : public Builder {
  public:
    void setLevel() override {
      maze->setLevel(10);
    }
};

class ComplexBuilder : public Builder {
  public:
    void setLevel() override {
      maze->setLevel(100);
    }
};

class Director {
  Builder* builder;

  public:
    Director(Builder* b) {
      builder = b;
    }

    Maze* getMaze() {
      builder->setLevel();

      return builder->getMaze();
    }
};
