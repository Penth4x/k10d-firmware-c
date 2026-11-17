/* @k10d copy_flag_bytes_to_struct @ 0x1052dae0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 289_test_mode_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_flag_bytes_to_struct(int param_1,int param_2)

{
  uint8_t uVar1;
  
  uVar1 = settings_getter(param_2,0x11);
  *(uint8_t *)(param_1 + 0x20c) = uVar1;
  uVar1 = settings_getter(param_2,0x12);
  *(uint8_t *)(param_1 + 0x20d) = uVar1;
  uVar1 = settings_getter(param_2,0x13);
  *(uint8_t *)(param_1 + 0x20e) = uVar1;
  uVar1 = settings_getter(param_2,0x14);
  *(uint8_t *)(param_1 + 0x20f) = uVar1;
  uVar1 = settings_getter(param_2,0x15);
  *(uint8_t *)(param_1 + 0x210) = uVar1;
  uVar1 = settings_getter(param_2,0x16);
  *(uint8_t *)(param_1 + 0x211) = uVar1;
  uVar1 = settings_getter(param_2,0x17);
  *(uint8_t *)(param_1 + 0x212) = uVar1;
  uVar1 = settings_getter(param_2,0x18);
  *(uint8_t *)(param_1 + 0x213) = uVar1;
  uVar1 = settings_getter(param_2,0x19);
  *(uint8_t *)(param_1 + 0x214) = uVar1;
  uVar1 = settings_getter(param_2,0x1a);
  *(uint8_t *)(param_1 + 0x215) = uVar1;
  uVar1 = settings_getter(param_2,0x1b);
  *(uint8_t *)(param_1 + 0x216) = uVar1;
  uVar1 = settings_getter(param_2,0x1c);
  *(uint8_t *)(param_1 + 0x217) = uVar1;
  uVar1 = settings_getter(param_2,0x1d);
  *(uint8_t *)(param_1 + 0x218) = uVar1;
  uVar1 = settings_getter(param_2,0x1e);
  *(uint8_t *)(param_1 + 0x219) = uVar1;
  uVar1 = settings_getter(param_2,0x1f);
  *(uint8_t *)(param_1 + 0x21a) = uVar1;
  uVar1 = settings_getter(param_2,0x20);
  *(uint8_t *)(param_1 + 0x21b) = uVar1;
  uVar1 = settings_getter(param_2,0x21);
  *(uint8_t *)(param_1 + 0x21c) = uVar1;
  uVar1 = settings_getter(param_2,0x22);
  *(uint8_t *)(param_1 + 0x21d) = uVar1;
  uVar1 = settings_getter(param_2,0x23);
  *(uint8_t *)(param_1 + 0x21e) = uVar1;
  uVar1 = settings_getter(param_2,0x24);
  *(uint8_t *)(param_1 + 0x21f) = uVar1;
  uVar1 = settings_getter(param_2,0x25);
  *(uint8_t *)(param_1 + 0x220) = uVar1;
  uVar1 = settings_getter(param_2,0x26);
  *(uint8_t *)(param_1 + 0x221) = uVar1;
  uVar1 = settings_getter(param_2,0x27);
  *(uint8_t *)(param_1 + 0x222) = uVar1;
  uVar1 = settings_getter(param_2,0x28);
  *(uint8_t *)(param_1 + 0x223) = uVar1;
  uVar1 = settings_getter(param_2,0x29);
  *(uint8_t *)(param_1 + 0x224) = uVar1;
  uVar1 = settings_getter(param_2,0x2a);
  *(uint8_t *)(param_1 + 0x225) = uVar1;
  uVar1 = settings_getter(param_2,0x2c);
  *(uint8_t *)(param_1 + 0x226) = uVar1;
  uVar1 = settings_getter(param_2,0x2d);
  *(uint8_t *)(param_1 + 0x227) = uVar1;
  uVar1 = settings_getter(param_2,0x2f);
  *(uint8_t *)(param_1 + 0x228) = uVar1;
  uVar1 = settings_getter(param_2,0x30);
  *(uint8_t *)(param_1 + 0x229) = uVar1;
  uVar1 = settings_getter(param_2,0x2b);
  *(uint8_t *)(param_1 + 0x22a) = uVar1;
  uVar1 = settings_getter(param_2,0x2e);
  *(uint8_t *)(param_1 + 0x22b) = uVar1;
  uVar1 = settings_getter(param_2,0x31);
  *(uint8_t *)(param_1 + 0x22c) = uVar1;
  return;
}
