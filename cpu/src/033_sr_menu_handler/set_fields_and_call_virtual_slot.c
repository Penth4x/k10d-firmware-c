/* @k10d set_fields_and_call_virtual_slot @ 0x10372258
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 033_sr_menu_handler (unit names are model-proposed)
 * purpose:
 *   Sets two fields in a struct, calls a virtual method via vtable, then calls a helper
 *   function.
 * summary:
 *   The function writes the value 3 to offset 0x18 (param_1[6]) and 4 to offset 0x4c
 *   (param_1[0x13]) of the object pointed to by param_1. It then performs a virtual call
 *   using the vtable pointer at *param_1, specifically calling the method at vtable offset
 *   0x44 with a this-adjustment from the short at vtable offset 0x40. Finally, it calls
 *   init_object_with_offset_0x20 with the same object pointer. The caller is identified as
 *   virtual method slot 3 of class cls_10558104.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_fields_and_call_virtual_slot(int *param_1)

{
  param_1[6] = 3;
  param_1[0x13] = 4;
  (((vtbl_entry*)(*param_1))[8].fn)((int)((vtbl_entry*)(*param_1))[8].adj + (int)param_1);
  init_object_with_offset_0x20(param_1);
  return;
}
