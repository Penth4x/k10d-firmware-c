/* @k10d get_or_init_heap_block @ 0x1045a25a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_heap_block(void)

{
  if (_DAT_8002f090/*SDRAM*/ == 0) {
    _DAT_8002f090/*SDRAM*/ = 1;
    heap_alloc_one_byte_1045a22e(0x8002f08c/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fe34/*SDRAM*/);
  }
  return 0x8002f08c/*SDRAM*/;
}
