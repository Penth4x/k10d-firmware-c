/* @k10d write_three_entries_if_flag_not_one @ 0x10469bd0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Writes three 7-byte entries to param_1 via forward_params_to_helper_1046a5be when
 *   param_2 is not 1.
 * summary:
 *   Checks if param_2 equals 1; if not, calls forward_params_to_helper_1046a5be three times
 *   with indices 0, 1, and 2. Each call passes param_1, the index, a value derived from
 *   _DAT_800042d0 + 1, a pointer to a distinct rodata location (0x105a8398, 0x105a83ac,
 *   0x105a83b4), and the length 7. The function appears to initialize or update a table of
 *   three entries.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_three_entries_if_flag_not_one(void *param_1,int param_2)

{
  ushort uVar1;
  uintptr_t sp;
  uint8_t *puVar2;
  uint8_t auStackY_14 [2];
  
  puVar2 = auStackY_14;
  if (param_2 != 1) {
    forward_params_to_helper_1046a5be(param_1,0,(uint)(ushort)(_DAT_800042d0/*SDRAM*/ + 1),(void *)&DAT_105a8398/*ROM*/,7);
    uVar1 = _DAT_800042d0/*SDRAM*/ + 1;
    *(uint16_t *)(puVar2 + 2) = 7;
    forward_params_to_helper_1046a5be(param_1,1,(uint)uVar1,(void *)&DAT_105a83ac/*ROM*/,*(uint16_t *)(puVar2 + 2));
    uVar1 = _DAT_800042d0/*SDRAM*/ + 1;
    *(uint16_t *)(puVar2 + 2) = 7;
    forward_params_to_helper_1046a5be(param_1,2,(uint)uVar1,(void *)&DAT_105a83b4/*ROM*/,*(uint16_t *)(puVar2 + 2));
  }
  return;
}
