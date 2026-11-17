/* @k10d set_bit5_at_offset_0x2a @ 0x104436ea
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Sets or clears bit 5 of the byte at offset 0x2a in the object pointed to by param_1.
 * summary:
 *   The function reads the byte at param_1 + 0x2a. If param_2 is zero, it clears bit 5
 *   (mask 0xdf); otherwise it sets bit 5 (mask 0xdf | 0x20). It then calls
 *   call_helper_with_fixed_args_104437e0 with the object pointer and the modified byte
 *   value, likely to write the value back or trigger an update. The specific role of the
 *   flag at offset 0x2a is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_bit5_at_offset_0x2a(void *param_1,int param_2)

{
  byte bVar1;
  
  if (param_2 == 0) {
    bVar1 = *(byte *)((int)param_1 + 0x2a) & 0xdf;
  }
  else {
    bVar1 = *(byte *)((int)param_1 + 0x2a) & 0xdf | 0x20;
  }
  call_helper_with_fixed_args_104437e0(param_1,(uint)bVar1);
  return;
}
