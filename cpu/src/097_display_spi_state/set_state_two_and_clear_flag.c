/* @k10d set_state_two_and_clear_flag @ 0x1041dc36
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_state_two_and_clear_flag(int param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xb8) != 2) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x2c) + 4);
    (**(code **)(iVar3 + 0x94))(*(int *)(param_1 + 0x2c) + (int)*(short *)(iVar3 + 0x90),1);
    *(uint32_t *)(param_1 + 0xb8) = 2;
    pvVar2 = *(void **)(param_1 + 0x44);
    uVar1 = read_bounded_array_element_1051d696(pvVar2,0);
    update_camera_state_flags(pvVar2,0,uVar1 & 0xfffb);
  }
  return;
}
