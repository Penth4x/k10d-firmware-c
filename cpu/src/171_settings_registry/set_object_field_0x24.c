/* @k10d set_object_field_0x24 @ 0x1047f774
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 171_settings_registry (unit names are model-proposed)
 * purpose:
 *   Writes the second argument into the byte at offset 0x24 of the object pointed to by the
 *   first argument.
 * summary:
 *   The function dereferences the first pointer parameter and stores the second parameter
 *   into the memory location at offset 0x24 relative to that base address. It is called as
 *   virtual method slot 2 of class cls_105aaf78. No other side effects or callees are
 *   present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_object_field_0x24(int *param_1,uint8_t param_2)

{
  *(uint8_t *)(*param_1 + 0x24) = param_2;
  return;
}
