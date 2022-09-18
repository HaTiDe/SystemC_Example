	
#include "systemc.h"
#include <iostream>

SC_MODULE (hello_world) {
      SC_CTOR (hello_world) {
  }
  void say_hello() {
    std::cout << "Hello World.\n";
  }
};

int sc_main(int argc, char* argv[]) {
  hello_world hello("HELLO");
  hello.say_hello();
  sc_start(10,SC_NS);
  return(0);
}