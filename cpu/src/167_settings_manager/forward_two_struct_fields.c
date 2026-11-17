/* @k10d forward_two_struct_fields @ 0x1047a332
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes two pointers from offsets 0x34 and 0x38 of param_2 to a helper along with
 *   param_1.
 * summary:
 *   This function is a thin wrapper that extracts two void pointers from a structure
 *   pointed to by param_2 (at offsets 0x34 and 0x38) and forwards them, along with param_1,
 *   to link_list_node. It performs no other operations or side effects. The specific role
 *   of the data or the helper is not determinable from the provided pseudocode and unknown
 *   callee name.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_two_struct_fields(int param_1,void *param_2)

{
  link_list_node(param_1,*(void **)((int)param_2 + 0x34),*(void **)((int)param_2 + 0x38));
  return;
}
