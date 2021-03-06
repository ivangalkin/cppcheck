// auto generated tests from cfg/avr.cfg
//
// Generated by command:
// ./generate_cfg_tests cfg/avr.cfg > generated-cfg-tests-avr.cpp
//
// Recommended cppcheck command line:
// $ cppcheck --enable=warning,information --inline-suppr --platform=unix64 generated-cfg-tests-avr.cpp
// => 'unmatched suppression' warnings are false negatives.
//

void test__toascii__noreturn() {
  int x = 1;
  if (cond) { x=100; toascii(arg1); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__toascii__leakignore() {
  char *p = malloc(10); *p=0;
  toascii(p);
  // cppcheck-suppress memleak
}

void test__vfprintf_P__noreturn() {
  int x = 1;
  if (cond) { x=100; vfprintf_P(arg1, arg2); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__vfprintf_P__leakignore() {
  char *p = malloc(10); *p=0;
  vfprintf_P(p, arg2);
  // cppcheck-suppress memleak
}

void test__vfprintf_P__arg1__notnull() {
  // cppcheck-suppress nullPointer
  vfprintf_P(NULL, arg2);
}

void test__vfprintf_P__arg1__notuninit() {
  int x[10];
  // cppcheck-suppress uninitvar
  vfprintf_P(x, arg2);
}

void test__printf_P__noreturn() {
  int x = 1;
  if (cond) { x=100; printf_P(arg1); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__printf_P__leakignore() {
  char *p = malloc(10); *p=0;
  printf_P(p);
  // cppcheck-suppress memleak
}

void test__sprintf_P__noreturn() {
  int x = 1;
  if (cond) { x=100; sprintf_P(arg1, arg2); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__sprintf_P__leakignore() {
  char *p = malloc(10); *p=0;
  sprintf_P(p, arg2);
  // cppcheck-suppress memleak
}

void test__snprintf_P__noreturn() {
  int x = 1;
  if (cond) { x=100; snprintf_P(arg1, arg2, arg3); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__snprintf_P__leakignore() {
  char *p = malloc(10); *p=0;
  snprintf_P(p, arg2, arg3);
  // cppcheck-suppress memleak
}

void test__vsprintf_P__noreturn() {
  int x = 1;
  if (cond) { x=100; vsprintf_P(arg1, arg2); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__vsprintf_P__leakignore() {
  char *p = malloc(10); *p=0;
  vsprintf_P(p, arg2);
  // cppcheck-suppress memleak
}

void test__vsnprintf_P__noreturn() {
  int x = 1;
  if (cond) { x=100; vsnprintf_P(arg1, arg2, arg3); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__vsnprintf_P__leakignore() {
  char *p = malloc(10); *p=0;
  vsnprintf_P(p, arg2, arg3);
  // cppcheck-suppress memleak
}

void test__fprintf_P__noreturn() {
  int x = 1;
  if (cond) { x=100; fprintf_P(arg1, arg2); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__fprintf_P__leakignore() {
  char *p = malloc(10); *p=0;
  fprintf_P(p, arg2);
  // cppcheck-suppress memleak
}

void test__fprintf_P__arg1__notnull() {
  // cppcheck-suppress nullPointer
  fprintf_P(NULL, arg2);
}

void test__fprintf_P__arg1__notuninit() {
  int x[10];
  // cppcheck-suppress uninitvar
  fprintf_P(x, arg2);
}

void test__fputs_P__noreturn() {
  int x = 1;
  if (cond) { x=100; fputs_P(arg1, arg2); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__fputs_P__leakignore() {
  char *p = malloc(10); *p=0;
  fputs_P(p, arg2);
  // cppcheck-suppress memleak
}

void test__fputs_P__arg1__notnull() {
  // cppcheck-suppress nullPointer
  fputs_P(NULL, arg2);
}

void test__fputs_P__arg1__notuninit() {
  int x[10];
  // cppcheck-suppress uninitvar
  fputs_P(x, arg2);
}

void test__fputs_P__arg2__notnull() {
  // cppcheck-suppress nullPointer
  fputs_P(arg1, NULL);
}

void test__fputs_P__arg2__notuninit() {
  int x[10];
  // cppcheck-suppress uninitvar
  fputs_P(arg1, x);
}

void test__puts_P__noreturn() {
  int x = 1;
  if (cond) { x=100; puts_P(arg1); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__puts_P__leakignore() {
  char *p = malloc(10); *p=0;
  puts_P(p);
  // cppcheck-suppress memleak
}

void test__puts_P__arg1__notbool() {
  // cppcheck-suppress invalidFunctionArgBool
  puts_P(!x);
}

void test__puts_P__arg1__notnull() {
  // cppcheck-suppress nullPointer
  puts_P(NULL);
}

void test__puts_P__arg1__notuninit() {
  int x[10];
  // cppcheck-suppress uninitvar
  puts_P(x);
}

void test__scanf_P__noreturn() {
  int x = 1;
  if (cond) { x=100; scanf_P(arg1, arg2); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__scanf_P__leakignore() {
  char *p = malloc(10); *p=0;
  scanf_P(p, arg2);
  // cppcheck-suppress memleak
}

void test__scanf_P__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  scanf_P(x, arg2);
}

void test__fscanf_P__noreturn() {
  int x = 1;
  if (cond) { x=100; fscanf_P(arg1, arg2); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__fscanf_P__leakignore() {
  char *p = malloc(10); *p=0;
  fscanf_P(p, arg2);
  // cppcheck-suppress memleak
}

void test__fscanf_P__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  fscanf_P(x, arg2);
}

void test__sscanf_P__noreturn() {
  int x = 1;
  if (cond) { x=100; sscanf_P(arg1, arg2); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__sscanf_P__leakignore() {
  char *p = malloc(10); *p=0;
  sscanf_P(p, arg2);
  // cppcheck-suppress memleak
}

void test__fdevopen__noreturn() {
  int x = 1;
  if (cond) { x=100; fdevopen(arg1, arg2); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__fdevopen__arg1__notnull() {
  // cppcheck-suppress nullPointer
  fdevopen(NULL, arg2);
}

void test__fdevopen__arg1__notuninit() {
  int x[10];
  // cppcheck-suppress uninitvar
  fdevopen(x, arg2);
}

void test__fdevopen__arg2__notnull() {
  // cppcheck-suppress nullPointer
  fdevopen(arg1, NULL);
}

void test__fdevopen__arg2__notuninit() {
  int x[10];
  // cppcheck-suppress uninitvar
  fdevopen(arg1, x);
}

void test__ltoa__noreturn() {
  int x = 1;
  if (cond) { x=100; ltoa(arg1, arg2, arg3); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__ltoa__leakignore() {
  char *p = malloc(10); *p=0;
  ltoa(p, arg2, arg3);
  // cppcheck-suppress memleak
}

void test__ltoa__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  ltoa(x, arg2, arg3);
}

void test__ltoa__arg2__notnull() {
  // cppcheck-suppress nullPointer
  ltoa(arg1, NULL, arg3);
}

void test__ltoa__arg2__notuninit() {
  int x[10];
  // cppcheck-suppress uninitvar
  ltoa(arg1, x, arg3);
}

void test__ltoa__arg3__notnull() {
  // cppcheck-suppress nullPointer
  ltoa(arg1, arg2, NULL);
}

void test__ltoa__arg3__notuninit() {
  int x[10];
  // cppcheck-suppress uninitvar
  ltoa(arg1, arg2, x);
}

void test__utoa__noreturn() {
  int x = 1;
  if (cond) { x=100; utoa(arg1, arg2, arg3); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__utoa__leakignore() {
  char *p = malloc(10); *p=0;
  utoa(p, arg2, arg3);
  // cppcheck-suppress memleak
}

void test__utoa__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  utoa(x, arg2, arg3);
}

void test__utoa__arg2__notnull() {
  // cppcheck-suppress nullPointer
  utoa(arg1, NULL, arg3);
}

void test__utoa__arg2__notuninit() {
  int x[10];
  // cppcheck-suppress uninitvar
  utoa(arg1, x, arg3);
}

void test__utoa__arg3__notnull() {
  // cppcheck-suppress nullPointer
  utoa(arg1, arg2, NULL);
}

void test__utoa__arg3__notuninit() {
  int x[10];
  // cppcheck-suppress uninitvar
  utoa(arg1, arg2, x);
}

void test__ultoa__noreturn() {
  int x = 1;
  if (cond) { x=100; ultoa(arg1, arg2, arg3); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__ultoa__leakignore() {
  char *p = malloc(10); *p=0;
  ultoa(p, arg2, arg3);
  // cppcheck-suppress memleak
}

void test__ultoa__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  ultoa(x, arg2, arg3);
}

void test__ultoa__arg2__notnull() {
  // cppcheck-suppress nullPointer
  ultoa(arg1, NULL, arg3);
}

void test__ultoa__arg2__notuninit() {
  int x[10];
  // cppcheck-suppress uninitvar
  ultoa(arg1, x, arg3);
}

void test__ultoa__arg3__notnull() {
  // cppcheck-suppress nullPointer
  ultoa(arg1, arg2, NULL);
}

void test__ultoa__arg3__notuninit() {
  int x[10];
  // cppcheck-suppress uninitvar
  ultoa(arg1, arg2, x);
}

void test__random__noreturn() {
  int x = 1;
  if (cond) { x=100; random(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__random__leakignore() {
  char *p = malloc(10); *p=0;
  random();
  // cppcheck-suppress memleak
}

void test__random_r__noreturn() {
  int x = 1;
  if (cond) { x=100; random_r(arg1); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__random_r__leakignore() {
  char *p = malloc(10); *p=0;
  random_r(p);
  // cppcheck-suppress memleak
}

void test__random_r__arg1__notnull() {
  // cppcheck-suppress nullPointer
  random_r(NULL);
}

void test__srandom__noreturn() {
  int x = 1;
  if (cond) { x=100; srandom(arg1); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__srandom__leakignore() {
  char *p = malloc(10); *p=0;
  srandom(p);
  // cppcheck-suppress memleak
}

void test__srandom__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  srandom(x);
}

void test__dtostre__noreturn() {
  int x = 1;
  if (cond) { x=100; dtostre(arg1, arg2); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__dtostre__leakignore() {
  char *p = malloc(10); *p=0;
  dtostre(p, arg2);
  // cppcheck-suppress memleak
}

void test__dtostre__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  dtostre(x, arg2);
}

void test__dtostre__arg2__notnull() {
  // cppcheck-suppress nullPointer
  dtostre(arg1, NULL);
}

void test__dtostrf__noreturn() {
  int x = 1;
  if (cond) { x=100; dtostrf(arg1, arg2, arg3, arg4); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__dtostrf__leakignore() {
  char *p = malloc(10); *p=0;
  dtostrf(p, arg2, arg3, arg4);
  // cppcheck-suppress memleak
}

void test__dtostrf__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  dtostrf(x, arg2, arg3, arg4);
}

void test__dtostrf__arg2__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  dtostrf(arg1, x, arg3, arg4);
}

void test__dtostrf__arg3__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  dtostrf(arg1, arg2, x, arg4);
}

void test__dtostrf__arg4__notnull() {
  // cppcheck-suppress nullPointer
  dtostrf(arg1, arg2, arg3, NULL);
}

void test__ffs__noreturn() {
  int x = 1;
  if (cond) { x=100; ffs(arg1); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__ffs__leakignore() {
  char *p = malloc(10); *p=0;
  ffs(p);
  // cppcheck-suppress memleak
}

void test__ffs__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  ffs(x);
}

void test__ffsl__noreturn() {
  int x = 1;
  if (cond) { x=100; ffsl(arg1); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__ffsl__leakignore() {
  char *p = malloc(10); *p=0;
  ffsl(p);
  // cppcheck-suppress memleak
}

void test__ffsl__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  ffsl(x);
}

void test__ffsll__noreturn() {
  int x = 1;
  if (cond) { x=100; ffsll(arg1); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__ffsll__leakignore() {
  char *p = malloc(10); *p=0;
  ffsll(p);
  // cppcheck-suppress memleak
}

void test__ffsll__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  ffsll(x);
}

void test__memccpy__noreturn() {
  int x = 1;
  if (cond) { x=100; memccpy(arg1, arg2, arg3, arg4); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__memccpy__leakignore() {
  char *p = malloc(10); *p=0;
  memccpy(p, arg2, arg3, arg4);
  // cppcheck-suppress memleak
}

void test__memccpy__arg1__notnull() {
  // cppcheck-suppress nullPointer
  memccpy(NULL, arg2, arg3, arg4);
}

void test__memccpy__arg2__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  memccpy(arg1, x, arg3, arg4);
}

void test__memccpy__arg3__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  memccpy(arg1, arg2, x, arg4);
}

void test__memccpy__arg4__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  memccpy(arg1, arg2, arg3, x);
}

