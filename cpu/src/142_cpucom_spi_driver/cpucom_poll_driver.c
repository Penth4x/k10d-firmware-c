/* @k10d cpucom_poll_driver @ 0x1046650e
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed complete_cpucom_spi_transaction)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Executes a CPUCOM SPI transfer, handles errors, and dispatches the response to a
 *   virtual handler.
 * summary:
 *   Calls cpucom_spi_xfer using pointers stored in the transaction context (param_1). If
 *   the transfer fails (non-zero return), it invokes error handling routines
 *   (cpucom_resp_get_byte0, get_cpucom_msg_data_ptr_104655b6,
 *   invoke_virtual_slot_3_on_member_10466604). On success or failure, it retrieves a
 *   handler object and calls a virtual method (slot 2) with the response data and status
 *   flag. Finally, it updates the context state and calls release_context_fields.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cpucom_poll_driver(void *param_1,uint8_t *param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  uint32_t uVar4;
  bool bVar5;
  
  iVar2 = cpucom_spi_xfer(*(void **)((int)param_1 + 0x24),param_2,
                          *(uint8_t **)((int)param_1 + 0x28));
  *(int *)((int)param_1 + 0x130) = iVar2;
  bVar5 = iVar2 != _DAT_105a7ce8/*ROM*/;
  if (bVar5) {
    cpucom_resp_get_byte0(param_2);
    get_cpucom_msg_data_ptr_104655b6(param_2);
    cpucom_resp_get_byte0(*(uint8_t **)((int)param_1 + 0x28));
    get_cpucom_msg_data_ptr_104655b6(*(void **)((int)param_1 + 0x28));
    invoke_virtual_slot_3_on_member_10466604(param_1);
  }
  piVar3 = (int *)read_struct_field_at_offset_0x14(param_2);
  iVar2 = *piVar3;
  sVar1 = *(short *)(iVar2 + 0x10);
  uVar4 = get_field_at_offset_0x10_104655ce(param_2);
  (**(code **)(iVar2 + 0x14))((int)piVar3 + (int)sVar1,uVar4,bVar5);
  release_object_and_free_heap(param_2,3);
  if (!bVar5) {
    cpucom_response_dispatcher(*(void **)((int)param_1 + 0x13c),*(uint8_t **)((int)param_1 + 0x28));
  }
  release_context_fields(*(void **)((int)param_1 + 0x24));
  return;
}
