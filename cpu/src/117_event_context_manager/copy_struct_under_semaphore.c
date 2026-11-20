/* @k10d copy_struct_under_semaphore @ 0x10431ed4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 117_event_context_manager (unit names are model-proposed)
 * purpose:
 *   Copies four 16-byte blocks from a source struct to a destination while holding a binary
 *   semaphore.
 * summary:
 *   The function waits on the semaphore at param_1+0x90, reads a source pointer from
 *   param_1+0x98, calls empty_stub_function_10433096, then manually copies four 16-byte
 *   chunks from the source to param_2 at offsets 0x3, 0x12, 0x21, and 0x30. It signals the
 *   semaphore upon completion. The specific data being copied is not identifiable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void copy_struct_under_semaphore(int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  twai_sem_obj((uint32_t *)(param_1 + 0x90),(int)(_DAT_105a2bf0/*ROM*/));
  iVar1 = *(int *)(param_1 + 0x98);
  empty_stub_function_10433096((uint32_t)(param_2),(uint32_t)(iVar1));
  iVar3 = 0xf;
  do {
    iVar2 = iVar3 + -1;
    *(uint8_t *)((int)param_2 + iVar3 + 3) = *(uint8_t *)(iVar2 + iVar1 + 4);
    iVar3 = iVar2;
  } while (iVar2 != 0);
  iVar3 = 0xf;
  do {
    iVar2 = iVar3 + -1;
    *(uint8_t *)((int)param_2 + iVar3 + 0x12) = *(uint8_t *)(iVar2 + iVar1 + 0x13);
    iVar3 = iVar2;
  } while (iVar2 != 0);
  iVar3 = 0xf;
  do {
    iVar2 = iVar3 + -1;
    *(uint8_t *)((int)param_2 + iVar3 + 0x21) = *(uint8_t *)(iVar2 + iVar1 + 0x22);
    iVar3 = iVar2;
  } while (iVar2 != 0);
  iVar3 = 0xf;
  do {
    iVar2 = iVar3 + -1;
    *(uint8_t *)((int)param_2 + iVar3 + 0x30) = *(uint8_t *)(iVar2 + iVar1 + 0x31);
    iVar3 = iVar2;
  } while (iVar2 != 0);
  sig_sem_obj((uint32_t *)(param_1 + 0x90));
  return;
}
