// Copyright 2018 Andrew Klotz

static bool dbConnected = false;
static bool cacheConnected = false;

class Database {
 public:
  void connect() {
    dbConnected = true;
  }

  bool isConnected() {
    return dbConnected;
  }
};

class Cache {
 public:
  void connect() {
    cacheConnected = true;
  }

  bool isConnected() {
    return cacheConnected;
  }
};

class Facade {
 public:
  Facade() {
    db = new Database;
    cache = new Cache;
  }

  void start() {
    db->connect();
    cache->connect();
  }

 private:
  Database* db;
  Cache* cache;
};
