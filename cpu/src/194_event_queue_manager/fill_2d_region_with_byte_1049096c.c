/* @k10d fill_2d_region_with_byte_1049096c @ 0x1049096c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void fill_2d_region_with_byte_1049096c(uint32_t param_1,int param_2,int param_3,int param_4,uint8_t param_5,
                 ushort param_6)

{
  uint8_t *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_3) {
    iVar3 = 0;
    do {
      puVar1 = (uint8_t *)(param_4 + iVar3);
      iVar2 = 0;
      if (param_6 != 0) {
        do {
          iVar2 = iVar2 + 1;
          *puVar1 = param_5;
          puVar1 = puVar1 + 1;
        } while (iVar2 < (int)(uint)param_6);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + param_2;
    } while (iVar4 < param_3);
  }
  return;
}
