/* @k10d set_field_at_offset_c @ 0x1052c9ae
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 288_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes param_3 into the object field at offset 0xc plus param_2 via a helper call.
 * summary:
 *   The function dereferences param_1, adds 0xc, then adds param_2 to form an address, and
 *   passes that address along with param_3 and the constant 2 to write_little_endian_bytes.
 *   It is called from the constructor of cls_105fa6ac and from virtual slot 3 of the same
 *   class, suggesting it initializes or updates a member field. The role of
 *   write_little_endian_bytes is unknown, so the specific data being written cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_at_offset_c(void *param_1,int param_2,uint32_t param_3)

{
  write_little_endian_bytes(*(int *)((int)param_1 + 0xc) + param_2,param_3,2);
  return;
}
