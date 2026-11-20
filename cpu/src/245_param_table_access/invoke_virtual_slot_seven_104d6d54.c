/* @k10d invoke_virtual_slot_seven_104d6d54 @ 0x104d6d54
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Constructs a temporary object and invokes virtual slot 7 on it with two parameters.
 * summary:
 *   The function calls an unknown function at 0x104de094 and write_field_at_offset_0x2370
 *   with the first parameter and -1. It then allocates a stack object of class
 *   cls_105ba0ac, sets a vtable pointer to 0x105ba1d8, and calls
 *   invoke_virtual_slot_on_two_objects_104d8c46 (virtual slot 7) passing the object,
 *   param_2, and param_1. Finally, it calls 0x104de82c and deletes the temporary object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_seven_104d6d54(uint32_t param_1,uint32_t param_2)

{
  uintptr_t sp;
  cls_105ba0ac cStack_28;
  
  (*(code *)0x104de094/*ROM*/)(param_2);
  write_field_at_offset_0x2370(param_1,0xffffffff);
  cls_105ba0ac_new(&cStack_28);
  cStack_28.field_0x1c = 0x105ba1d8/*ROM*/;
  invoke_virtual_slot_on_two_objects_104d8c46(&cStack_28,param_2,param_1);
  (*(code *)0x104de82c/*ROM*/)(param_2);
  cStack_28.field_0x1c = 0x105ba1d8/*ROM*/;
  cls_105ba0ac_delete(&cStack_28,0);
  return 1;
}
