/* @k10d read_byte_at_offset_0x28 @ 0x10466fd8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 143_ui_task5_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t read_byte_at_offset_0x28(void *base_ptr)

{
  /* Zero-extended byte load at base_ptr + 0x28 (delay-slot ldub @(r13,r4),r4) */
  return *(uint8_t *)((int)base_ptr + 0x28);
}
