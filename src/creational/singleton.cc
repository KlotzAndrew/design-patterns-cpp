// Copyright 2018 Andrew Klotz

class Singleton {
 public:
  static Singleton& Instance() {
    static Singleton instance;
    return instance;
  }

 private:
  Singleton() {}
  ~Singleton() {}
};
