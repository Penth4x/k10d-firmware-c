/* @k10d destroy_class_members_104d78aa @ 0x104d78aa
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Destroys the member objects of a class by calling their destructors in reverse offset
 *   order.
 * summary:
 *   The function takes a class instance pointer and a flag. It calls a series of member
 *   destructors at fixed offsets (0xd4 down to 0x00) within the object. If the second
 *   parameter's bit 0 is set, it frees the object's memory using heap_free. This pattern is
 *   typical of a C++ deleting destructor or a cleanup routine for a composite object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_class_members_104d78aa(int param_1,uint param_2)

{
  if (param_1 != 0) {
    free_heap_if_flagged_104d77ac(param_1 + 0xd4,2);
    free_heap_if_flag_set_104d76ae(param_1 + 0xc4,2);
    free_heap_if_flag_set_104d75b0(param_1 + 0xb4,2);
    free_heap_if_flag_set_104d74b0(param_1 + 0x44,2);
    free_heap_if_flag_set_104d72ba(param_1 + 0x30,2);
    free_heap_if_flag_set_104d71b0(param_1 + 0x14,2);
    free_heap_if_flagged_104d7094(param_1,2);
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
