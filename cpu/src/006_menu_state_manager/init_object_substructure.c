/* @k10d init_object_substructure @ 0x10365cb4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 006_menu_state_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a field at offset 0x14 and calls four helpers on a sub-structure at offset
 *   0x18.
 * summary:
 *   The function writes zero to the 4-byte field at offset 0x14 of the object passed in
 *   param_1. It then derives a pointer to offset 0x18 and passes it to
 *   register_ten_menu_items_1037bee4 along with a byte value from offset 0x80. It
 *   subsequently calls register_two_menu_items_1037bc0e on the sub-structure pointer, calls
 *   call_helper_on_struct_field_1036c46c with no arguments, and finally calls
 *   call_helper_on_struct_field_1036c41a with the original object, the sub-structure
 *   pointer, and the constant 1. The specific roles of the callees are unknown, but the
 *   pattern suggests a multi-step initialization or setup routine for an object and its
 *   internal components.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_substructure(void *param_1)

{
  void *pvVar1;
  
  *(uint32_t *)((int)param_1 + 0x14) = 0;
  pvVar1 = (void *)((int)param_1 + 0x18);
  register_ten_menu_items_1037bee4((int)pvVar1,(uint)*(byte *)((int)param_1 + 0x80));
  register_two_menu_items_1037bc0e((int)pvVar1);
  call_helper_on_struct_field_1036c46c();
  call_helper_on_struct_field_1036c41a(param_1,pvVar1,1);
  return;
}
