// Copyright 2018 Andrew Klotz

class TaxImp {
 public:
  virtual double totalTax() = 0;

 protected:
  double total;
};

class SmallTaxImp : public TaxImp {
 public:
  explicit SmallTaxImp(double i) {
    total = i;
  }

  double totalTax() override {
    return total * static_cast<double>(0.1);
  }
};

class BigTaxImp : public TaxImp {
 public:
  explicit BigTaxImp(double i) {
    total = i;
  }

  double totalTax() override {
    return total * static_cast<double>(0.2);
  }
};

class Tax {
 public:
  double totalTax() {
    return imp->totalTax();
  }

 protected:
  TaxImp* imp;
};

class SmallTax : public Tax {
 public:
  explicit SmallTax(double i) {
    imp = new SmallTaxImp(i);
  }
};

class BigTax : public Tax {
 public:
  explicit BigTax(double i) {
    imp = new BigTaxImp(i);
  }
};
