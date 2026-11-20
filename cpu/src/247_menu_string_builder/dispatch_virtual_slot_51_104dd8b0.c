/* @k10d dispatch_virtual_slot_51_104dd8b0 @ 0x104dd8b0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Invokes a sequence of helper functions with a parameter and two fixed data pointers.
 * summary:
 *   The function calls append_string_to_buffer with param_2 and a fixed address, then calls
 *   add_offset_to_pointer_104d6882 with param_3. It retrieves a value via
 *   add_offset_to_pointer_104d8ad0, processes it with read_field_at_offset_0x794, and
 *   passes the result to build_and_apply_param_string along with param_2 and in_r7. It
 *   concludes by calling append_string_to_buffer again with a different fixed address. The
 *   specific roles of the callees are unknown, so the operation is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_slot_51_104dd8b0(uint32_t param_1,int *param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t r7_in;
  
  append_string_to_buffer((int *)(param_2),(char *)(0x105baf44/*ROM*/));
  add_offset_to_pointer_104d6882(param_3);
  iVar1 = add_offset_to_pointer_104d8ad0(__frv_reg_unset(4));
  uVar2 = read_field_at_offset_0x794(iVar1);
  build_and_apply_param_string((int *)(param_2),(void *)(uVar2),(int)(1),(void *)(r7_in));
  append_string_to_buffer((int *)(param_2),(char *)(0x105baf50/*ROM*/));
  return;
}
