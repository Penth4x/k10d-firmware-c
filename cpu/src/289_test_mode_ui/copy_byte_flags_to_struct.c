/* @k10d copy_byte_flags_to_struct @ 0x1052dfa0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 289_test_mode_ui (unit names are model-proposed)
 * purpose:
 *   Copies 33 byte values from a source buffer into a destination struct at offsets
 *   0x22e-0x24e.
 * summary:
 *   The function calls settings_getter 33 times with indices 0x11 through 0x31 (skipping
 *   0x2b and 0x2e in the sequence order) to retrieve bytes from param_2. Each returned byte
 *   is stored sequentially into param_1 starting at offset 0x22e. The caller is
 *   call_helper_with_offset_arg_1052d62e. The specific role of the data is not determinable
 *   from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_byte_flags_to_struct(int param_1,int param_2)

{
  uint8_t uVar1;
  
  uVar1 = settings_getter(param_2,0x11);
  *(uint8_t *)(param_1 + 0x22e) = uVar1;
  uVar1 = settings_getter(param_2,0x12);
  *(uint8_t *)(param_1 + 0x22f) = uVar1;
  uVar1 = settings_getter(param_2,0x13);
  *(uint8_t *)(param_1 + 0x230) = uVar1;
  uVar1 = settings_getter(param_2,0x14);
  *(uint8_t *)(param_1 + 0x231) = uVar1;
  uVar1 = settings_getter(param_2,0x15);
  *(uint8_t *)(param_1 + 0x232) = uVar1;
  uVar1 = settings_getter(param_2,0x16);
  *(uint8_t *)(param_1 + 0x233) = uVar1;
  uVar1 = settings_getter(param_2,0x17);
  *(uint8_t *)(param_1 + 0x234) = uVar1;
  uVar1 = settings_getter(param_2,0x18);
  *(uint8_t *)(param_1 + 0x235) = uVar1;
  uVar1 = settings_getter(param_2,0x19);
  *(uint8_t *)(param_1 + 0x236) = uVar1;
  uVar1 = settings_getter(param_2,0x1a);
  *(uint8_t *)(param_1 + 0x237) = uVar1;
  uVar1 = settings_getter(param_2,0x1b);
  *(uint8_t *)(param_1 + 0x238) = uVar1;
  uVar1 = settings_getter(param_2,0x1c);
  *(uint8_t *)(param_1 + 0x239) = uVar1;
  uVar1 = settings_getter(param_2,0x1d);
  *(uint8_t *)(param_1 + 0x23a) = uVar1;
  uVar1 = settings_getter(param_2,0x1e);
  *(uint8_t *)(param_1 + 0x23b) = uVar1;
  uVar1 = settings_getter(param_2,0x1f);
  *(uint8_t *)(param_1 + 0x23c) = uVar1;
  uVar1 = settings_getter(param_2,0x20);
  *(uint8_t *)(param_1 + 0x23d) = uVar1;
  uVar1 = settings_getter(param_2,0x21);
  *(uint8_t *)(param_1 + 0x23e) = uVar1;
  uVar1 = settings_getter(param_2,0x22);
  *(uint8_t *)(param_1 + 0x23f) = uVar1;
  uVar1 = settings_getter(param_2,0x23);
  *(uint8_t *)(param_1 + 0x240) = uVar1;
  uVar1 = settings_getter(param_2,0x24);
  *(uint8_t *)(param_1 + 0x241) = uVar1;
  uVar1 = settings_getter(param_2,0x25);
  *(uint8_t *)(param_1 + 0x242) = uVar1;
  uVar1 = settings_getter(param_2,0x26);
  *(uint8_t *)(param_1 + 0x243) = uVar1;
  uVar1 = settings_getter(param_2,0x27);
  *(uint8_t *)(param_1 + 0x244) = uVar1;
  uVar1 = settings_getter(param_2,0x28);
  *(uint8_t *)(param_1 + 0x245) = uVar1;
  uVar1 = settings_getter(param_2,0x29);
  *(uint8_t *)(param_1 + 0x246) = uVar1;
  uVar1 = settings_getter(param_2,0x2a);
  *(uint8_t *)(param_1 + 0x247) = uVar1;
  uVar1 = settings_getter(param_2,0x2c);
  *(uint8_t *)(param_1 + 0x248) = uVar1;
  uVar1 = settings_getter(param_2,0x2d);
  *(uint8_t *)(param_1 + 0x249) = uVar1;
  uVar1 = settings_getter(param_2,0x2f);
  *(uint8_t *)(param_1 + 0x24a) = uVar1;
  uVar1 = settings_getter(param_2,0x30);
  *(uint8_t *)(param_1 + 0x24b) = uVar1;
  uVar1 = settings_getter(param_2,0x2b);
  *(uint8_t *)(param_1 + 0x24c) = uVar1;
  uVar1 = settings_getter(param_2,0x2e);
  *(uint8_t *)(param_1 + 0x24d) = uVar1;
  uVar1 = settings_getter(param_2,0x31);
  *(uint8_t *)(param_1 + 0x24e) = uVar1;
  return;
}
