/* @k10d call_virtual_slot_8_after_init @ 0x10367e46
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 009_mode_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls an unknown helper then invokes virtual slot 8 of the object pointed to by
 *   param_1.
 * summary:
 *   The function first calls set_flag_pair_from_ram with the object pointer. It then
 *   performs a Cfront-style virtual call: it reads the vtable pointer at *param_1, indexes
 *   offset 0x44 (slot 8), and calls it with a this-adjustment read from *(short*)(*param_1
 *   + 0x40) added to the object pointer. The caller is identified as virtual method slot 3
 *   of class cls_105579a8, suggesting this is part of a class hierarchy, but the specific
 *   camera subsystem is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_virtual_slot_8_after_init(int *param_1)

{
  set_flag_pair_from_ram(param_1);
  (((vtbl_entry*)(*param_1))[8].fn)((int)((vtbl_entry*)(*param_1))[8].adj + (int)param_1);
  return;
}
