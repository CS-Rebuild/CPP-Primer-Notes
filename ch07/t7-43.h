class NoDefault {
public:
    NoDefault(int a) { }
};

class C {
public:
    C() : mem(0) { }
private:
    NoDefault mem;
};
