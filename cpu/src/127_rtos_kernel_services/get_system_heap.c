/* @k10d get_system_heap @ 0x10459b3e
 * name: verified (structural evidence: decomp; used by heap_alloc and heap_free)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Returns the system heap descriptor pointer, initializing it once on first call.
 * summary:
 *   Checks the flag at 0x8002f088; if zero, sets it to 1, calls alloc_and_init_0x90_block
 *   with the heap descriptor address 0x8002eff8, and prepends 0x8000fe20 to a singly linked
 *   list. Always returns 0x8002eff8. The module context (rtos_wrappers_and_heap) and
 *   callers (font_expand_plane, cls constructors/destructors) confirm this is the heap
 *   accessor used for memory allocation.
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
