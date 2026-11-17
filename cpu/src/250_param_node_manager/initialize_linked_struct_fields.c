/* @k10d initialize_linked_struct_fields @ 0x104df9c6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Writes a fixed set of initial values and copies two fields from a parent struct into a
 *   linked child struct.
 * summary:
 *   The function checks if the second pointer in param_1 is non-null. If so, it sets offset
 *   0xc to 0xc, offset 0x10 to param_2, and copies values from offsets 8 and 0xc of the
 *   first struct pointed to by *param_1 into offsets 0x14 and 0x18 of the child struct. It
 *   also zeroes offsets 0x30 and 0x34. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_linked_struct_fields(int *param_1,uint16_t param_2)

{
  if (param_1[1] != 0) {
    *(uint32_t *)(param_1[1] + 0xc) = 0xc;
    *(uint16_t *)(param_1[1] + 0x10) = param_2;
    *(uint32_t *)(param_1[1] + 0x14) = *(uint32_t *)(*param_1 + 8);
    *(uint32_t *)(param_1[1] + 0x18) = *(uint32_t *)(*param_1 + 0xc);
    *(uint32_t *)(param_1[1] + 0x30) = 0;
    *(uint32_t *)(param_1[1] + 0x34) = 0;
  }
  return;
}
