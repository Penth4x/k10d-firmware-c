/* @k10d rtos_context_switch @ 0x1000d5cc
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed dispatch_ready_task_chain)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Walks a linked list of task control blocks, invoking each task's entry point and
 *   updating its state.
 * summary:
 *   The function iterates through a chain of structures linked via offset 0x3c. For each
 *   node, it calls lens_fw_update_stub_105370e8 with arguments from offsets 0x3c and 0x40,
 *   executes the function pointer at offset 0x38, and calls lens_fw_update_stub_105370f6.
 *   It clears the link pointer (0x3c) after processing and updates a status byte at offset
 *   0x22. The module context suggests this is part of the RTOS scheduler or task dispatch
 *   logic.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t rtos_context_switch(void)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  code *pcVar4;
  int iVar5;
  uintptr_t sp;
  int *piVar6;
  int *piVar7;
  uint in_ps;
  
  iVar1 = (uint)_DAT_6a003758 * 0x44;
  iVar5 = iVar1 + 0x6a001be8;
  iVar2 = *(int *)(iVar1 + 0x6a001c24);
  *(uint32_t *)(iVar1 + 0x6a001c24) = 0;
  *(uint8_t *)(iVar1 + 0x6a001c0a) = 1;
  piVar6 = (int *)&stack0xffffffb8;
  while( true ) {
    uVar3 = *(uint32_t *)(iVar5 + 0x40);
    pcVar4 = *(code **)(iVar5 + 0x38);
    piVar7 = (int *)((int)piVar6 + -4);
    *(int *)((int)piVar6 + -4) = iVar5;
    lens_fw_update_stub_105370e8(iVar2,uVar3);
    (*pcVar4)();
    lens_fw_update_stub_105370f6();
    iVar5 = *piVar7;
    piVar6 = piVar7 + 1;
    iVar2 = *(int *)(iVar5 + 0x3c);
    if (iVar2 == 0) break;
    *(uint32_t *)(iVar5 + 0x3c) = 0;
  }
  if (*(char *)(iVar5 + 0x22) != '\x03') {
    *(uint8_t *)(iVar5 + 0x22) = 0;
  }
  piVar7[2] = piVar7[2] & 0xffe0ffffU | in_ps & 0x1f0000;
  piVar7[1] = piVar7[1];
  return *(uint64_t *)(piVar7 + 6);
}
