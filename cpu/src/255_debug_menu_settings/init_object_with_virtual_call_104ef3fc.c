/* @k10d init_object_with_virtual_call_104ef3fc @ 0x104ef3fc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_virtual_call_104ef3fc(void *param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  int iVar3;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  uVar2 = read_table_entry_field(pvVar1,0xc2);
  *(uint32_t *)((int)param_1 + 0x10) = uVar2;
  iVar3 = *(int *)(*(int *)((int)param_1 + 0xc) + 4);
  (**(code **)(iVar3 + 0x1c))
            (*(int *)((int)param_1 + 0xc) + 4 + (int)*(short *)(iVar3 + 0x18),(int)param_1 + 4,
             0x80000014/*SDRAM*/);
  forward_three_args_to_helper_10459edc((void *)((int)param_1 + 0x18),1,1);
  return 1;
}
