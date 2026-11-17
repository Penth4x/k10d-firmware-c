/* @k10d write_byte_to_object_field_104ad87a @ 0x104ad87a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_byte_to_object_field_104ad87a(int param_1)

{
  uintptr_t sp;
  uint8_t uStack_9;
  
  uStack_9 = 0x80;
  copy_bytes_aligned((void *)(*(int *)(param_1 + 0x20) + 1), &uStack_9, 1, 0);
  return;
}
