/* @k10d release_object_and_free_payload @ 0x104a8ba8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Nulls a vtable pointer, frees a heap block stored at offset 0xc, and optionally calls a
 *   cleanup routine.
 * summary:
 *   This function acts as a destructor or release routine for an object. It sets the vtable
 *   pointer at offset 0x10 to &DAT_105b6a30 (likely a null or base vtable) and calls
 *   mempool_release_block on the pointer stored at offset 0xc. If the second argument's
 *   least significant bit is set, it calls release_mempool_block_104a8e60, which likely
 *   performs additional cleanup or deallocation of internal resources.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void release_object_and_free_payload(void *param_1,uint param_2)

{
  if (param_1 != 0) {
    *(void **)((int)param_1 + 0x10) = &DAT_105b6a30/*ROM*/;
    mempool_release_block((void *)(_DAT_8004907c/*SDRAM*/),(void *)(*(void **)((int)param_1 + 0xc)));
    if ((param_2 & 1) != 0) {
      release_mempool_block_104a8e60(param_1);
    }
  }
  return;
}
