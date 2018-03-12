// Copyright 2018 Andrew Klotz

#include <string>
#include <unordered_map>

class Box {
 public:
  explicit Box(std::string c) : color(c) {}

  std::string getColor() {
    return color;
  }

 private:
  std::string color;
};

class BoxFactory {
 public:
  Box* getBox(std::string color) {
    box = map.find(color);
    if (box == map.end()) {
      Box* newBox = new Box(color);
      map[color] = newBox;
      return newBox;
    } else {
      return box->second;
    }
  }

  int boxCount() {
    return map.size();
  }

 private:
  std::unordered_map<std::string, Box*> map;
  std::unordered_map<std::string, Box*>::iterator box;
};
