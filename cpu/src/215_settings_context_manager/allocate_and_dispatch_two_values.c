/* @k10d allocate_and_dispatch_two_values @ 0x104b4670
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_and_dispatch_two_values(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  void *pvVar1;
  uint32_t *puVar2;
  uint32_t *puVar3;
  uint32_t uVar4;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  puVar2 = (uint32_t *)heap_alloc_2(4);
  puVar3 = (uint32_t *)heap_alloc_2(4);
  uVar4 = read_table_entry_field(pvVar1,(uint)bRam105b8200);
  *puVar2 = uVar4;
  uVar4 = read_table_entry_field(pvVar1,(uint)bRam105b8201);
  *puVar3 = uVar4;
  forward_params_to_unnamed_callee(param_2,puVar2,puVar3,1);
  call_handler_with_fetched_arg_104b3e4a(param_3,1);
  heap_free_2((int)puVar3);
  heap_free_2((int)puVar2);
  return;
}
