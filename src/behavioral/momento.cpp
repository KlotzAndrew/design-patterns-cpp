#include <vector>

class Momento {
  private:
    friend class Originator;

    Momento(int s) {
      state = s;
    }

    int getState() {
      return state;
    }

    int state;
};

class Originator {
  public:
    void setState(int s) {
      state = s;
    }

    int getState() {
      return state;
    }

    void setMomento(Momento *m) {
      state = m->getState();
    }

    Momento *createMomento() {
      return new Momento(state);
    }

  private:
    int state;
};

class CareTaker {
  public:
    CareTaker(Originator *o) {
      originator = o;
    }

    void save() {
      history.push_back(originator->createMomento());
    }

    void undo() {
      history.pop_back();
      originator->setMomento(history.back());
    }

  private:
    Originator *originator;
    std::vector<Momento *> history;
};
