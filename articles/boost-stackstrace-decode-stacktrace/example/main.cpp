#include <boost/stacktrace.hpp>
#include <iostream>

void foo() {
    std::cout << boost::stacktrace::stacktrace();
}

void bar() {
    foo();
}

void baz() {
    bar();
}

void qux() {
    baz();
}

int main() {
    qux();
    return 0;
}
