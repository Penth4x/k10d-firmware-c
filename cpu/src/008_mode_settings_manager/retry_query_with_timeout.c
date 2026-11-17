/* @k10d retry_query_with_timeout @ 0x10367678
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 008_mode_settings_manager (unit names are model-proposed)
 * purpose:
 *   Retries a query call up to five times until it returns a non-retry status, returning
 *   success if the final status is 1.
 * summary:
 *   The function builds a small 20-byte parameter block on the stack, initializing it with
 *   fixed pointers (0x80015af0, 0x800158dc), a count of 3, a -1 value, and a byte from
 *   DAT_800043a0. It calls invoke_virtual_slot_two_on_four_objects_1036b766 before each
 *   attempt and then calls dispatch_event_with_payload_1036b92c with param_1 and the block
 *   contents. The loop continues while the callee returns 3 (interpreted as a retry/wait
 *   status) and the attempt count is under 5. The function returns true only if the final
 *   return value from dispatch_event_with_payload_1036b92c is 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool retry_query_with_timeout(void *param_1)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t *puVar3;
  uint8_t auStack_3c [20];
  
  puVar3 = (uint32_t *)auStack_3c;
  iVar2 = 0;
  do {
    invoke_virtual_slot_two_on_four_objects_1036b766();
    *puVar3 = 0x80015af0/*SDRAM*/;
    puVar3[3] = 3;
    puVar3[1] = 0x800158dc/*SDRAM*/;
    puVar3[2] = 0xffffffff;
    *(uint8_t *)((int)puVar3 + 0x13) = DAT_800043a0/*SDRAM*/;
    iVar1 = dispatch_event_with_payload_1036b92c(param_1,0,(void *)0x80018058/*SDRAM*/,0x80015d04/*SDRAM*/,*puVar3,puVar3[1],puVar3[2],
                         puVar3[3],*(uint8_t *)((int)puVar3 + 0x13));
    if (iVar1 != 3) break;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  return iVar1 == 1;
}
