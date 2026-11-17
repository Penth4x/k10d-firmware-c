/* @k10d invoke_virtual_slot_seven_104d69c8 @ 0x104d69c8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Initializes a temporary object and invokes its virtual method slot 7 with two
 *   parameters.
 * summary:
 *   The function calls two unnamed helpers with the input parameters, then constructs a
 *   temporary object on the stack (cls_105ba0ac). It sets a vtable pointer (0x105ba1d8) and
 *   calls invoke_virtual_slot_on_two_objects_104d8c46, which is verified to be virtual slot
 *   7 of class cls_105ba1b8. Finally, it calls another helper, deletes the temporary
 *   object, and returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_seven_104d69c8(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  uintptr_t sp;
  uint8_t auStack_28 [28];
  uint32_t uStack_c;
  
  (*(code *)0x104de094/*ROM*/)(param_2);
  write_field_at_offset_0x2370(param_1,1);
  store_value_at_offset_0x2b10(param_1,param_3);
  cls_105ba0ac_new(auStack_28);
  uStack_c = 0x105ba1d8/*ROM*/;
  invoke_virtual_slot_on_two_objects_104d8c46(auStack_28,param_2,param_1);
  (*(code *)0x104de82c/*ROM*/)(param_2);
  uStack_c = 0x105ba1d8/*ROM*/;
  cls_105ba0ac_delete(auStack_28,0);
  return 1;
}
