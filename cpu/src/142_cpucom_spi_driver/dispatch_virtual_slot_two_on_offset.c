/* @k10d dispatch_virtual_slot_two_on_offset @ 0x1046570c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns 0 unless param_2 is 0xf, in which case calls virtual slot 2 of the object at
 *   param_1+4.
 * summary:
 *   This is virtual method slot 3 of class cls_105a7d14. It checks if the second argument
 *   equals 0xf; if so, it invokes virtual method slot 2 of the object located at param_1 +
 *   4 (via dispatch_single_subobj). Otherwise, it returns 0. The specific role of the 0xf
 *   condition and the target object is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_slot_two_on_offset(int param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (param_2 == 0xf) {
    uVar1 = dispatch_single_subobj(param_1 + 4);
  }
  return uVar1;
}
