/* @k10d release_ten_pointers @ 0x1042dd92
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 109_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t release_ten_pointers(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    (*(code *)0x1042e87e/*ROM*/)(*(int *)(param_1 + 4),0);
  }
  if (*(int *)(param_1 + 8) != 0) {
    (*(code *)0x1042a3c0/*ROM*/)(*(int *)(param_1 + 8),0);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*(code *)0x104972a4/*ROM*/)(*(int *)(param_1 + 0xc),0);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    (*(code *)0x1042bc22/*ROM*/)(*(int *)(param_1 + 0x10),0);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    (*(code *)0x1042a8e8/*ROM*/)(*(int *)(param_1 + 0x14),0);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    (*(code *)0x1042b4d8/*ROM*/)(*(int *)(param_1 + 0x18),0);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    (*(code *)0x10429c74/*ROM*/)(*(int *)(param_1 + 0x1c),0);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    (*(code *)0x1042e3fc/*ROM*/)(*(int *)(param_1 + 0x20),0);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    (*(code *)0x1042e6a8/*ROM*/)(*(int *)(param_1 + 0x24),0);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    (*(code *)0x1042e240/*ROM*/)(*(int *)(param_1 + 0x28),0);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    (*(code *)0x104df720/*ROM*/)(*(int *)(param_1 + 0x2c),0);
  }
  return 1;
}
