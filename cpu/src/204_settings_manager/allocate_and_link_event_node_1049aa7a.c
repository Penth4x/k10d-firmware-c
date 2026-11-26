/* @k10d allocate_and_link_event_node_1049aa7a @ 0x1049aa7a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 204_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a node via alloc_dynamic_array_header, initializes its fields with
 *   parameters, and links it into a structure at param_1+8.
 * summary:
 *   The function calls alloc_dynamic_array_header(0,1) to obtain a pointer to a newly
 *   allocated or retrieved structure. It writes param_2 to offset 8, the constant 2 to
 *   offset 4, and the address of param_3 to offset 0xc of this structure. Finally, it calls
 *   reg_framework_send with param_1+8 as an argument, likely to insert or update the node
 *   in a list or queue associated with param_1. The specific subsystem (e.g., event queue,
 *   task control) is not determinable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_and_link_event_node_1049aa7a(int param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  
  iVar1 = (uintptr_t)(alloc_dynamic_array_header(0,1));
  *(uint32_t *)(iVar1 + 8) = param_2;
  *(uint32_t *)(iVar1 + 4) = 2;
  **(uint32_t **)(iVar1 + 0xc) = param_3;
  reg_framework_send(param_1 + 8, (void *)iVar1, 0x2);
  return;
}
