/* @k10d init_object_with_event_id @ 0x10506da6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by storing a value from a helper and invoking a virtual method
 *   with a fixed ID.
 * summary:
 *   The function calls get_or_init_sram_buffer_104277bc to get a pointer, then passes it
 *   and the constant 199 to read_table_entry_field, storing the result at offset 0xc of the
 *   object. It then performs a virtual call on an object pointer found at offset 0x10 (slot
 *   3) with arguments including the object's offset 4 and the constant 0x8000000d. Finally,
 *   it calls forward_three_args_to_helper_10459edc with a pointer to offset 0x18 and two
 *   1s, returning 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_event_id(void *param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  int iVar3;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  uVar2 = read_table_entry_field(pvVar1,199);
  *(uint32_t *)((int)param_1 + 0xc) = uVar2;
  iVar3 = *(int *)(*(int *)((int)param_1 + 0x10) + 4);
  (**(code **)(iVar3 + 0x1c))
            (*(int *)((int)param_1 + 0x10) + 4 + (int)*(short *)(iVar3 + 0x18),(int)param_1 + 4,
             0x8000000d/*SDRAM*/);
  forward_three_args_to_helper_10459edc((void *)((int)param_1 + 0x18),1,1);
  return 1;
}
