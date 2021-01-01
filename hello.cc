#include<iostream>
#include "hello.h"

using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    cout << "Hello world\n";
    cout << add(2, 3);
}