/* @k10d validate_lens_fw_update_offset @ 0x1053f70e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Removing unreachable block (ram,0x1053f790) */

int validate_lens_fw_update_offset(uint32_t param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uintptr_t sp;
  uint in_stack_00000010;
  ushort in_stack_00000016;
  int *in_stack_00000018;
  int *piStack_c;
  
  if ((2 < in_stack_00000016) || (in_stack_00000018 == (int *)0x0)) {
    return -0x16;
  }
  iVar2 = (*(code *)0x10538c70/*ROM*/)(param_1,&piStack_c);
  if (iVar2 != 0) {
    return iVar2;
  }
  if (*(int *)(*piStack_c + 8) != 2) {
    return -9;
  }
  *in_stack_00000018 = piStack_c[7];
  iVar2 = *(int *)(*piStack_c + 0xc);
  if (*(short *)(*(int *)(iVar2 + 100) + 0xe) != 0) {
    return -6;
  }
  iVar5 = 0;
  if (in_stack_00000016 == 0) {
    uVar7 = 0;
  }
  else if (in_stack_00000016 == 2) {
    uVar7 = piStack_c[4];
  }
  else {
    uVar7 = piStack_c[7];
  }
  uVar1 = uVar7 + in_stack_00000010;
  if ((int)in_stack_00000010 < 0) {
    if (uVar7 < uVar1) {
      iVar5 = -0x1d;
      goto LAB_1053f8c8;
    }
  }
  else if (-uVar7 - 1 < in_stack_00000010) {
    iVar5 = -0x1d;
    goto LAB_1053f8c8;
  }
  if ((uint)piStack_c[4] < uVar1) {
    piStack_c[8] = piStack_c[6];
  }
  else if (*(uint *)(iVar2 + 0x10) < uVar1) {
    uVar7 = unsigned_divide(uVar1 - 1,*(uint *)(iVar2 + 0x10));
    if (piStack_c[0xb] == 0) {
      iVar5 = dispatch_lens_fw_update_step_1053d2bc(iVar2,piStack_c[5],uVar7,(uint *)(piStack_c + 8));
    }
    else if (uVar7 < (uint)piStack_c[10]) {
      iVar3 = 0;
      iVar6 = piStack_c[0xb];
      iVar4 = 0;
      for (iVar2 = 0; iVar2 < 0x40; iVar2 = iVar2 + 8) {
        if (uVar7 < (uint)(*(int *)(iVar6 + iVar2 + 4) + iVar3)) {
          piStack_c[8] = *(int *)(iVar4 * 8 + iVar6) + (uVar7 - iVar3);
          iVar5 = 0;
          break;
        }
        iVar3 = iVar3 + *(int *)(iVar6 + iVar2 + 4);
        iVar4 = iVar4 + 1;
      }
    }
    else {
      iVar5 = dispatch_lens_fw_update_step_1053d2bc(iVar2,piStack_c[0xc],uVar7 - piStack_c[10],(uint *)(piStack_c + 8));
    }
    if (iVar5 != 0) goto LAB_1053f8c8;
  }
  else {
    piStack_c[8] = piStack_c[5];
  }
  piStack_c[7] = uVar1;
LAB_1053f8c8:
  *in_stack_00000018 = piStack_c[7];
  return iVar5;
}
