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

void dispatch_virtual_event_if_idle(cls_1059be70 *param_1)

{
  uint8_t *puVar1;
  char cVar2;
  
  puVar1 = (uint8_t *)get_sysparam_store_instance();
  cVar2 = read_sysparam_byte(puVar1);
  if ((cVar2 == '\0') && (param_1->field_0x9f == '\0')) {
    (((vtbl_entry*)(param_1->field_0x4))[35].fn)
              (&param_1->field_0x0 + ((vtbl_entry*)(param_1->field_0x4))[35].adj,0xf);
    (((vtbl_entry*)(param_1->field_0x4))[31].fn)
              (&param_1->field_0x0 + ((vtbl_entry*)(param_1->field_0x4))[31].adj);
  }
  send_two_word_pair_over_ch2((int)(param_1),(uint32_t)(0x1428),(uint32_t)(3),(int)(1));
  return;
}
