/* @k10d init_object_flag_and_subobj @ 0x1040ad3a
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * purpose:
 *   Clears a byte at offset 0x68 and initializes a sub-object at offset 0x60 via two helper
 *   calls.
 * summary:
 *   The function takes a pointer to an object, writes zero to the byte at offset 0x68, then
 *   calls eventflag_clr_flg on the pointer at offset 0x60 with argument 2, and finally
 *   calls set_flg_obj on the same sub-object pointer. The specific role of the object and
 *   sub-object is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_flag_and_subobj(int param_1)

{
  *(uint8_t *)(param_1 + 0x68) = 0;
  eventflag_clr_flg((uint32_t *)(param_1 + 0x60),2);
  set_flg_obj((uint32_t *)(param_1 + 0x60), 0x1);
  return;
}
