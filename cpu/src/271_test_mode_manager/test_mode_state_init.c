/* @k10d test_mode_state_init @ 0x1050e732
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed initialize_state_structure)
 * unit: 271_test_mode_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a large state structure by zeroing most fields and setting specific
 *   defaults.
 * summary:
 *   The function takes a pointer to a structure and performs extensive initialization. It
 *   sets numerous fields to zero, initializes specific 16-bit fields to 0x100 (256), and
 *   sets a field at offset 0x692 to 3. It also calls two other functions,
 *   zero_eight_words_at_offsets and copy_four_words_from_offset_0x10, to initialize sub-
 *   structures at offsets 0x52 and 0x220 respectively. The structure appears to be a
 *   complex state object, possibly related to a specific subsystem, but the exact role is
 *   not determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void test_mode_state_init(uint32_t *param_1)

{
  uint uVar1;
  int iVar2;
  
                    /* Test mode state object initializer. Zeros most fields, sets defaults (0x100
                       for some ushort fields), calls (char*)FUN_10506998 + FUN_104f48e4 for sub-objects.
                        */
  *param_1 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(uint8_t *)(param_1 + 10) = 0;
  *(uint8_t *)((int)param_1 + 0x29) = 0;
  *(uint8_t *)((int)param_1 + 0x2a) = 1;
  *(uint8_t *)((int)param_1 + 0x2b) = 0;
  *(uint8_t *)(param_1 + 0xb) = 0;
  *(uint8_t *)((int)param_1 + 0x2d) = 0;
  *(uint8_t *)((int)param_1 + 0x2e) = 0;
  *(uint8_t *)((int)param_1 + 0x2f) = 0;
  *(uint8_t *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(uint16_t *)(param_1 + 0x45) = 0x100;
  *(uint16_t *)((int)param_1 + 0x116) = 0x100;
  *(uint16_t *)(param_1 + 0x46) = 0x100;
  *(uint16_t *)((int)param_1 + 0x11a) = 0x100;
  uVar1 = 0;
  *(uint16_t *)(param_1 + 0x47) = 0;
  *(uint16_t *)((int)param_1 + 0x11e) = 0;
  *(uint16_t *)(param_1 + 0x48) = 0;
  *(uint16_t *)((int)param_1 + 0x122) = 0;
  *(uint16_t *)(param_1 + 0x49) = 0;
  *(uint16_t *)((int)param_1 + 0x126) = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(uint16_t *)(param_1 + 0x19e) = 0;
  *(uint16_t *)((int)param_1 + 0x67a) = 0;
  do {
    iVar2 = uVar1 * 2;
    *(uint16_t *)((int)param_1 + iVar2 + 0x67c) = 0;
    uVar1 = uVar1 + 1 & 0xffff;
    *(uint16_t *)((int)param_1 + iVar2 + 0x686) = 0;
  } while (uVar1 < 5);
  *(uint16_t *)(param_1 + 0x1a4) = 0;
  *(uint16_t *)((int)param_1 + 0x692) = 3;
  param_1[0x1a6] = 0;
  param_1[0x1a7] = 0;
  param_1[0x1a8] = 0;
  *(uint8_t *)(param_1 + 0x1a9) = 0;
  *(uint8_t *)((int)param_1 + 0x6a5) = 0;
  *(uint16_t *)((int)param_1 + 0x6a6) = 0;
  *(uint16_t *)(param_1 + 0x1aa) = 0;
  *(uint16_t *)((int)param_1 + 0x6aa) = 0;
  *(uint16_t *)(param_1 + 0x1ab) = 0;
  param_1[0x1ac] = 0;
  param_1[0x1ad] = 0;
  *(uint8_t *)(param_1 + 0x1ae) = 0;
  *(uint8_t *)((int)param_1 + 0x6b9) = 0;
  param_1[0x1af] = 0;
  param_1[0x1b0] = 0;
  param_1[0x1b1] = 0;
  param_1[0x1b2] = 0;
  param_1[0x232] = 0;
  *(uint16_t *)(param_1 + 0x233) = 0x100;
  *(uint16_t *)((int)param_1 + 0x8ce) = 0x100;
  *(uint16_t *)(param_1 + 0x234) = 0x100;
  *(uint16_t *)((int)param_1 + 0x8d2) = 0x100;
  zero_eight_words_at_offsets(param_1 + 0x52);
  copy_four_words_from_offset_0x10(param_1 + 0x220);
  *(uint8_t *)(param_1 + 0x231) = 0;
  *(uint8_t *)((int)param_1 + 0x8c5) = 0;
  *(uint8_t *)(param_1[0x1fe] + 0xc0) = 0;
  *(uint8_t *)(param_1[0x1fe] + 0xc1) = 0;
  *(uint8_t *)(param_1[0x1fe] + 0xe1) = 0;
  *(uint8_t *)(param_1[0x1fa] + 8) = 0;
  *(uint8_t *)(param_1[0x1fa] + 9) = 0;
  return;
}
