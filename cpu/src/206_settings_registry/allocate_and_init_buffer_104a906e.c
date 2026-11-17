/* @k10d allocate_and_init_buffer_104a906e @ 0x104a906e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Allocates a memory block from a pool if the object's buffer pointer is null and
 *   initializes it.
 * summary:
 *   Checks if the pointer at offset 0xc of param_1 is null. If so, it calls
 *   mempool_get_block to allocate a block from pool 2 of the heap descriptor at
 *   _DAT_8004907c, stores the result in the object, and calls fill_byte_array to initialize
 *   the new block with param_2. This appears to be a lazy initialization routine for a
 *   buffer within an object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void allocate_and_init_buffer_104a906e(void *param_1,void *param_2)

{
  void *pvVar1;
  
  if (*(int *)((int)param_1 + 0xc) == 0) {
    pvVar1 = (void *)mempool_get_block((void *)_DAT_8004907c/*SDRAM*/,param_2,2);
    *(void **)((int)param_1 + 0xc) = pvVar1;
    fill_byte_array(pvVar1,0,(int)param_2);
  }
  return;
}
