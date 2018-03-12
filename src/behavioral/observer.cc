// Copyright 2018 Andrew Klotz

#include <vector>

class Subject;

class Observer {
 public:
  virtual int getState() = 0;
  virtual void update(Subject *subject) = 0;
};

class Subject {
 public:
  void attach(Observer *observer) {
    observers.push_back(observer);
  }

  void detach(int index) {
    observers.erase(observers.begin() + index);
  }

  void notfiy() {
    for (int i = 0; i < observers.size(); i++) {
      observers.at(i)->update(this);
    }
  }

  virtual int getState() {
    return state;
  }

  virtual void setState(int s) {
    state = s;
  }

 private:
  int state;
  std::vector<Observer *> observers;
};

class ConcreteObserver : public Observer {
 public:
  int getState() {
    return state;
  }

  void update(Subject *subject) {
    state = subject->getState();
  }

 private:
  int state;
};

class ConcreteSubject : public Subject {
 public:
  int getState() {
    return state;
  }

  void setState(int s) {
    state = s;
  }

 private:
  int state;
};
