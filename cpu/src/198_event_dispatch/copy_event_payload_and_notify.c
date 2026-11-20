/* @k10d copy_event_payload_and_notify @ 0x10493e24
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 198_event_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_event_payload_and_notify(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  *(uint16_t *)((int)param_1 + 0x16) = *(uint16_t *)((int)param_2 + 6);
  *(uint16_t *)(param_1 + 5) = *(uint16_t *)(param_2 + 1);
  iVar1 = 0;
  if (*param_2 == 0) {
    if (*(short *)((int)param_2 + 6) != 0) {
      do {
        *(uint8_t *)(param_1[4] + iVar1) = 0;
        iVar1 = iVar1 + 1;
      } while (iVar1 < (int)(uint)*(ushort *)((int)param_2 + 6));
    }
  }
  else if (*(short *)((int)param_2 + 6) != 0) {
    do {
      iVar2 = iVar1 + 1;
      *(uint8_t *)(iVar1 + param_1[4]) = *(uint8_t *)(iVar1 + *param_2);
      iVar1 = iVar2;
    } while (iVar2 < (int)(uint)*(ushort *)((int)param_2 + 6));
    iVar1 = *param_1;
    goto LAB_10493e80;
  }
  iVar1 = *param_1;
LAB_10493e80:
  (((vtbl_entry*)(*(int *)(iVar1 + 0x20)))[4].fn)
            (iVar1 + ((vtbl_entry*)(*(int *)(iVar1 + 0x20)))[4].adj,param_1 + 4);
  *(uint8_t *)((int)param_1 + 9) = 1;
  return;
}
