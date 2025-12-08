#include <print>

class Base {
public:
    void name(this auto&& self) { self.impl(); }
};

class D1 : public Base {
public:
    void impl() {
        std::println("D1::impl()");
    }
};

class D2 : public Base {
public:
    void impl() {
        std::println("D2::impl()");
    }
};

int main() {
    D1 d1;
    d1.name();
    D2 d2;
    d2.name();

    return 0;
}
