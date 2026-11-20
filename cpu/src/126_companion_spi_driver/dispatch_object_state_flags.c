/* @k10d dispatch_object_state_flags @ 0x10440db4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Checks flag bits in an object field and conditionally invokes virtual method slot 2 and
 *   a helper function.
 * summary:
 *   The function reads a byte from offset 0x2c of the object pointed to by param_1. It
 *   tests specific bit patterns (bit 1, bits 5-7, bit 0, bit 3) to determine control flow.
 *   If bit 1 is set, it calls dispatch_single_subobj (virtual slot 2) with param_1+8. If
 *   bits 5-7 are also set, it calls clear_bit_2_of_flag_at_offset_0x24. If bit 0 and bit 3
 *   are set, it calls dispatch_single_subobj again. The return value is the result of the
 *   last virtual call or 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105a0b94": ignoring multiple overlapping fields */

uint32_t dispatch_object_state_flags(cls_105a0b94 *param_1)

{
  byte bVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  bVar1 = *(byte *)param_1->field_0x2c;
  if (((bVar1 & 2) != 0) && (uVar2 = dispatch_single_subobj(&param_1->field_0x8), (bVar1 & 0xe0) != 0)) {
    clear_bit_2_of_flag_at_offset_0x24((int)(param_1));
  }
  if (((bVar1 & 1) != 0) && ((bVar1 & 8) != 0)) {
    uVar2 = dispatch_single_subobj(&param_1->field_0x8);
  }
  return uVar2;
}
