/* @k10d allocate_kernel_object_1000e4e0 @ 0x1000e4e0
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Allocates a kernel object of size param_1 from the SDRAM heap and initializes its
 *   header fields.
 * summary:
 *   Checks a kernel state via rtos_can_dispatch and validates that param_1 is a valid SDRAM
 *   address (>= 0x80000000). If valid, it calls ready_list_unlink to obtain a pointer from
 *   _DAT_6a003758, writes specific header values (4 and 1) at offsets 0x6a001c06 and
 *   0x6a001c07 relative to the object base, and calls subtract_timeout_from_queue with
 *   param_1. Returns 0 on success or negative error codes (0xffffffef or 0xffffffe7) on
 *   failure. The module context suggests this is a kernel service routine for object
 *   management.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t allocate_kernel_object_1000e4e0(uint param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = rtos_can_dispatch();
  if (iVar1 == 0) {
    if (param_1 < 0x80000000/*SDRAM*/) {
      ready_list_unlink(_DAT_6a003758);
      iVar1 = (int)_DAT_6a003758;
      *(uint8_t *)(_DAT_6a003758 * 0x44 + 0x6a001c06) = 4;
      *(uint8_t *)(iVar1 * 0x44 + 0x6a001c07) = 1;
      subtract_timeout_from_queue(param_1);
      uVar2 = 0;
    }
    else {
      uVar2 = E_PAR;
    }
  }
  else {
    uVar2 = E_CTX;
  }
  return uVar2;
}
