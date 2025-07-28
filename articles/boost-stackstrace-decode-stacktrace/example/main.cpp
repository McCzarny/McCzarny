#include <boost/stacktrace.hpp>
#include <iostream>

void foo() {
    printf("In function foo\n");
    std::cout << boost::stacktrace::stacktrace();
}

void bar() {
    printf("In function bar\n");
    foo();
}

void baz() {
    printf("In function baz\n");
    bar();
}

void qux() {
    printf("In function qux\n");
    baz();
}

int main() {
    qux();
    return 0;
}
