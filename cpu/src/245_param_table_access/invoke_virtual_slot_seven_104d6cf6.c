/* @k10d invoke_virtual_slot_seven_104d6cf6 @ 0x104d6cf6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Constructs a temporary object and invokes virtual slot 7 with two parameters.
 * summary:
 *   The function calls an unknown routine at 0x104de094 and write_field_at_offset_0x2370
 *   with a constant 5. It then allocates a stack object of class cls_105ba0ac, sets a
 *   vtable pointer to 0x105ba1d8, and calls invoke_virtual_slot_on_two_objects_104d8c46
 *   (virtual slot 7) passing the object, param_2, and param_1. Finally, it calls another
 *   unknown routine at 0x104de82c and deletes the temporary object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_seven_104d6cf6(uint32_t param_1,uint32_t param_2)

{
  uintptr_t sp;
  uint8_t auStack_28 [28];
  uint32_t uStack_c;
  
  (*(code *)0x104de094/*ROM*/)(param_2);
  write_field_at_offset_0x2370(param_1,5);
  cls_105ba0ac_new(auStack_28);
  uStack_c = 0x105ba1d8/*ROM*/;
  invoke_virtual_slot_on_two_objects_104d8c46(auStack_28,param_2,param_1);
  (*(code *)0x104de82c/*ROM*/)(param_2);
  uStack_c = 0x105ba1d8/*ROM*/;
  cls_105ba0ac_delete(auStack_28,0);
  return 1;
}
