/* @k10d write_buffer_via_virtual_io @ 0x10447ea4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_buffer_via_virtual_io(void *param_1,int param_2)

{
  uint32_t uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)((int)param_1 + 0x10c) + 4);
  uVar1 = (**(code **)(iVar3 + 0x6c))
                    (*(int *)((int)param_1 + 0x10c) + (int)*(short *)(iVar3 + 0x68));
  for (; param_2 != 0; param_2 = param_2 - uVar2) {
    uVar2 = clamp_value_to_max_1044742e(param_2,uVar1);
    iVar3 = *(int *)(*(int *)((int)param_1 + 0x10c) + 4);
    (**(code **)(iVar3 + 0x3c))
              (*(int *)((int)param_1 + 0x10c) + (int)*(short *)(iVar3 + 0x38),uVar2 & 0xffff);
  }
  return;
}
