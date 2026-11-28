/* @k10d get_or_init_sram_buffer_104277bc @ 0x104277bc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 104_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

/* Lazy-init singleton: on first call, allocate the 3072-byte SRAM buffer
   and register it in the free-list; always returns the buffer base address. */
uint32_t get_or_init_sram_buffer_104277bc(void)

{
  if (_DAT_8001de24/*SDRAM*/ == 0) {
    _DAT_8001de24/*SDRAM*/ = 1;
    alloc_3072_byte_buffer(0x8001d224/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fc2c/*SDRAM*/);
  }
  return 0x8001d224/*SDRAM*/;
}
