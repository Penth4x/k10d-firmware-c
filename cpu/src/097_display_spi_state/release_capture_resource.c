/* @k10d release_capture_resource @ 0x1041dc8e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_capture_resource(void *param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  
  if (*(int *)((int)param_1 + 0xb8) != 0) {
    iVar3 = *(int *)(*(int *)((int)param_1 + 0x2c) + 4);
    (((vtbl_entry*)(iVar3))[18].fn)(*(int *)((int)param_1 + 0x2c) + (int)((vtbl_entry*)(iVar3))[18].adj,0);
    *(uint32_t *)((int)param_1 + 0xb8) = 0;
    pvVar2 = *(void **)((int)param_1 + 0x44);
    uVar1 = read_bounded_array_element_1051d696(pvVar2,0);
    update_camera_state_flags(pvVar2,0,uVar1 & 0xffff | 4);
  }
  return;
}
