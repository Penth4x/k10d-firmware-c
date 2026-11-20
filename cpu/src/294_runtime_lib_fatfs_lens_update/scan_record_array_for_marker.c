/* @k10d scan_record_array_for_marker @ 0x1053a4d0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1053a634) overlaps instruction at (ram,0x1053a632)
    */

int scan_record_array_for_marker(void *param_1,uint32_t *param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uintptr_t sp;
  int *piVar6;
  uint8_t auStack_2e0 [8];
  char acStack_2d8 [672];
  uint uStack_38;
  int iStack_34;
  uint uStack_30;
  uint uStack_2c;
  char *pcStack_28;
  
  piVar6 = (int *)auStack_2e0;
  uVar4 = 0;
  iVar5 = 0;
  uStack_38 = 0;
  uVar3 = 1;
  uStack_2c = *(uint *)((int)param_1 + 0x28);
  uVar2 = 1;
LAB_1053a4ec:
  do {
    uVar1 = uStack_2c;
    if (*(int *)((int)param_1 + 0x28) == 0) {
      if ((*(uint *)((int)param_1 + 0x48) & 3) == 0) {
        return -999;
      }
      pcStack_28 = acStack_2d8;
      iStack_34 = validate_and_dispatch_lens_write(param_1,uVar3,&pcStack_28,&uStack_30);
      uVar1 = compute_modulo_10544c28(uVar3 - 1,uStack_30);
    }
    else {
      *piVar6 = (int)&uStack_30;
      piVar6[1] = (int)&uStack_2c;
      iStack_34 = write_block_with_offset_check(param_1,uVar1,uVar2,(int *)&pcStack_28,(uint32_t *)*piVar6,
                               (uint *)piVar6[1]);
      for (; uStack_30 < uVar2; uVar2 = uVar2 - uStack_30) {
      }
      uVar1 = uVar2 - 1;
    }
    if (iStack_34 != 0) {
      if (iStack_34 != -2) {
        return iStack_34;
      }
LAB_1053a646:
      if (uStack_38 == 0) {
        uStack_38 = uVar4;
        if (uVar4 == 0) {
          uStack_38 = uVar3;
        }
        if ((*(int *)((int)param_1 + 0x28) == 0) &&
           (iVar5 + ((*(int *)((int)param_1 + 0x1c) + 1) - uVar3) == 0)) {
          return -0x32a;
        }
        if (0x10000 < uStack_38) {
          return -0x1c;
        }
      }
      *param_2 = *(uint32_t *)((int)param_1 + 0x28);
      param_2[1] = uStack_38;
      param_2[2] = 1;
      fill_byte_array(param_3,0x20,0xb);
      *(uint8_t *)((int)param_3 + 0xb) = 0;
      return -2;
    }
    if (0x10000 < uVar3) {
      return -0x38f;
    }
    pcStack_28 = pcStack_28 + uVar1 * 0x20;
    uVar1 = uStack_30 - uVar1;
    do {
      for (; *pcStack_28 != -0x1b; pcStack_28 = pcStack_28 + 0x20) {
        if (*pcStack_28 == '\0') goto LAB_1053a646;
        if (((uStack_38 == 0) && (uVar4 != 0)) && (iVar5 != 0)) {
          uStack_38 = uVar4;
        }
        iVar5 = 0;
        uVar4 = 0;
        if (pcStack_28[0xb] == '\b') {
          *param_2 = *(uint32_t *)((int)param_1 + 0x28);
          param_2[1] = uVar3;
          param_2[2] = 1;
          memcpy_bytes(param_3,pcStack_28,0xb);
          *(uint8_t *)((int)param_3 + 0xb) = 0;
          return 0;
        }
        uVar3 = uVar3 + 1;
        if (uVar1 < 2) {
          uVar2 = uVar2 + 1;
          goto LAB_1053a4ec;
        }
        uVar2 = uVar2 + 1;
        uVar1 = uVar1 - 1;
      }
      if (uVar4 == 0) {
        uVar4 = uVar3;
      }
      uVar3 = uVar3 + 1;
      uVar2 = uVar2 + 1;
      iVar5 = iVar5 + 1;
      uVar1 = uVar1 - 1;
      pcStack_28 = pcStack_28 + 0x20;
    } while (uVar1 != 0);
  } while( true );
}
