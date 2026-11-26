/* @k10d alloc_or_acquire_heap_block @ 0x104597ac
 * name: model (proposed by the local model from the decompile, confidence 0.72)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x20000-byte heap block when param_2 is zero, otherwise acquires an
 *   existing block via param_2, storing the handle in *param_1 and mapping errors to -1/-3.
 * summary:
 *   Writes param_2 into *param_1 and sets a local size field to 0x20000. If param_2 is zero
 *   it calls find_free_tcb_slot_1000d770 with the size descriptor; otherwise it calls
 *   validate_task_id_and_flag with a truncated param_2 and the descriptor. On success it
 *   stores the returned handle in *param_1; on failure it maps 0 to 0, -0x21 to -1, and any
 *   other code to -3. The module context (rtos_wrappers_and_heap) supports a heap
 *   allocation/acquisition role, but the specific kernel services are unnamed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "syscall_traps.h"

int alloc_or_acquire_heap_block(int *param_1,int param_2,uint32_t param_3)

{
  int iVar1;
  /* The kernel service reads a 2-word descriptor: attr at +0, iflgptn at +4 (write_timeout_queue_node
   * copies *(uint32_t*)(param_2+2 halfwords = +4) into the CB's flgptn field). The decompiler split
   * the descriptor into two NON-adjacent stack locals (uStack_c @ sp+0xc, uStack_8 @ sp+8), so
   * &uStack_c + 4 landed on an uninitialized slot (the dropped `sp` local) instead of param_3 ->
   * every created object got a GARBAGE flgptn. Flag 0x35 (waited on ORW/0xffffffff) then matched its
   * garbage and the display task never blocked -> boot-blocking derail. Lay the two words out
   * contiguously so iflgptn (+4) is param_3, as the original did. */
  uint32_t desc[2];

  desc[0] = 0x20000;
  *param_1 = param_2;
  desc[1] = param_3;
  if (param_2 == 0) {
    iVar1 = __trap_find_free_tcb_slot_1000d770(desc);
    if (0 < iVar1) {
      *param_1 = iVar1;
      return iVar1;
    }
  }
  else {
    iVar1 = __trap_validate_task_id_and_flag((int)(short)param_2,desc);
  }
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else if (iVar1 == -0x21) {
    iVar1 = -1;
  }
  else {
    iVar1 = -3;
  }
  return iVar1;
}
