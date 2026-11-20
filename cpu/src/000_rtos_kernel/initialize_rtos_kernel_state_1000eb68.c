/* @k10d initialize_rtos_kernel_state_1000eb68 @ 0x1000eb68
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_rtos_kernel_state_1000eb68(void)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  uint16_t *puVar4;
  void *puVar5;
  int iVar6;
  uint uVar7;
  uint32_t uVar8;
  int iVar9;
  uint32_t *puVar10;
  short *psVar11;
  int caller_r14;
  
  if (DAT_10011d1a/*ROM*/ < 0) {
                    /* WARNING: Subroutine does not return */
    kernel_panic(0x2000,(int)DAT_10011d1a/*ROM*/);
  }
  if (-1 < DAT_10011d18/*ROM*/) {
    kernel_sched_setup();
    _DAT_6a003754 = 0;
    iVar6 = (int)DAT_10011d4c/*ROM*/;
    iVar3 = ((int)(((uint)(iVar6 >> 4) >> 0x1b) + iVar6) >> 5) + (uint)(iVar6 < 0x400);
    if (0 < iVar3) {
      iVar3 = iVar3 + -3;
      iVar9 = 0;
      if (2 < iVar3) {
        do {
          *(uint32_t *)(iVar9 + 0x6a003750) = 0;
          *(uint32_t *)(&DAT_6a003754 + iVar9) = 0;
          *(uint32_t *)(&DAT_6a003758 + iVar9) = 0;
          iVar3 = iVar3 + -3;
          iVar9 = iVar9 + 0xc;
        } while (-1 < iVar3);
      }
      for (iVar3 = iVar3 + 2; -1 < iVar3; iVar3 = iVar3 + -1) {
        *(uint32_t *)(iVar9 + 0x6a003750) = 0;
        iVar9 = iVar9 + 4;
      }
    }
    iVar6 = iVar6 + (uint)(iVar6 < 0x400);
    if (-1 < iVar6 + -1) {
      iVar6 = iVar6 + -3;
      iVar3 = 0;
      if (2 < iVar6) {
        do {
          *(uint16_t *)(iVar3 + 0x6a0036d2) = 0xffff;
          *(uint16_t *)(iVar3 + 0x6a0036d0) = 0xffff;
          *(uint16_t *)(iVar3 + 0x6a0036d6) = 0xffff;
          *(uint16_t *)(iVar3 + 0x6a0036d4) = 0xffff;
          *(uint16_t *)(iVar3 + 0x6a0036da) = 0xffff;
          *(uint16_t *)(iVar3 + 0x6a0036d8) = 0xffff;
          iVar6 = iVar6 + -3;
          iVar3 = iVar3 + 0xc;
        } while (-1 < iVar6);
      }
      for (iVar6 = iVar6 + 2; -1 < iVar6; iVar6 = iVar6 + -1) {
        *(uint16_t *)(iVar3 + 0x6a0036d2) = 0xffff;
        *(uint16_t *)(iVar3 + 0x6a0036d0) = 0xffff;
        iVar3 = iVar3 + 4;
      }
    }
    zero_two_word_struct((uint32_t *)0x6a0036c8);
    _DAT_6a0036c6 = 0xffff;
    _DAT_6a0036c4 = 0xffff;
    _DAT_6a0036c0 = (uintptr_t)(&DAT_6a0036bc);
    _DAT_6a0036bc = (uintptr_t)(&DAT_6a0036bc);
    init_kernel_timer_struct();
    if (0 < DAT_10011d4a/*ROM*/) {
      iVar6 = 0x44;
      iVar3 = (int)DAT_10011d4a/*ROM*/;
      do {
        puVar4 = (uint16_t *)(iVar6 + 0x6a001be8);
        iVar6 = iVar6 + 0x44;
        *puVar4 = 0xfffe;
      } while (iVar6 <= iVar3 * 0x44);
    }
    *(short **)(caller_r14 + -0x48) = &DAT_10011d32/*ROM*/;
    iVar3 = 1;
    if (0 < DAT_10011d32/*ROM*/) {
      iVar6 = 0x1c;
      *(void **)(caller_r14 + -0x28) = &DAT_10011c24/*ROM*/;
      *(uint32_t *)(caller_r14 + -0x24) = 0xfffffbff;
      do {
        psVar11 = (short *)(*(int *)(caller_r14 + -0x28) + iVar6);
        uVar7 = (*(code *)PTR_FUN_10011cb4)((int)*psVar11,psVar11 + 2);
        if (uVar7 != 0) {
                    /* WARNING: Subroutine does not return */
          iterate_virtual_callback_table(uVar7 & *(uint *)(caller_r14 + -0x24),(int)*psVar11);
        }
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + 0x1c;
      } while (iVar3 <= **(short **)(caller_r14 + -0x48));
    }
    iVar3 = 0;
    if (0 < DAT_10011d30/*ROM*/) {
      iVar6 = 0;
      *(uint32_t **)(caller_r14 + -0x3c) = &DAT_10011cb0/*ROM*/;
      *(uint32_t *)(caller_r14 + -0x20) = 0xffffe5ff;
      do {
        uVar7 = (*(code *)**(uint32_t **)(caller_r14 + -0x3c))
                          ((int)*(short *)((char*)SUB_10011ce8 + iVar6),(short *)((char*)SUB_10011ce8 + iVar6) + 2
                          );
        if (uVar7 != 0) {
                    /* WARNING: Subroutine does not return */
          iterate_virtual_callback_table(uVar7 & *(uint *)(caller_r14 + -0x20),(int)*(short *)((char*)SUB_10011ce8 + iVar6));
        }
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + 0xc;
      } while (iVar3 < DAT_10011d30/*ROM*/);
    }
    iVar3 = 0;
    if (0 < DAT_10011d48/*ROM*/) {
      iVar6 = 0;
      do {
        iVar3 = iVar3 + 1;
        *(uint16_t *)(DAT_10011d14/*ROM*/ + iVar6) = 0xfffe;
        iVar6 = iVar6 + 10;
      } while (iVar3 < DAT_10011d48/*ROM*/);
    }
    iVar3 = 0;
    if (0 < DAT_10011d2e/*ROM*/) {
      *(uint32_t *)(caller_r14 + -0x78) = 0;
      *(uint32_t *)(caller_r14 + -0x1c) = 0xffffdfff;
      do {
        psVar11 = (short *)(DAT_10011ce4/*ROM*/ + *(int *)(caller_r14 + -0x78));
        uVar7 = (*DAT_10011cac/*ROM*/)((int)*psVar11,psVar11 + 2);
        if (uVar7 != 0) {
                    /* WARNING: Subroutine does not return */
          iterate_virtual_callback_table(uVar7 & *(uint *)(caller_r14 + -0x1c),
                       (int)*(short *)(DAT_10011ce4/*ROM*/ + *(int *)(caller_r14 + -0x78)));
        }
        *(int *)(caller_r14 + -0x78) = *(int *)(caller_r14 + -0x78) + 0x10;
        iVar3 = iVar3 + 1;
      } while (iVar3 < DAT_10011d2e/*ROM*/);
    }
    iVar3 = 0;
    if (0 < DAT_10011d46/*ROM*/) {
      iVar6 = 0;
      do {
        iVar3 = iVar3 + 1;
        *(uint16_t *)(DAT_10011d10/*ROM*/ + iVar6) = 0xfffe;
        iVar6 = iVar6 + 0xc;
      } while (iVar3 < DAT_10011d46/*ROM*/);
    }
    iVar3 = 0;
    if (0 < DAT_10011d2c/*ROM*/) {
      iVar6 = 0;
      *(uint32_t **)(caller_r14 + -0x38) = &DAT_10011ca8/*ROM*/;
      *(uint32_t *)(caller_r14 + -0x18) = 0xffffd7ff;
      do {
        uVar7 = (*(code *)**(uint32_t **)(caller_r14 + -0x38))
                          ((int)*(short *)(DAT_10011ce0/*ROM*/ + iVar6),(short *)(DAT_10011ce0/*ROM*/ + iVar6) + 2
                          );
        if (uVar7 != 0) {
                    /* WARNING: Subroutine does not return */
          iterate_virtual_callback_table(uVar7 & *(uint *)(caller_r14 + -0x18),(int)*(short *)(DAT_10011ce0/*ROM*/ + iVar6));
        }
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + 0xc;
      } while (iVar3 < DAT_10011d2c/*ROM*/);
    }
    iVar3 = 0;
    if (0 < DAT_10011d44/*ROM*/) {
      iVar6 = 0;
      do {
        *(uint16_t *)(DAT_10011d0c/*ROM*/ + iVar6) = 0xfffe;
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + 0x1c;
      } while (iVar3 < DAT_10011d44/*ROM*/);
    }
    *(short **)(caller_r14 + -0x6c) = &DAT_10011d2a/*ROM*/;
    iVar3 = 0;
    if (0 < DAT_10011d2a/*ROM*/) {
      iVar6 = 0;
      *(uint32_t *)(caller_r14 + -0x14) = 0xffffcfff;
      do {
        uVar7 = (*DAT_10011ca4/*ROM*/)((int)*(short *)(DAT_10011cdc/*ROM*/ + iVar6),
                                (short *)(DAT_10011cdc/*ROM*/ + iVar6) + 2);
        if (uVar7 != 0) {
                    /* WARNING: Subroutine does not return */
          iterate_virtual_callback_table(uVar7 & *(uint *)(caller_r14 + -0x14),(int)*(short *)(DAT_10011cdc/*ROM*/ + iVar6));
        }
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + 0x10;
      } while (iVar3 < **(short **)(caller_r14 + -0x6c));
    }
    iVar3 = 0;
    if (0 < DAT_10011d42/*ROM*/) {
      iVar6 = 0;
      do {
        *(uint16_t *)(DAT_10011d08/*ROM*/ + iVar6) = 0xfffe;
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + 0x10;
      } while (iVar3 < DAT_10011d42/*ROM*/);
    }
    *(short **)(caller_r14 + -0x70) = &DAT_10011d28/*ROM*/;
    iVar3 = 0;
    if (0 < DAT_10011d28/*ROM*/) {
      iVar6 = 0;
      *(uint32_t *)(caller_r14 + -0x10) = 0xffffc3ff;
      do {
        uVar7 = (*DAT_10011ca0/*ROM*/)((int)*(short *)(DAT_10011cd8/*ROM*/ + iVar6),
                                (short *)(DAT_10011cd8/*ROM*/ + iVar6) + 2);
        if (uVar7 != 0) {
                    /* WARNING: Subroutine does not return */
          iterate_virtual_callback_table(uVar7 & *(uint *)(caller_r14 + -0x10),(int)*(short *)(DAT_10011cd8/*ROM*/ + iVar6));
        }
        iVar6 = iVar6 + 0xc;
        iVar3 = iVar3 + 1;
      } while (iVar3 < **(short **)(caller_r14 + -0x70));
    }
    iVar3 = 0;
    if (0 < DAT_10011d40/*ROM*/) {
      iVar6 = 0;
      do {
        iVar3 = iVar3 + 1;
        *(uint16_t *)(DAT_10011d04/*ROM*/ + iVar6) = 0xfffe;
        iVar6 = iVar6 + 0xe;
      } while (iVar3 < DAT_10011d40/*ROM*/);
    }
    *(short **)(caller_r14 + -0x60) = &DAT_10011d26/*ROM*/;
    iVar3 = 0;
    if (0 < DAT_10011d26/*ROM*/) {
      iVar6 = 0;
      *(uint32_t *)(caller_r14 + -0xc) = 0xffff7fff;
      do {
        uVar7 = (*DAT_10011c9c/*ROM*/)((int)*(short *)(DAT_10011cd4/*ROM*/ + iVar6),
                                (short *)(DAT_10011cd4/*ROM*/ + iVar6) + 1);
        if (uVar7 != 0) {
                    /* WARNING: Subroutine does not return */
          iterate_virtual_callback_table(uVar7 & *(uint *)(caller_r14 + -0xc),(int)*(short *)(DAT_10011cd4/*ROM*/ + iVar6));
        }
        iVar6 = iVar6 + 6;
        iVar3 = iVar3 + 1;
      } while (iVar3 < **(short **)(caller_r14 + -0x60));
    }
    iVar3 = 0;
    if (0 < DAT_10011d3e/*ROM*/) {
      iVar6 = 0;
      do {
        *(uint16_t *)(DAT_10011d00/*ROM*/ + iVar6) = 0xfffe;
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + 0x24;
      } while (iVar3 < DAT_10011d3e/*ROM*/);
    }
    iVar3 = 0;
    if (0 < DAT_10011d24/*ROM*/) {
      iVar6 = 0;
      *(uint32_t **)(caller_r14 + -0x7c) = &DAT_10011cd0/*ROM*/;
      *(uint32_t **)(caller_r14 + -0x34) = &DAT_10011c98/*ROM*/;
      *(uint32_t *)(caller_r14 + -8) = 0xffff77ff;
      do {
        psVar11 = (short *)(**(int **)(caller_r14 + -0x7c) + iVar6);
        uVar7 = (*(code *)**(uint32_t **)(caller_r14 + -0x34))((int)*psVar11,psVar11 + 2);
        if (uVar7 != 0) {
                    /* WARNING: Subroutine does not return */
          iterate_virtual_callback_table(uVar7 & *(uint *)(caller_r14 + -8),
                       (int)*(short *)(**(int **)(caller_r14 + -0x7c) + iVar6));
        }
        iVar6 = iVar6 + 0x14;
        iVar9 = (int)DAT_10011d24/*ROM*/;
        iVar3 = iVar3 + 1;
        *(int *)(caller_r14 + -0x84) = iVar9;
      } while (iVar3 < iVar9);
    }
    iVar3 = 0;
    if (0 < DAT_10011d3c/*ROM*/) {
      iVar6 = 0;
      do {
        puVar4 = (uint16_t *)(DAT_10011cfc/*ROM*/ + iVar6);
        iVar6 = iVar6 + 0x18;
        *puVar4 = 0xfffe;
        iVar3 = iVar3 + 1;
      } while (iVar3 < DAT_10011d3c/*ROM*/);
    }
    *(short **)(caller_r14 + -0x74) = &DAT_10011d22/*ROM*/;
    iVar3 = 0;
    if (0 < DAT_10011d22/*ROM*/) {
      iVar6 = 0;
      *(uint32_t **)(caller_r14 + -100) = &DAT_10011ccc/*ROM*/;
      *(uint32_t **)(caller_r14 + -0x30) = &LAB_10011c94;
      *(uint32_t *)(caller_r14 + -4) = 0xffffbbff;
      do {
        psVar11 = (short *)(**(int **)(caller_r14 + -100) + iVar6);
        sVar1 = *psVar11;
        pcVar2 = (code *)**(uint32_t **)(caller_r14 + -0x30);
        *(code **)(caller_r14 + -0x78) = pcVar2;
        uVar7 = (*pcVar2)((int)sVar1,psVar11 + 2);
        if (uVar7 != 0) {
                    /* WARNING: Subroutine does not return */
          iterate_virtual_callback_table(uVar7 & *(uint *)(caller_r14 + -4),
                       (int)*(short *)(**(int **)(caller_r14 + -100) + iVar6));
        }
        iVar6 = iVar6 + 0x14;
        iVar3 = iVar3 + 1;
      } while (iVar3 < **(short **)(caller_r14 + -0x74));
    }
    iVar3 = 0;
    if (0 < DAT_10011d3a/*ROM*/) {
      iVar6 = 0;
      do {
        iVar3 = iVar3 + 1;
        *(uint16_t *)(DAT_10011cf8/*ROM*/ + iVar6) = 0xfffe;
        iVar6 = iVar6 + 0x20;
      } while (iVar3 < DAT_10011d3a/*ROM*/);
    }
    *(short **)(caller_r14 + -0x5c) = &DAT_10011d20/*ROM*/;
    iVar3 = 0;
    if (0 < DAT_10011d20/*ROM*/) {
      iVar6 = 0;
      *(uint32_t **)(caller_r14 + -0x2c) = &DAT_10011c90/*ROM*/;
      *(uint32_t *)(caller_r14 + -0x40) = 0xffff5fff;
      do {
        uVar7 = (*(code *)**(uint32_t **)(caller_r14 + -0x2c))
                          ((int)*(short *)(DAT_10011cc8/*ROM*/ + iVar6),(short *)(DAT_10011cc8/*ROM*/ + iVar6) + 2
                          );
        if (uVar7 != 0) {
                    /* WARNING: Subroutine does not return */
          iterate_virtual_callback_table(uVar7 & *(uint *)(caller_r14 + -0x40),(int)*(short *)(DAT_10011cc8/*ROM*/ + iVar6));
        }
        iVar6 = iVar6 + 0x14;
        sVar1 = **(short **)(caller_r14 + -0x5c);
        iVar3 = iVar3 + 1;
        *(int *)(caller_r14 + -0x88) = (int)sVar1;
      } while (iVar3 < sVar1);
    }
    iVar6 = 0;
    iVar3 = (int)DAT_10011d38/*ROM*/;
    *(int *)(caller_r14 + -0x4c) = iVar3;
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        puVar10 = (uint32_t *)(DAT_10011cf4/*ROM*/ + iVar3);
        *(uint32_t *)(caller_r14 + -100) = 0;
        *puVar10 = 0;
        iVar3 = iVar3 + 0x1c;
        *(int *)(caller_r14 + -0x7c) = iVar3;
        iVar6 = iVar6 + 1;
      } while (iVar6 < DAT_10011d38/*ROM*/);
    }
    *(short **)(caller_r14 + -0x44) = &DAT_10011d1e/*ROM*/;
    iVar3 = 0;
    if (0 < DAT_10011d1e/*ROM*/) {
      *(uint32_t *)(caller_r14 + -0x84) = 0;
      *(uint32_t **)(caller_r14 + -0x4c) = &DAT_10011cc4/*ROM*/;
      *(uint32_t **)(caller_r14 + -0x54) = &DAT_10011c8c/*ROM*/;
      *(uint32_t *)(caller_r14 + -0x50) = 0xffffb1ff;
      do {
        psVar11 = (short *)(**(int **)(caller_r14 + -0x4c) + *(int *)(caller_r14 + -0x84));
        uVar7 = (*(code *)**(uint32_t **)(caller_r14 + -0x54))((int)*psVar11,psVar11 + 2);
        if (uVar7 != 0) {
                    /* WARNING: Subroutine does not return */
          iterate_virtual_callback_table(uVar7 & *(uint *)(caller_r14 + -0x50),
                       (int)*(short *)(**(int **)(caller_r14 + -0x4c) + *(int *)(caller_r14 + -0x84)))
          ;
        }
        iVar6 = *(int *)(caller_r14 + -0x84) + 0x18;
        *(int *)(caller_r14 + -0x68) = iVar6;
        *(int *)(caller_r14 + -0x84) = iVar6;
        iVar3 = iVar3 + 1;
      } while (iVar3 < **(short **)(caller_r14 + -0x44));
    }
    iVar6 = 0;
    iVar3 = (int)DAT_10011d36/*ROM*/;
    *(int *)(caller_r14 + -0x44) = iVar3;
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        puVar10 = (uint32_t *)(DAT_10011cf0/*ROM*/ + iVar3);
        *(uint32_t *)(caller_r14 + -0x5c) = 0;
        *puVar10 = 0;
        iVar3 = iVar3 + 0x18;
        iVar6 = iVar6 + 1;
        iVar9 = (int)DAT_10011d36/*ROM*/;
        *(int *)(caller_r14 + -0x74) = iVar9;
      } while (iVar6 < iVar9);
    }
    *(short **)(caller_r14 + -0x68) = &DAT_10011d1c/*ROM*/;
    iVar3 = 0;
    if (0 < DAT_10011d1c/*ROM*/) {
      iVar6 = 0;
      *(uint32_t **)(caller_r14 + -0x88) = &DAT_10011cc0/*ROM*/;
      *(uint32_t **)(caller_r14 + -0x58) = &DAT_10011c88/*ROM*/;
      *(uint32_t *)(caller_r14 + -0x80) = 0xffff57ff;
      do {
        psVar11 = (short *)(**(int **)(caller_r14 + -0x88) + iVar6);
        sVar1 = *psVar11;
        pcVar2 = (code *)**(uint32_t **)(caller_r14 + -0x58);
        *(code **)(caller_r14 + -0x60) = pcVar2;
        uVar7 = (*pcVar2)((int)sVar1,psVar11 + 2);
        if (uVar7 != 0) {
          psVar11 = (short *)(**(int **)(caller_r14 + -0x88) + iVar6);
          *(short **)(caller_r14 + -0x70) = psVar11;
                    /* WARNING: Subroutine does not return */
          iterate_virtual_callback_table(uVar7 & *(uint *)(caller_r14 + -0x80),(int)*psVar11);
        }
        iVar6 = iVar6 + 0x10;
        *(int *)(caller_r14 + -0x6c) = iVar6;
        iVar3 = iVar3 + 1;
      } while (iVar3 < **(short **)(caller_r14 + -0x68));
    }
    _DAT_6a000030 = 0x6a000000;
    iVar3 = 1;
    iVar6 = 0;
    do {
      *(int *)(iVar6 + 0x6a000000) = iVar6 + 0x6a000000;
      *(int *)(iVar6 + 0x6a000008) = iVar6 + 0x6a000008;
      *(int *)(iVar6 + 0x6a000010) = iVar6 + 0x6a000010;
      iVar3 = iVar3 + -1;
      iVar6 = iVar6 + 0x18;
    } while (-1 < iVar3);
    iVar6 = 0;
    iVar3 = (int)DAT_10011d1a/*ROM*/;
    *(int *)(caller_r14 + -0x48) = iVar3;
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        puVar5 = (char*)PTR_DAT_10011cbc + iVar3;
        *(void **)(caller_r14 + -0x80) = puVar5;
        *(uint32_t *)(caller_r14 + -0x58) = 4;
        uVar8 = *(uint32_t *)((char*)puVar5 + 4);
        *(uint32_t *)(caller_r14 + -0x50) = 8;
        pcVar2 = *(code **)((char*)puVar5 + 8);
        iVar3 = iVar3 + 0xc;
        *(code **)(caller_r14 + -0x54) = pcVar2;
        (*pcVar2)(uVar8);
        iVar6 = iVar6 + 1;
      } while (iVar6 < DAT_10011d1a/*ROM*/);
    }
    svc_raise_dicr_thunk();
    return;
  }
                    /* WARNING: Subroutine does not return */
  kernel_panic(0x4000,(int)DAT_10011d18/*ROM*/);
}
