/* @k10d serialize_and_send_object @ 0x104e17d8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void serialize_and_send_object(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint8_t auStack_34 [4];
  uint8_t auStack_30 [2];
  uint8_t auStack_2e [2];
  uint8_t auStack_2c [4];
  uint8_t auStack_28 [20];
  uint32_t uStack_14;
  int iStack_10;
  uint16_t uStack_a;
  
  uStack_14 = 0xffffffff;
  uStack_a = 4;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  (**(code **)(param_1[2] + 0x24))((int)*(short *)(param_1[2] + 0x20) + (int)param_1);
  iStack_10 = param_1[8] * 4 + 0xc;
  copy_bytes_forward((uint8_t *)&iStack_10,auStack_34,4);
  copy_bytes_forward((uint8_t *)&uStack_a,auStack_30,2);
  copy_bytes_forward((uint8_t *)(param_1 + 3),auStack_2e,2);
  copy_bytes_forward((uint8_t *)&uStack_14,auStack_2c,4);
  iVar2 = 0;
  if (0 < (int)param_1[8]) {
    iVar1 = 0;
    do {
      copy_bytes_forward((uint8_t *)((int)param_1 + iVar1 + 0x10),auStack_28 + iVar1,4);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar2 < (int)param_1[8]);
  }
  iVar2 = bounded_byte_copy((uint *)*param_1,auStack_34,param_1[8] * 4 + 0xc,0);
  if (iVar2 == 1) {
    invoke_virtual_slot_5_104e18cc(param_1,iStack_10);
  }
  return;
}
