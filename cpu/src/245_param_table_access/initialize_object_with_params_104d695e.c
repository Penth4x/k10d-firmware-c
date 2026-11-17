/* @k10d initialize_object_with_params_104d695e @ 0x104d695e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling three setup functions and invoking a virtual method on
 *   a temporary class instance.
 * summary:
 *   The function calls three unnamed initialization routines (write_field_at_offset_0x2370,
 *   store_value_at_offset_0x2b10, write_offset_0x2374_field) with the first parameter and
 *   various other arguments. It then constructs a temporary object of class cls_105ba0ac,
 *   sets a vtable pointer, and calls virtual slot 7
 *   (invoke_virtual_slot_on_two_objects_104d8c46) passing param_2 and param_1. Finally, it
 *   destroys the temporary object and returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_object_with_params_104d695e(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  uintptr_t sp;
  uint8_t auStack_28 [28];
  uint32_t uStack_c;
  
  (*(code *)0x104de094/*ROM*/)();
  write_field_at_offset_0x2370(param_1,1);
  store_value_at_offset_0x2b10(param_1,param_3);
  write_offset_0x2374_field(param_1,param_4);
  cls_105ba0ac_new(auStack_28);
  uStack_c = 0x105ba1d8/*ROM*/;
  invoke_virtual_slot_on_two_objects_104d8c46(auStack_28,param_2,param_1);
  (*(code *)0x104de82c/*ROM*/)(param_2);
  uStack_c = 0x105ba1d8/*ROM*/;
  cls_105ba0ac_delete(auStack_28,0);
  return 1;
}
