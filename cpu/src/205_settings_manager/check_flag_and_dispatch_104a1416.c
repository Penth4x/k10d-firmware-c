/* @k10d check_flag_and_dispatch_104a1416 @ 0x104a1416
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a status flag and a magic value, then conditionally calls a handler.
 * summary:
 *   The function calls dispatch_event_by_code_104a1a96 to retrieve a status value. If the
 *   status is zero and the first short of param_2 equals 0xa302 (two's complement of
 *   -0x5cfe), it calls copy_bytes_to_rodata with the original parameters and returns 1.
 *   Otherwise, it returns 0. The specific subsystem is not identifiable from the provided
 *   pseudocode and unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_flag_and_dispatch_104a1416(cls_105b5cbc *param_1,short *param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 1;
  iVar1 = dispatch_event_by_code_104a1a96((uint32_t)param_1,(ushort *)(uint32_t)param_2);
  if (iVar1 == 0) {
    if (*param_2 == -0x5cfe) {
      copy_bytes_to_rodata((uint32_t)param_1,param_2);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
