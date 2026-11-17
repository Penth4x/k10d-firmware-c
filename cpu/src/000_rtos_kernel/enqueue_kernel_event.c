/* @k10d enqueue_kernel_event @ 0x10011af4
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Writes an event descriptor into a per-slot ring buffer and dispatches it to a handler
 *   based on a flag.
 * summary:
 *   The function uses the global index _DAT_6a003758 to calculate an offset into a memory
 *   region at 0x6a001c06, writing a type (4), a sub-type (6), the first argument, and a
 *   pointer to a 0x44-byte slot. It then calls ready_list_unlink with the index.
 *   Subsequently, it accesses a structure at DAT_10011d08 offset by param_1 * 0x10 and
 *   branches to either remove_node_from_timeout_queue_10011a20 or
 *   insert_into_priority_queue depending on bit 0 of a field at offset -0xc. The source
 *   module is identified as rtos_kernel, suggesting this is a kernel-level event or message
 *   queuing mechanism.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void enqueue_kernel_event(ushort param_1,void *param_2)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  
  sVar1 = _DAT_6a003758;
  iVar2 = (int)_DAT_6a003758;
  *(uint8_t *)(_DAT_6a003758 * 0x44 + 0x6a001c06) = 4;
  *(uint8_t *)(iVar2 * 0x44 + 0x6a001c07) = 6;
  *(ushort *)(sVar1 * 0x44 + 0x6a001c08) = param_1;
  *(void **)(sVar1 * 0x44 + 0x6a001c10) = param_2;
  ready_list_unlink(sVar1);
  iVar2 = DAT_10011d08/*ROM*/ + (uint)param_1 * 0x10;
  psVar3 = (short *)(iVar2 + -0x10);
  if ((*(ushort *)(iVar2 + -0xc) & 1) == 0) {
    remove_node_from_timeout_queue_10011a20(psVar3);
  }
  else {
    insert_into_priority_queue(_DAT_6a003758,psVar3);
  }
  return;
}
