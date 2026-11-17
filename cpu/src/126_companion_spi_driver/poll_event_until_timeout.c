/* @k10d poll_event_until_timeout @ 0x10448ae8
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Polls a status word in a loop, invoking a handler while a condition bit is set, until a
 *   timeout count or a flag change occurs.
 * summary:
 *   The function checks if a timeout value (param_3) is non-zero and a flag at offset 0xdc
 *   is clear. It repeatedly calls an unknown function at 0x1044ad6e to read a status word
 *   from offset 0x110. If the status word matches a mask (param_2), it calls layout_pump
 *   and increments a counter. The loop exits if the counter exceeds the timeout or if the
 *   flag at 0xdc becomes non-zero. It returns 1 if the loop completed without the flag
 *   changing, otherwise 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t poll_event_until_timeout(void *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint32_t uStack_c;
  
  uStack_c = 0;
  uVar2 = 0;
  if ((param_3 * 0x46 != 0) && (*(char *)((int)param_1 + 0xdc) == '\0')) {
    while (uVar1 = (*(code *)0x1044ad6e/*ROM*/)(*(uint32_t *)((int)param_1 + 0x110)),
          (uVar1 & param_2) != 0) {
      layout_pump(param_1);
      uVar2 = uVar2 + 1;
      if ((uint)(param_3 * 0x46) <= uVar2) {
        return 0;
      }
      if (*(char *)((int)param_1 + 0xdc) != '\0') {
        return 0;
      }
    }
    uStack_c = 1;
  }
  return uStack_c;
}
