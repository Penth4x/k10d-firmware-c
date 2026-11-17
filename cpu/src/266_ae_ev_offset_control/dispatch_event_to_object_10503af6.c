/* @k10d dispatch_event_to_object_10503af6 @ 0x10503af6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Retrieves an event ID and dispatches it to a target object via a virtual call.
 * summary:
 *   The function calls get_or_init_sram_buffer_104277bc to obtain a context pointer and
 *   read_table_entry_field to get an event ID (0xca). It stores this ID at offset 0xc of
 *   the input object. It then performs a virtual call (slot 3) on an object pointer found
 *   at offset 0x10+4, passing the input object and a constant 0x80000013. Finally, it calls
 *   forward_three_args_to_helper_10459edc with a pointer to offset 0x18 and returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_event_to_object_10503af6(void *param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  int iVar3;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  uVar2 = read_table_entry_field(pvVar1,0xca);
  *(uint32_t *)((int)param_1 + 0xc) = uVar2;
  iVar3 = *(int *)(*(int *)((int)param_1 + 0x10) + 4);
  (**(code **)(iVar3 + 0x1c))
            (*(int *)((int)param_1 + 0x10) + 4 + (int)*(short *)(iVar3 + 0x18),(int)param_1 + 4,
             0x80000013/*SDRAM*/);
  forward_three_args_to_helper_10459edc((void *)((int)param_1 + 0x18),1,1);
  return 1;
}
