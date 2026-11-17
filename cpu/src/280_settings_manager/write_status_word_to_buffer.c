/* @k10d write_status_word_to_buffer @ 0x1052237c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t write_status_word_to_buffer(int param_1,int param_2,int param_3)

{
  uint8_t uVar1;
  int iVar2;
  uint8_t *puVar3;
  
  puVar3 = *(uint8_t **)(param_1 + 0x18);
  if (param_2 == 0x1000000) {
    iVar2 = (*(code *)0x1046c7e2/*ROM*/)(*(uint32_t *)(param_1 + 8));
    iVar2 = iVar2 << 2;
    *puVar3 = (char)iVar2;
    puVar3[1] = (char)((uint)iVar2 >> 8);
    puVar3[2] = (char)((uint)iVar2 >> 0x10);
    puVar3[3] = (char)((uint)iVar2 >> 0x18);
    if ((param_3 != 0) || (uVar1 = 1, iVar2 == 0)) {
      uVar1 = 0;
    }
    puVar3[6] = uVar1;
  }
  puVar3[7] = (char)param_3;
  *(uint8_t *)(param_1 + 0x20) = 0;
  return 0;
}
