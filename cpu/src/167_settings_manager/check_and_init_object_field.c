/* @k10d check_and_init_object_field @ 0x10479de8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Retrieves an object, checks a flag at offset 2, and if set, initializes a field in
 *   param_1 and calls a setup routine.
 * summary:
 *   Calls find_matching_entry_in_table to get a pointer. If the pointer is non-null and the
 *   short at offset 2 is non-zero, it sets byte at param_1+0xea48 to 1, clears the short at
 *   offset 4 of the retrieved object, and calls forward_two_struct_fields with both
 *   pointers. Returns true if the retrieved pointer was non-null.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_and_init_object_field(int param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)find_matching_entry_in_table(__frv_reg_unset(4), __frv_reg_unset(5));
  if ((pvVar1 != 0) && (*(short *)((int)pvVar1 + 2) != 0)) {
    *(uint8_t *)(param_1 + 0xea48) = 1;
    *(uint16_t *)((int)pvVar1 + 4) = 0;
    forward_two_struct_fields(param_1,pvVar1);
  }
  return pvVar1 != 0;
}
