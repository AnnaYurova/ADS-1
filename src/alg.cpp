// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  int count = 0;
    for (int i = 2; i <= (value / 2 ); i++) {
      if (value % i == 0) {
        return false;
      }
    }
  return true;
}


uint64_t nPrime(uint64_t n) {
  int check = 0;
  int number = 1;
  while (check != n){
    number++;
    if (checkPrime(number)){
      check++;
    }
  }
  return number;
}

uint64_t nextPrime(uint64_t value) {
  while (1) {
    int c = 1;
    value++;
      for (int i = 2; i <= value; i++)
        if (value % i == 0)
          c++;
        if (c == 2)
          return value;
  }
}

uint64_t sumPrime(uint64_t hbound) {
  int sum = 0;
    for (int i = 2; i < hbound; i++) {
        if (checkPrime(i)) {
          sum += i;
        }
      }
    return sum;
  }
