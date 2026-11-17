/* @k10d map_index_to_bitmask @ 0x1046e3d8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 158_sr_dma_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_index_to_bitmask(int param_1)

{
  uint32_t uVar1;
  uintptr_t sp;
  uint8_t auStack_14 [12];
  
  cls_105a6f84_new((void *)auStack_14);
  copy_eight_bytes_from_struct(*(int *)(param_1 + 0x30),(void *)auStack_14);
  uVar1 = invoke_virtual_slot_two_10460a5c((void *)auStack_14);
  switch(uVar1) {
  case 0:
    uVar1 = 0;
    break;
  case 1:
    uVar1 = 0x80;
    break;
  case 2:
    uVar1 = 0x100;
    break;
  case 3:
    uVar1 = 0x200;
    break;
  case 4:
    uVar1 = 0x400;
    break;
  case 5:
    uVar1 = 0x800;
    break;
  case 6:
    uVar1 = 0x1000;
    break;
  case 7:
    uVar1 = 0x2000;
    break;
  case 8:
    uVar1 = 0x4000;
    break;
  default:
    uVar1 = 0;
  }
  cls_105a6f84_delete((void *)auStack_14,2);
  return uVar1;
}
