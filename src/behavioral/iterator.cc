// Copyright 2018 Andrew Klotz

class Iterator {
 public:
  virtual void first() = 0;
  virtual void next() = 0;
  virtual bool isDone() = 0;
  virtual int currentItem() = 0;
};

class Aggregate {
 public:
  virtual Iterator* createIterator() = 0;
  virtual int size() = 0;
  virtual int at(int index) = 0;
};

class ConcreteIterator : public Iterator {
 public:
  explicit ConcreteIterator(Aggregate *a): list(a) {
    index = 0;
  }

  void first() override {
    index = 0;
  }

  void next() override {
    index++;
  }

  bool isDone() override {
    return (index >= list->size());
  }

  int currentItem() override {
    if (isDone()) {
      return -1;
    }
    return list->at(index);
  }

 private:
  Aggregate *list;
  int index;
};

class ConcreteAggregate : public Aggregate {
 public:
  explicit ConcreteAggregate(int size) {
    list = new int[size]();
    for (int i = 0; i < size; i++) { list[i] = i; }
    count = size;
  }
  ~ConcreteAggregate() {
    delete[] list;
  }

  Iterator* createIterator() override {
    return new ConcreteIterator(this);
  }

  int size() override {
    return count;
  }

  int at(int index) override {
    return list[index];
  }

 private:
  int *list;
  int count;
};
