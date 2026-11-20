/* @k10d initialize_rtos_kernel_state_1000ea00 @ 0x1000ea00
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void initialize_rtos_kernel_state_1000ea00(void)

{
  int iVar1;
  int iVar2;
  uint16_t *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iStack_8c;
  int iStack_80;
  
  _DAT_6a003758 = 0;
  if (DAT_10011d4c/*ROM*/ < 0) {
                    /* WARNING: Subroutine does not return */
    kernel_panic(1,(int)DAT_10011d4c/*ROM*/);
  }
  if (DAT_10011d4a/*ROM*/ < 0) {
                    /* WARNING: Subroutine does not return */
    kernel_panic(2,(int)DAT_10011d4a/*ROM*/);
  }
  if (DAT_10011d48/*ROM*/ < 0) {
                    /* WARNING: Subroutine does not return */
    kernel_panic(4,(int)DAT_10011d48/*ROM*/);
  }
  if (DAT_10011d46/*ROM*/ < 0) {
                    /* WARNING: Subroutine does not return */
    kernel_panic(8,(int)DAT_10011d46/*ROM*/);
  }
  if (DAT_10011d44/*ROM*/ < 0) {
                    /* WARNING: Subroutine does not return */
    kernel_panic(0x10,(int)DAT_10011d44/*ROM*/);
  }
  if (DAT_10011d42/*ROM*/ < 0) {
                    /* WARNING: Subroutine does not return */
    kernel_panic(0x20,(int)DAT_10011d42/*ROM*/);
  }
  if (DAT_10011d40/*ROM*/ < 0) {
                    /* WARNING: Subroutine does not return */
    kernel_panic(0x40,(int)DAT_10011d40/*ROM*/);
  }
  if (DAT_10011d3e/*ROM*/ < 0) {
                    /* WARNING: Subroutine does not return */
    kernel_panic(0x80,(int)DAT_10011d3e/*ROM*/);
  }
  if (DAT_10011d3c/*ROM*/ < 0) {
                    /* WARNING: Subroutine does not return */
    kernel_panic(0x100,(int)DAT_10011d3c/*ROM*/);
  }
  if (DAT_10011d3a/*ROM*/ < 0) {
                    /* WARNING: Subroutine does not return */
    kernel_panic(0x200,(int)DAT_10011d3a/*ROM*/);
  }
  if (DAT_10011d38/*ROM*/ < 0) {
                    /* WARNING: Subroutine does not return */
    kernel_panic(0x400,(int)DAT_10011d38/*ROM*/);
  }
  if (DAT_10011d36/*ROM*/ < 0) {
                    /* WARNING: Subroutine does not return */
    kernel_panic(0x800,(int)DAT_10011d36/*ROM*/);
  }
  if (DAT_10011c38/*ROM*/ < 0x60) {
                    /* WARNING: Subroutine does not return */
    kernel_panic(0x1000,DAT_10011c38/*ROM*/);
  }
  if ((DAT_10011c38/*ROM*/ & 3) != 0) {
                    /* WARNING: Subroutine does not return */
    kernel_panic(0x1000,DAT_10011c38/*ROM*/);
  }
  if (DAT_10011d1a/*ROM*/ < 0) {
                    /* WARNING: Subroutine does not return */
    kernel_panic(0x2000,(int)DAT_10011d1a/*ROM*/);
  }
  if (-1 < DAT_10011d18/*ROM*/) {
    kernel_sched_setup();
    _DAT_6a003754 = 0;
    iVar4 = (int)DAT_10011d4c/*ROM*/;
    iVar2 = ((int)(((uint)(iVar4 >> 4) >> 0x1b) + iVar4) >> 5) + (uint)(iVar4 < 0x400);
    if (0 < iVar2) {
      iVar2 = iVar2 + -3;
      iVar6 = 0;
      if (2 < iVar2) {
        do {
          *(uint32_t *)(iVar6 + 0x6a003750) = 0;
          *(uint32_t *)(&DAT_6a003754 + iVar6) = 0;
          *(uint32_t *)(&DAT_6a003758 + iVar6) = 0;
          iVar2 = iVar2 + -3;
          iVar6 = iVar6 + 0xc;
        } while (-1 < iVar2);
      }
      for (iVar2 = iVar2 + 2; -1 < iVar2; iVar2 = iVar2 + -1) {
        *(uint32_t *)(iVar6 + 0x6a003750) = 0;
        iVar6 = iVar6 + 4;
      }
    }
    iVar4 = iVar4 + (uint)(iVar4 < 0x400);
    if (-1 < iVar4 + -1) {
      iVar4 = iVar4 + -3;
      iVar2 = 0;
      if (2 < iVar4) {
        do {
          *(uint16_t *)(iVar2 + 0x6a0036d2) = 0xffff;
          *(uint16_t *)(iVar2 + 0x6a0036d0) = 0xffff;
          *(uint16_t *)(iVar2 + 0x6a0036d6) = 0xffff;
          *(uint16_t *)(iVar2 + 0x6a0036d4) = 0xffff;
          *(uint16_t *)(iVar2 + 0x6a0036da) = 0xffff;
          *(uint16_t *)(iVar2 + 0x6a0036d8) = 0xffff;
          iVar4 = iVar4 + -3;
          iVar2 = iVar2 + 0xc;
        } while (-1 < iVar4);
      }
      for (iVar4 = iVar4 + 2; -1 < iVar4; iVar4 = iVar4 + -1) {
        *(uint16_t *)(iVar2 + 0x6a0036d2) = 0xffff;
        *(uint16_t *)(iVar2 + 0x6a0036d0) = 0xffff;
        iVar2 = iVar2 + 4;
      }
    }
    zero_two_word_struct((uint32_t *)0x6a0036c8);
    _DAT_6a0036c6 = 0xffff;
    _DAT_6a0036c4 = 0xffff;
    _DAT_6a0036c0 = (uintptr_t)(&DAT_6a0036bc);
    _DAT_6a0036bc = (uintptr_t)(&DAT_6a0036bc);
    init_kernel_timer_struct();
    if (0 < DAT_10011d4a/*ROM*/) {
      iVar4 = 0x44;
      iVar2 = (int)DAT_10011d4a/*ROM*/;
      do {
        puVar3 = (uint16_t *)(iVar4 + 0x6a001be8);
        iVar4 = iVar4 + 0x44;
        *puVar3 = 0xfffe;
      } while (iVar4 <= iVar2 * 0x44);
    }
    iVar2 = 1;
    if (0 < DAT_10011d32/*ROM*/) {
      iVar4 = 0x1c;
      do {
        uVar5 = (*(code *)PTR_FUN_10011cb4)
                          ((int)*(short *)(&DAT_10011c24/*ROM*/ + iVar4),(int)&DAT_10011c28/*ROM*/ + iVar4);
        if (uVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          iterate_virtual_callback_table(uVar5 & 0xfffffbff,(int)*(short *)(&DAT_10011c24/*ROM*/ + iVar4));
        }
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + 0x1c;
      } while (iVar2 <= DAT_10011d32/*ROM*/);
    }
    iVar2 = 0;
    if (0 < DAT_10011d30/*ROM*/) {
      iVar4 = 0;
      do {
        uVar5 = (*DAT_10011cb0/*ROM*/)((int)*(short *)((char*)SUB_10011ce8 + iVar4),
                                (short *)((char*)SUB_10011ce8 + iVar4) + 2);
        if (uVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          iterate_virtual_callback_table(uVar5 & 0xffffe5ff,(int)*(short *)((char*)SUB_10011ce8 + iVar4));
        }
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + 0xc;
      } while (iVar2 < DAT_10011d30/*ROM*/);
    }
    iVar2 = 0;
    if (0 < DAT_10011d48/*ROM*/) {
      iVar4 = 0;
      do {
        iVar2 = iVar2 + 1;
        *(uint16_t *)(DAT_10011d14/*ROM*/ + iVar4) = 0xfffe;
        iVar4 = iVar4 + 10;
      } while (iVar2 < DAT_10011d48/*ROM*/);
    }
    iVar2 = 0;
    if (0 < DAT_10011d2e/*ROM*/) {
      iStack_80 = 0;
      do {
        uVar5 = (*DAT_10011cac/*ROM*/)((int)*(short *)(DAT_10011ce4/*ROM*/ + iStack_80),
                                (short *)(DAT_10011ce4/*ROM*/ + iStack_80) + 2);
        if (uVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          iterate_virtual_callback_table(uVar5 & 0xffffdfff,(int)*(short *)(DAT_10011ce4/*ROM*/ + iStack_80));
        }
        iStack_80 = iStack_80 + 0x10;
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_10011d2e/*ROM*/);
    }
    iVar2 = 0;
    if (0 < DAT_10011d46/*ROM*/) {
      iVar4 = 0;
      do {
        iVar2 = iVar2 + 1;
        *(uint16_t *)(DAT_10011d10/*ROM*/ + iVar4) = 0xfffe;
        iVar4 = iVar4 + 0xc;
      } while (iVar2 < DAT_10011d46/*ROM*/);
    }
    iVar2 = 0;
    if (0 < DAT_10011d2c/*ROM*/) {
      iVar4 = 0;
      do {
        uVar5 = (*DAT_10011ca8/*ROM*/)((int)*(short *)(DAT_10011ce0/*ROM*/ + iVar4),
                                (short *)(DAT_10011ce0/*ROM*/ + iVar4) + 2);
        if (uVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          iterate_virtual_callback_table(uVar5 & 0xffffd7ff,(int)*(short *)(DAT_10011ce0/*ROM*/ + iVar4));
        }
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + 0xc;
      } while (iVar2 < DAT_10011d2c/*ROM*/);
    }
    iVar2 = 0;
    if (0 < DAT_10011d44/*ROM*/) {
      iVar4 = 0;
      do {
        *(uint16_t *)(DAT_10011d0c/*ROM*/ + iVar4) = 0xfffe;
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + 0x1c;
      } while (iVar2 < DAT_10011d44/*ROM*/);
    }
    iVar2 = 0;
    if (0 < DAT_10011d2a/*ROM*/) {
      iVar4 = 0;
      do {
        uVar5 = (*DAT_10011ca4/*ROM*/)((int)*(short *)(DAT_10011cdc/*ROM*/ + iVar4),
                                (short *)(DAT_10011cdc/*ROM*/ + iVar4) + 2);
        if (uVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          iterate_virtual_callback_table(uVar5 & 0xffffcfff,(int)*(short *)(DAT_10011cdc/*ROM*/ + iVar4));
        }
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + 0x10;
      } while (iVar2 < DAT_10011d2a/*ROM*/);
    }
    iVar2 = 0;
    if (0 < DAT_10011d42/*ROM*/) {
      iVar4 = 0;
      do {
        *(uint16_t *)(DAT_10011d08/*ROM*/ + iVar4) = 0xfffe;
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + 0x10;
      } while (iVar2 < DAT_10011d42/*ROM*/);
    }
    iVar2 = 0;
    if (0 < DAT_10011d28/*ROM*/) {
      iVar4 = 0;
      do {
        uVar5 = (*DAT_10011ca0/*ROM*/)((int)*(short *)(DAT_10011cd8/*ROM*/ + iVar4),
                                (short *)(DAT_10011cd8/*ROM*/ + iVar4) + 2);
        if (uVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          iterate_virtual_callback_table(uVar5 & 0xffffc3ff,(int)*(short *)(DAT_10011cd8/*ROM*/ + iVar4));
        }
        iVar4 = iVar4 + 0xc;
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_10011d28/*ROM*/);
    }
    iVar2 = 0;
    if (0 < DAT_10011d40/*ROM*/) {
      iVar4 = 0;
      do {
        iVar2 = iVar2 + 1;
        *(uint16_t *)(DAT_10011d04/*ROM*/ + iVar4) = 0xfffe;
        iVar4 = iVar4 + 0xe;
      } while (iVar2 < DAT_10011d40/*ROM*/);
    }
    iVar2 = 0;
    if (0 < DAT_10011d26/*ROM*/) {
      iVar4 = 0;
      do {
        uVar5 = (*DAT_10011c9c/*ROM*/)((int)*(short *)(DAT_10011cd4/*ROM*/ + iVar4),
                                (short *)(DAT_10011cd4/*ROM*/ + iVar4) + 1);
        if (uVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          iterate_virtual_callback_table(uVar5 & 0xffff7fff,(int)*(short *)(DAT_10011cd4/*ROM*/ + iVar4));
        }
        iVar4 = iVar4 + 6;
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_10011d26/*ROM*/);
    }
    iVar2 = 0;
    if (0 < DAT_10011d3e/*ROM*/) {
      iVar4 = 0;
      do {
        *(uint16_t *)(DAT_10011d00/*ROM*/ + iVar4) = 0xfffe;
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + 0x24;
      } while (iVar2 < DAT_10011d3e/*ROM*/);
    }
    iVar2 = 0;
    if (0 < DAT_10011d24/*ROM*/) {
      iVar4 = 0;
      do {
        uVar5 = (*DAT_10011c98/*ROM*/)((int)*(short *)(DAT_10011cd0/*ROM*/ + iVar4),
                                (short *)(DAT_10011cd0/*ROM*/ + iVar4) + 2);
        if (uVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          iterate_virtual_callback_table(uVar5 & 0xffff77ff,(int)*(short *)(DAT_10011cd0/*ROM*/ + iVar4));
        }
        iVar4 = iVar4 + 0x14;
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_10011d24/*ROM*/);
    }
    iVar2 = 0;
    if (0 < DAT_10011d3c/*ROM*/) {
      iVar4 = 0;
      do {
        puVar3 = (uint16_t *)(DAT_10011cfc/*ROM*/ + iVar4);
        iVar4 = iVar4 + 0x18;
        *puVar3 = 0xfffe;
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_10011d3c/*ROM*/);
    }
    iVar2 = 0;
    if (0 < DAT_10011d22/*ROM*/) {
      iVar4 = 0;
      do {
        uVar5 = (*LAB_10011c94)((int)*(short *)(DAT_10011ccc/*ROM*/ + iVar4),
                                (short *)(DAT_10011ccc/*ROM*/ + iVar4) + 2);
        if (uVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          iterate_virtual_callback_table(uVar5 & 0xffffbbff,(int)*(short *)(DAT_10011ccc/*ROM*/ + iVar4));
        }
        iVar4 = iVar4 + 0x14;
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_10011d22/*ROM*/);
    }
    iVar2 = 0;
    if (0 < DAT_10011d3a/*ROM*/) {
      iVar4 = 0;
      do {
        iVar2 = iVar2 + 1;
        *(uint16_t *)(DAT_10011cf8/*ROM*/ + iVar4) = 0xfffe;
        iVar4 = iVar4 + 0x20;
      } while (iVar2 < DAT_10011d3a/*ROM*/);
    }
    iVar2 = 0;
    if (0 < DAT_10011d20/*ROM*/) {
      iVar4 = 0;
      do {
        uVar5 = (*DAT_10011c90/*ROM*/)((int)*(short *)(DAT_10011cc8/*ROM*/ + iVar4),
                                (short *)(DAT_10011cc8/*ROM*/ + iVar4) + 2);
        if (uVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          iterate_virtual_callback_table(uVar5 & 0xffff5fff,(int)*(short *)(DAT_10011cc8/*ROM*/ + iVar4));
        }
        iVar4 = iVar4 + 0x14;
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_10011d20/*ROM*/);
    }
    iVar2 = 0;
    if (0 < DAT_10011d38/*ROM*/) {
      iVar4 = 0;
      do {
        *(uint32_t *)(DAT_10011cf4/*ROM*/ + iVar4) = 0;
        iVar4 = iVar4 + 0x1c;
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_10011d38/*ROM*/);
    }
    iVar2 = 0;
    if (0 < DAT_10011d1e/*ROM*/) {
      iStack_8c = 0;
      do {
        uVar5 = (*DAT_10011c8c/*ROM*/)((int)*(short *)(DAT_10011cc4/*ROM*/ + iStack_8c),
                                (short *)(DAT_10011cc4/*ROM*/ + iStack_8c) + 2);
        if (uVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          iterate_virtual_callback_table(uVar5 & 0xffffb1ff,(int)*(short *)(DAT_10011cc4/*ROM*/ + iStack_8c));
        }
        iStack_8c = iStack_8c + 0x18;
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_10011d1e/*ROM*/);
    }
    iVar2 = 0;
    if (0 < DAT_10011d36/*ROM*/) {
      iVar4 = 0;
      do {
        *(uint32_t *)(DAT_10011cf0/*ROM*/ + iVar4) = 0;
        iVar4 = iVar4 + 0x18;
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_10011d36/*ROM*/);
    }
    iVar2 = 0;
    if (0 < DAT_10011d1c/*ROM*/) {
      iVar4 = 0;
      do {
        uVar5 = (*DAT_10011c88/*ROM*/)((int)*(short *)(DAT_10011cc0/*ROM*/ + iVar4),
                                (short *)(DAT_10011cc0/*ROM*/ + iVar4) + 2);
        if (uVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          iterate_virtual_callback_table(uVar5 & 0xffff57ff,(int)*(short *)(DAT_10011cc0/*ROM*/ + iVar4));
        }
        iVar4 = iVar4 + 0x10;
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_10011d1c/*ROM*/);
    }
    _DAT_6a000030 = 0x6a000000;
    iVar2 = 1;
    iVar4 = 0;
    do {
      *(int *)(iVar4 + 0x6a000000) = iVar4 + 0x6a000000;
      *(int *)(iVar4 + 0x6a000008) = iVar4 + 0x6a000008;
      *(int *)(iVar4 + 0x6a000010) = iVar4 + 0x6a000010;
      iVar2 = iVar2 + -1;
      iVar4 = iVar4 + 0x18;
    } while (-1 < iVar2);
    iVar2 = 0;
    if (0 < DAT_10011d1a/*ROM*/) {
      iVar4 = 0;
      do {
        iVar6 = iVar4 + 4;
        iVar1 = iVar4 + 8;
        iVar4 = iVar4 + 0xc;
        (**(code **)((char*)PTR_DAT_10011cbc + iVar1))(*(uint32_t *)((char*)PTR_DAT_10011cbc + iVar6));
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_10011d1a/*ROM*/);
    }
    svc_raise_dicr_thunk();
    return;
  }
                    /* WARNING: Subroutine does not return */
  kernel_panic(0x4000,(int)DAT_10011d18/*ROM*/);
}
