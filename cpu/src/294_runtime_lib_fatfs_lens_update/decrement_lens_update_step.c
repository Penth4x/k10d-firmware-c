/* @k10d decrement_lens_update_step @ 0x10538732
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10538770) overlaps instruction at (ram,0x1053876e)
    */

int decrement_lens_update_step(uint16_t param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = check_lens_fw_entry_present(param_2);
  if (iVar1 == 0) {
    piVar2 = *(int **)(param_2[3] + 100);
    switch(param_1) {
    case 1:
      *(ushort *)((int)piVar2 + 0xe) = *(ushort *)((int)piVar2 + 0xe) & 0xfeff;
      if (*(short *)((int)param_2 + 0x22) == 0) {
        return -0x16;
      }
      *(short *)((int)param_2 + 0x22) = *(short *)((int)param_2 + 0x22) + -1;
      break;
    case 2:
      if (*(short *)(param_2 + 9) == 0) {
        return -0x16;
      }
      *(short *)(param_2 + 9) = *(short *)(param_2 + 9) + -1;
      break;
    case 3:
      if (*(short *)(param_2 + 8) == 0) {
        return -0x16;
      }
      *(short *)(param_2 + 8) = *(short *)(param_2 + 8) + -1;
      break;
    case 4:
      if (*(short *)(param_2 + 10) == 0) {
        return -0x16;
      }
      *(short *)(param_2 + 10) = *(short *)(param_2 + 10) + -1;
      break;
    case 5:
      if (*(short *)((int)param_2 + 0x26) == 0) {
        return -0x16;
      }
      *(short *)((int)param_2 + 0x26) = *(short *)((int)param_2 + 0x26) + -1;
      break;
    case 6:
    case 9:
      if (*(short *)(param_2 + 0xc) == 0) {
        return -0x16;
      }
      *(short *)(param_2 + 0xc) = *(short *)(param_2 + 0xc) + -1;
      break;
    case 7:
    case 0xb:
      if (*(short *)((int)param_2 + 0x32) == 0) {
        return -0x16;
      }
      *(short *)((int)param_2 + 0x32) = *(short *)((int)param_2 + 0x32) + -1;
      break;
    case 8:
    case 10:
      if (*(short *)((int)param_2 + 0x36) == 0) {
        return -0x16;
      }
      *(short *)((int)param_2 + 0x36) = *(short *)((int)param_2 + 0x36) + -1;
      break;
    case 0xc:
    case 0xd:
      if (param_2[2] == 1) {
        if (*(short *)((int)param_2 + 0x2e) == 0) {
          return -0x16;
        }
        *(short *)((int)param_2 + 0x2e) = *(short *)((int)param_2 + 0x2e) + -1;
      }
      else if (param_2[2] == 2) {
        if (*(short *)((int)param_2 + 0x36) == 0) {
          return -0x16;
        }
        *(short *)((int)param_2 + 0x36) = *(short *)((int)param_2 + 0x36) + -1;
      }
      break;
    case 0xe:
      if (*(short *)((int)param_2 + 0x36) == 0) {
        return -0x16;
      }
      *(short *)((int)param_2 + 0x36) = *(short *)((int)param_2 + 0x36) + -1;
      break;
    case 0xf:
    case 0x13:
      if (*(short *)((int)param_2 + 0x2e) == 0) {
        return -0x16;
      }
      *(short *)((int)param_2 + 0x2e) = *(short *)((int)param_2 + 0x2e) + -1;
      break;
    case 0x10:
      if (param_2[2] == 1) {
        if (*(short *)(param_2 + 0xb) == 0) {
          return -0x16;
        }
        *(short *)(param_2 + 0xb) = *(short *)(param_2 + 0xb) + -1;
      }
      else if (param_2[2] == 2) {
        if (*(short *)(param_2 + 0xd) == 0) {
          return -0x16;
        }
        *(short *)(param_2 + 0xd) = *(short *)(param_2 + 0xd) + -1;
      }
      break;
    case 0x11:
    case 0x12:
      if (*(short *)(param_2 + 0xd) == 0) {
        return -0x16;
      }
      *(short *)(param_2 + 0xd) = *(short *)(param_2 + 0xd) + -1;
      break;
    case 0x14:
      if (*(short *)(param_2 + 0xb) == 0) {
        return -0x16;
      }
      *(short *)(param_2 + 0xb) = *(short *)(param_2 + 0xb) + -1;
      break;
    case 0x15:
      break;
    case 0x16:
      if (*(short *)((int)param_2 + 0x2a) == 0) {
        return -0x16;
      }
      *(short *)((int)param_2 + 0x2a) = *(short *)((int)param_2 + 0x2a) + -1;
      break;
    case 0x17:
      if (*(short *)(param_2 + 0xe) == 0) {
        return -0x16;
      }
      *(short *)(param_2 + 0xe) = *(short *)(param_2 + 0xe) + -1;
      break;
    case 0x18:
    case 0x19:
      if (*(short *)((int)param_2 + 0x32) == 0) {
        return -0x16;
      }
      *(short *)((int)param_2 + 0x32) = *(short *)((int)param_2 + 0x32) + -1;
      break;
    case 0x1a:
    case 0x1b:
      if (*(short *)((int)param_2 + 0x2e) == 0) {
        return -0x16;
      }
      *(short *)((int)param_2 + 0x2e) = *(short *)((int)param_2 + 0x2e) + -1;
      break;
    case 0x1c:
      if (*(short *)((int)param_2 + 0x36) == 0) {
        return -0x16;
      }
      *(short *)((int)param_2 + 0x36) = *(short *)((int)param_2 + 0x36) + -1;
      break;
    case 0x1d:
      if (*(short *)((int)param_2 + 0x32) == 0) {
        return -0x16;
      }
      *(short *)((int)param_2 + 0x32) = *(short *)((int)param_2 + 0x32) + -1;
      break;
    case 0x1e:
      if (*(short *)((int)param_2 + 0x2e) == 0) {
        return -0x16;
      }
      *(short *)((int)param_2 + 0x2e) = *(short *)((int)param_2 + 0x2e) + -1;
      break;
    default:
    }
    iVar1 = param_2[2];
    if (iVar1 == 0) {
      if ((uint)*(ushort *)((int)param_2 + 0x22) + (uint)*(ushort *)(param_2 + 8) +
          (uint)*(ushort *)(param_2 + 9) + (uint)*(ushort *)((int)param_2 + 0x26) +
          (uint)*(ushort *)(param_2 + 10) + (uint)*(ushort *)(param_2 + 0xe) != 0) {
        return 0;
      }
    }
    else if (iVar1 == 1) {
      if ((uint)*(ushort *)((int)param_2 + 0x2a) + (uint)*(ushort *)(param_2 + 0xb) +
          (uint)*(ushort *)((int)param_2 + 0x2e) != 0) {
        return 0;
      }
    }
    else if ((iVar1 == 2) &&
            ((uint)*(ushort *)(param_2 + 0xc) + (uint)*(ushort *)((int)param_2 + 0x32) +
             (uint)*(ushort *)((int)param_2 + 0x36) != 0)) {
      return 0;
    }
    *piVar2 = *piVar2 + -1;
    if ((int *)piVar2[1] == param_2) {
      piVar2[1] = param_2[1];
    }
    if ((int *)piVar2[2] == param_2) {
      piVar2[2] = *param_2;
    }
    if (*param_2 != 0) {
      *(int *)(*param_2 + 4) = param_2[1];
    }
    if ((int *)param_2[1] != (int *)0x0) {
      *(int *)param_2[1] = *param_2;
    }
    release_heap_block_1047f9bc(param_2);
    iVar1 = 0;
  }
  return iVar1;
}
