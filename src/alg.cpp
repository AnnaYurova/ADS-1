// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  int count = 0;
    for (int i = 1; i < 8; i++) {
      if (value % i == 0) {
        count++;
      }
      if (count > 2)
        return false;
    }
  return true;
}


uint64_t nPrime(uint64_t n) {
  int count = 0;
  int rez = 0;
  for (int i = 0; i < n; ++i) {
      for (int j = 1; j < n; ++j) {
        if (i%j == 0) {
            count++;
        }
      }
        if (count < 3) {
            rez = i;
        }
      count = 0;
    }
  return rez;
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
  int count = 0;
  int sum = 0;
    for (int i = 1; i < hbound; ++i) {
      for (int j = 1; j < hbound; ++j) {
        if (i % j == 0) {
          count++;
        }
      }
        if (count < 3) {
          sum += i;
        }
        count = 0;
      }
    return sum;
  }
