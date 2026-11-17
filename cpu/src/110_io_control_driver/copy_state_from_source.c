/* @k10d copy_state_from_source @ 0x1042e832
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 110_io_control_driver (unit names are model-proposed)
 * purpose:
 *   Copies six 32-bit fields from a source structure into param_1 and zeroes a trailing
 *   field.
 * summary:
 *   Calls initialize_singleton_object_1045d6a0 to obtain a source pointer, then copies
 *   words at offsets 0x1c, 0x20, 8, 0x24, and 0x10 into param_1 at offsets 0x60, 0x64,
 *   0x68, 0x6c, and 0x70 respectively. Calls wait_flg_obj to zero the 4 bytes at
 *   param_1+0x74. Returns 1. The specific subsystem role is not determinable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_state_from_source(int param_1, uint32_t param_x1)

{
  int iVar1;
  
  iVar1 = initialize_singleton_object_1045d6a0();
  *(uint32_t *)(param_1 + 0x60) = *(uint32_t *)(iVar1 + 0x1c);
  *(uint32_t *)(param_1 + 100) = *(uint32_t *)(iVar1 + 0x20);
  *(uint32_t *)(param_1 + 0x68) = *(uint32_t *)(iVar1 + 8);
  *(uint32_t *)(param_1 + 0x6c) = *(uint32_t *)(iVar1 + 0x24);
  *(uint32_t *)(param_1 + 0x70) = *(uint32_t *)(iVar1 + 0x10);
  wait_flg_obj((void *)(param_1 + 0x74),0);
  return 1;
}
