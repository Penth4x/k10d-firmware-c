/* @k10d allocate_and_init_struct_1047cca4 @ 0x1047cca4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a structure via a helper and initializes its fields with the provided
 *   parameters.
 * summary:
 *   Calls alloc_dynamic_array_header with arguments 0 and 1 to obtain a pointer to a newly
 *   allocated or retrieved object. Writes param_2 to offset 8, 0 to offset 4, and the
 *   address of param_3 to offset 0xc of the allocated object. Finally, calls
 *   reg_framework_send with param_1 + 8 as an argument.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_and_init_struct_1047cca4(cls_105aaa50 *param_1,uint32_t param_2,uint32_t param_3)

{
  int *pIVar1;
  
  pIVar1 = alloc_dynamic_array_header(0,1);
  *(uint32_t *)((int)pIVar1 + 8) = param_2;
  *(uint32_t *)((int)pIVar1 + 4) = 0;
  **(uint32_t **)((int)pIVar1 + 0xc) = param_3;
  reg_framework_send((int)&param_1->field_0x8);
  return;
}
