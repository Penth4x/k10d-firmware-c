/* @k10d reset_struct_fields_and_zero_tail @ 0x104be5b0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper on 12 fields of a struct and then zeroes several trailing bytes.
 * summary:
 *   Iterates three times, advancing by 0x30 each time, and calls zero_out_16_byte_buffer on
 *   four offsets (0, 0xc, 0x18, 0x24) within each 0x30 block starting at param_1+0xdf8c.
 *   After the loop it writes zero to a 4-byte region at param_1+0xeb8a and a single byte at
 *   param_1+0xeba0. The role of zero_out_16_byte_buffer is unknown, so the specific
 *   subsystem is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_struct_fields_and_zero_tail(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 3;
  iVar1 = 0;
  do {
    iVar3 = param_1 + 0xdf8c;
    zero_out_16_byte_buffer((void *)(iVar3 + iVar1));
    zero_out_16_byte_buffer((void *)(iVar3 + iVar1 + 0xc));
    zero_out_16_byte_buffer((void *)(iVar3 + iVar1 + 0x18));
    zero_out_16_byte_buffer((void *)(iVar3 + iVar1 + 0x24));
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 0x30;
  } while (-1 < iVar2);
  *(uint16_t *)(param_1 + 0xeb8a) = 0;
  *(uint16_t *)(param_1 + 0xeb8c) = 0;
  *(uint8_t *)(param_1 + 0xeb8e) = 0;
  *(uint8_t *)(param_1 + 0xeb8f) = 0;
  *(uint8_t *)(param_1 + 0xeba0) = 0;
  return;
}
