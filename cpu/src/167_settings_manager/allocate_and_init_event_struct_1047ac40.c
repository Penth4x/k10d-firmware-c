/* @k10d allocate_and_init_event_struct_1047ac40 @ 0x1047ac40
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a struct via alloc_dynamic_array_header, initializes its fields with
 *   parameters, and passes a related pointer to reg_framework_send.
 * summary:
 *   Calls alloc_dynamic_array_header(0,1) to obtain a pointer, likely a heap allocation or
 *   object creation. Writes param_2 to offset 8, the constant 1 to offset 4, and param_3 to
 *   the address stored at offset 0xc. Finally, calls reg_framework_send with param_1 + 4.
 *   The specific subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_and_init_event_struct_1047ac40(int param_1,uint32_t param_2,uint32_t param_3)

{
  int * iVar1;
  
  iVar1 = alloc_dynamic_array_header(0,1);
  *(uint32_t *)(iVar1 + 8) = param_2;
  *(uint32_t *)(iVar1 + 4) = 1;
  **(uint32_t **)(iVar1 + 0xc) = param_3;
  reg_framework_send(param_1 + 4, (void *)iVar1, 0x2);
  return;
}
