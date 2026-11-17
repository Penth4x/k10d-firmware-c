/* @k10d read_struct_field_by_flag_10506012 @ 0x10506012
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Returns a 4-byte field from a structure at an offset determined by a boolean flag.
 * summary:
 *   The function takes a base pointer (param_1) and a flag (param_2). If the flag is non-
 *   zero, it reads the 32-bit value at offset 0x18 from the base pointer; otherwise, it
 *   reads the value at offset 0x10. It returns this value. No other side effects or callees
 *   are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_struct_field_by_flag_10506012(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0x10;
  if (param_2 != 0) {
    iVar1 = 0x18;
  }
  return *(uint32_t *)(iVar1 + param_1);
}
