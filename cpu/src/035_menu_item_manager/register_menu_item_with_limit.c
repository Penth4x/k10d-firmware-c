/* @k10d register_menu_item_with_limit @ 0x1038cc54
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Clamps a value to 100 and passes it to a setter function after resolving an object
 *   pointer.
 * summary:
 *   If param_2 is non-zero, it is clamped to a maximum of 100. The function calls
 *   menu_item_register with param_1 to obtain a pointer, then calls
 *   init_object_with_hash_and_flag with that pointer and the clamped value. The specific
 *   subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_item_with_limit(int param_1,uint param_2)

{
  void *pvVar1;
  
  if (param_2 != 0) {
    if (100 < (int)param_2) {
      param_2 = 100;
    }
    pvVar1 = (void *)menu_item_register(param_1);
    init_object_with_hash_and_flag(pvVar1,param_2 & 0xffff);
  }
  return;
}
