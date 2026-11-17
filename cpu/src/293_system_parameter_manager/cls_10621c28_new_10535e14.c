/* @k10d cls_10621c28_new_10535e14 @ 0x10535e14
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Constructs a cls_10621c28 object by heap-allocating it and three sub-arrays, then
 *   calling an init routine.
 * summary:
 *   Allocates 0x14 bytes for the object (or uses the provided pointer), then allocates
 *   three sub-arrays sized by globals _DAT_8005b1d4, _DAT_8005b1d8, and _DAT_8005b1dc.
 *   Stores the pointers in the first three fields, zeros the next two, and calls
 *   initialize_sysparam_store_fields to complete initialization. Returns the object
 *   pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t * cls_10621c28_new_10535e14(uint32_t *param_1)

{
  uint32_t uVar1;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x14), param_1 != (uint32_t *)0x0)) {
    uVar1 = heap_alloc_2(_DAT_8005b1d4/*SDRAM*/ << 2);
    *param_1 = uVar1;
    uVar1 = heap_alloc_2(_DAT_8005b1d8/*SDRAM*/ << 2);
    param_1[1] = uVar1;
    uVar1 = heap_alloc_2(_DAT_8005b1dc/*SDRAM*/ << 2);
    param_1[2] = uVar1;
    param_1[3] = 0;
    param_1[4] = 0;
    initialize_sysparam_store_fields(param_1);
  }
  return param_1;
}
