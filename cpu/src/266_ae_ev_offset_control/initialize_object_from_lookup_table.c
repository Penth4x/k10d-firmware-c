/* @k10d initialize_object_from_lookup_table @ 0x10504ed8
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Populates object fields from a lookup table and triggers two virtual callbacks.
 * summary:
 *   The function retrieves a pointer via get_or_init_sram_buffer_104277bc and uses
 *   read_table_entry_field to fetch four values (indices 0xc3-0xc6) into the object at
 *   offsets 0xc-0x18. It then performs two virtual calls on an object referenced at offset
 *   0x1c, passing 0x80000011 and 0x80000012 as arguments. Finally, it calls
 *   forward_three_args_to_helper_10459edc on two sub-objects at offsets 0x24 and 0x3c. The
 *   specific camera subsystem is not identifiable from the provided callees or constants.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_object_from_lookup_table(void *param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  int iVar3;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  uVar2 = read_table_entry_field(pvVar1,0xc3);
  *(uint32_t *)((int)param_1 + 0xc) = uVar2;
  uVar2 = read_table_entry_field(pvVar1,0xc4);
  *(uint32_t *)((int)param_1 + 0x10) = uVar2;
  uVar2 = read_table_entry_field(pvVar1,0xc5);
  *(uint32_t *)((int)param_1 + 0x14) = uVar2;
  uVar2 = read_table_entry_field(pvVar1,0xc6);
  *(uint32_t *)((int)param_1 + 0x18) = uVar2;
  iVar3 = *(int *)(*(int *)((int)param_1 + 0x1c) + 4);
  (**(code **)(iVar3 + 0x1c))
            (*(int *)((int)param_1 + 0x1c) + 4 + (int)*(short *)(iVar3 + 0x18),(int)param_1 + 4,
             0x80000011/*SDRAM*/);
  iVar3 = *(int *)(*(int *)((int)param_1 + 0x1c) + 4);
  (**(code **)(iVar3 + 0x1c))
            (*(int *)((int)param_1 + 0x1c) + 4 + (int)*(short *)(iVar3 + 0x18),(int)param_1 + 4,
             0x80000012/*SDRAM*/);
  forward_three_args_to_helper_10459edc((void *)((int)param_1 + 0x24),1,1);
  forward_three_args_to_helper_10459edc((void *)((int)param_1 + 0x3c),1,1);
  return 1;
}
