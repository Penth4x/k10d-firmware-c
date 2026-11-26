/* @k10d ec_event_enqueue @ 0x10431e34
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed copy_event_blocks_and_signal)
 * unit: 117_event_context_manager (unit names are model-proposed)
 * purpose:
 *   Copies four 15-byte blocks from param_2 to a buffer at param_1+0x98, sets a flag, and
 *   signals a semaphore.
 * summary:
 *   The function acquires a semaphore at param_1+0x90, calls empty_stub_function_10433096
 *   with the buffer pointer and param_2, then manually copies four 15-byte chunks (offsets
 *   4, 0x13, 0x22, 0x31) from param_2 to the buffer. If the byte at param_1+0x8c is zero,
 *   it sets it to 1 and calls set_flg_obj on param_1+0x7c. Finally, it signals the
 *   semaphore. The structure suggests an event or data queue update with synchronization.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ec_event_enqueue(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  twai_sem_obj((uint32_t *)(param_1 + 0x90),(int)(_DAT_105a2bf0/*ROM*/));
  iVar1 = *(int *)(param_1 + 0x98);
  empty_stub_function_10433096(iVar1,param_2);
  iVar2 = 0xf;
  do {
    iVar2 = iVar2 + -1;
    *(uint8_t *)(iVar2 + iVar1 + 4) = *(uint8_t *)(iVar2 + param_2 + 4);
  } while (iVar2 != 0);
  iVar2 = 0xf;
  do {
    iVar2 = iVar2 + -1;
    *(uint8_t *)(iVar2 + iVar1 + 0x13) = *(uint8_t *)(iVar2 + param_2 + 0x13);
  } while (iVar2 != 0);
  iVar2 = 0xf;
  do {
    iVar2 = iVar2 + -1;
    *(uint8_t *)(iVar2 + iVar1 + 0x22) = *(uint8_t *)(iVar2 + param_2 + 0x22);
  } while (iVar2 != 0);
  iVar2 = 0xf;
  do {
    iVar2 = iVar2 + -1;
    *(uint8_t *)(iVar2 + iVar1 + 0x31) = *(uint8_t *)(iVar2 + param_2 + 0x31);
  } while (iVar2 != 0);
  if (*(char *)(param_1 + 0x8c) == '\0') {
    *(uint8_t *)(param_1 + 0x8c) = 1;
    set_flg_obj((uint32_t *)(param_1 + 0x7c), 0x20);
  }
  sig_sem_obj((uint32_t *)(param_1 + 0x90));
  return;
}
