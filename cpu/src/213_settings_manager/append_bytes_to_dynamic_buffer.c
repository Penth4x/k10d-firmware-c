/* @k10d append_bytes_to_dynamic_buffer @ 0x104ad444
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint append_bytes_to_dynamic_buffer(int *param_1,uint32_t *param_2,uint param_3)

{
  uint32_t *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uintptr_t sp;
  uint32_t uStack_c;
  
  uVar4 = 0;
  if ((*param_1 != 0) && ((param_1[3] & 3U) == 0)) {
    uVar4 = param_1[1] - param_1[3];
    if (param_3 <= uVar4) {
      uVar4 = param_3;
    }
    iVar2 = extract_bitfield_with_offset(uVar4,4,0);
    iVar3 = extract_bitfield_with_offset(param_1[3],4,0);
    puVar1 = (uint32_t *)(*param_1 + iVar3 * 4);
    if (iVar2 != 0) {
      iVar2 = iVar2 + -3;
      if (2 < iVar2) {
        do {
          *puVar1 = *param_2;
          puVar1[1] = *param_2;
          puVar1[2] = *param_2;
          iVar2 = iVar2 + -3;
          puVar1 = puVar1 + 3;
        } while (-1 < iVar2);
      }
      for (iVar2 = iVar2 + 2; -1 < iVar2; iVar2 = iVar2 + -1) {
        *puVar1 = *param_2;
        puVar1 = puVar1 + 1;
      }
    }
    if ((uVar4 & 3) != 0) {
      uStack_c = *param_2;
      copy_bytes_aligned((void *)puVar1,(void *)&uStack_c,uVar4 & 3,0);
    }
    param_1[3] = param_1[3] + uVar4;
  }
  return uVar4;
}
