/* @k10d get_or_init_global_buffer @ 0x1047f01c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Lazily initializes a global state flag and two associated buffers on first call, then
 *   returns a pointer to the primary buffer.
 * summary:
 *   Checks if the global flag at 0x80048838 is zero. If so, sets it to 1, calls
 *   alloc_one_byte_if_null_1047f0fe with the address of 0x80048834, and calls
 *   prepend_to_singly_linked_list with the address of 0x80010020. Finally, returns the
 *   value stored at 0x80048834. The callees are not named, so the specific subsystem (e.g.,
 *   image pipeline, metering) cannot be determined from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_global_buffer(void)

{
  if (_DAT_80048838/*SDRAM*/ == 0) {
    _DAT_80048838/*SDRAM*/ = 1;
    alloc_one_byte_if_null_1047f0fe(0x80048834/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80010020/*SDRAM*/);
  }
  return 0x80048834/*SDRAM*/;
}
