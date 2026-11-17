/* @k10d dispatch_virtual_event_if_idle @ 0x10410106
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Checks two status flags and conditionally invokes two virtual methods on the object
 *   before calling a helper with fixed parameters.
 * summary:
 *   The function retrieves a pointer via get_sysparam_store_instance and checks a status
 *   byte via read_sysparam_byte. If both that status and the byte at offset 0x9f of the
 *   object are zero, it calls virtual slots 27 and 19 (derived from vtable offsets 0x11c
 *   and 0xfc) with arguments 0xf and none respectively. Finally, it unconditionally calls
 *   send_two_word_pair_over_ch2 with the object, 0x1428, 3, and 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_event_if_idle(int param_1)

{
  uint8_t *puVar1;
  char cVar2;
  
  puVar1 = (uint8_t *)get_sysparam_store_instance();
  cVar2 = read_sysparam_byte(puVar1);
  if ((cVar2 == '\0') && (*(char *)(param_1 + 0x9f) == '\0')) {
    (**(code **)(*(int *)(param_1 + 4) + 0x11c))
              (*(short *)(*(int *)(param_1 + 4) + 0x118) + param_1,0xf);
    (**(code **)(*(int *)(param_1 + 4) + 0xfc))(*(short *)(*(int *)(param_1 + 4) + 0xf8) + param_1);
  }
  send_two_word_pair_over_ch2(param_1,0x1428,3,1);
  return;
}
