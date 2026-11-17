/* @k10d compute_exposure_time_from_meter @ 0x104bb842
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint compute_exposure_time_from_meter(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  void *pvVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((iVar1 == 0) || (iVar1 == 2)) {
    pvVar3 = (void *)(param_1 + 8);
  }
  else {
    if ((iVar1 != 1) && (iVar1 != 3)) {
      uVar4 = 0;
      goto LAB_104bb876;
    }
    pvVar3 = (void *)(param_1 + 0x10);
  }
  uVar4 = read_struct_field_at_offset_4(pvVar3);
LAB_104bb876:
  uVar4 = ((uVar4 / 0xf) * 100) / (uint)*(ushort *)(param_1 + 0x32);
  if (uVar4 < 9) {
    uVar4 = 4;
    uVar2 = 4;
  }
  else {
    uVar2 = 8;
  }
  *(uint32_t *)(param_1 + 0x54) = uVar2;
  return uVar4;
}
