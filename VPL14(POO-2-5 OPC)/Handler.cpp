#include <iostream>

#include "Handler.h"

void fer_assert(const bool expr, const char* msg) {
  if (!expr) {
    std::cout << msg << std::endl;
    exit(1);
  }
}

void HandlerAdd::handle(Instruction *inst) {
  // TODO: implement this method. An answer is provided in the exercise.
}

void HandlerMul::handle(Instruction *inst) {
  // TODO: implement this method.
}

void HandlerPop::handle(Instruction *inst) {
  // TODO: implement this method.
}

void HandlerPrint::handle(Instruction *inst) {
  // TODO: implement this method.
}

void HandlerPush::handle(Instruction *inst) {
  // TODO: implement this method.
}