/* @k10d get_system_heap @ 0x10459b3e
 * name: verified (structural evidence: decomp; used by heap_alloc and heap_free)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Returns the system heap descriptor at 0x8002eff8, initialising it on first call.
 * summary:
 *   VERIFIED: decomp; used by heap_alloc and heap_free
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_system_heap(void)

{
  if (_DAT_8002f088/*SDRAM*/ == 0) {
    _DAT_8002f088/*SDRAM*/ = 1;
    alloc_and_init_0x90_block((void *)0x8002eff8/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fe20/*SDRAM*/);
  }
  return 0x8002eff8/*SDRAM*/;
}
