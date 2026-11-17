/* @k10d dispatch_virtual_event @ 0x105018a6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 265_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object stored in the struct and updates a status field.
 * summary:
 *   Retrieves a pointer via get_or_init_sram_buffer_104277bc and calls
 *   read_table_entry_field with argument 0xc9, storing the result at offset 0xc. It then
 *   performs a virtual call (slot 3) on the object at offset 0x10, passing the current
 *   struct and constant 0x80000016. Finally, it calls forward_three_args_to_helper_10459edc
 *   with the pointer at offset 0x18 and returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_event(void *param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  int iVar3;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  uVar2 = read_table_entry_field(pvVar1,0xc9);
  *(uint32_t *)((int)param_1 + 0xc) = uVar2;
  iVar3 = *(int *)(*(int *)((int)param_1 + 0x10) + 4);
  (**(code **)(iVar3 + 0x1c))
            (*(int *)((int)param_1 + 0x10) + 4 + (int)*(short *)(iVar3 + 0x18),(int)param_1 + 4,
             0x80000016/*SDRAM*/);
  forward_three_args_to_helper_10459edc((void *)((int)param_1 + 0x18),1,1);
  return 1;
}
