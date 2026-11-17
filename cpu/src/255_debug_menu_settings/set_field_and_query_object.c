/* @k10d set_field_and_query_object @ 0x104ea590
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Sets a field at offset 0xc to 2, calls a helper on the object at offset 8, and clears
 *   the field if the helper returns 2 or 4.
 * summary:
 *   The function writes the constant 2 to the 4-byte field at param_1 + 0xc. It then
 *   dereferences the pointer at param_1 + 8 and passes it to
 *   invoke_object_method_with_three_words. If the return value from
 *   invoke_object_method_with_three_words is 2 or 4, the field at param_1 + 0xc is reset to
 *   0. The return value of invoke_object_method_with_three_words is returned to the caller.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int set_field_and_query_object(int param_1)

{
  int iVar1;
  
  *(uint32_t *)(param_1 + 0xc) = 2;
  iVar1 = invoke_object_method_with_three_words(*(int **)(param_1 + 8));
  if ((iVar1 == 4) || (iVar1 == 2)) {
    *(uint32_t *)(param_1 + 0xc) = 0;
  }
  return iVar1;
}
