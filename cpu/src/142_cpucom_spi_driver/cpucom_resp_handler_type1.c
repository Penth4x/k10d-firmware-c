/* @k10d cpucom_resp_handler_type1 @ 0x10464f5a
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed copy_payload_and_notify_context)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Copies a data payload from a source buffer to a destination buffer and invokes virtual
 *   methods on the context object.
 * summary:
 *   The function takes a context object (param_1) and a data buffer (param_2). It extracts
 *   source, destination, and length values from the buffer using helper functions. If the
 *   destination pointer in the context is non-null, it copies the payload bytes. It then
 *   calls virtual methods at offsets 0x84 and 0x8c on the context, passing the result of
 *   the first call to the second, and returns a flag indicating whether a copy occurred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t cpucom_resp_handler_type1(int *param_1,uint8_t *param_2)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  uint32_t uVar5;
  
  release_pointer_at_offset_0x3c(param_1);
  iVar2 = get_cpucom_msg_data_ptr_104655aa(param_2);
  uVar3 = cpucom_resp_get_byte0(param_2);
  iVar4 = get_cpucom_msg_data_ptr_104655b6(param_2);
  iVar1 = param_1[2];
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    while (iVar4 != 0) {
      iVar4 = iVar4 + -1;
      *(uint8_t *)(iVar4 + iVar1) = *(uint8_t *)(iVar4 + iVar2);
    }
    uVar5 = 1;
  }
  uVar3 = (**(code **)(*param_1 + 0x84))((int)*(short *)(*param_1 + 0x80) + (int)param_1,uVar3);
  release_context_at_offset_0x3c(param_1);
  (**(code **)(*param_1 + 0x8c))((int)*(short *)(*param_1 + 0x88) + (int)param_1,uVar3,0);
  return uVar5;
}
