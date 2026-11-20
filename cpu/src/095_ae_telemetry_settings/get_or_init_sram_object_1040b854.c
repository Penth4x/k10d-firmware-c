/* @k10d get_or_init_sram_object_1040b854 @ 0x1040b854
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 095_ae_telemetry_settings (unit names are model-proposed)
 * purpose:
 *   Lazily initializes a SDRAM object at 0x8001cf94 on first call and returns its pointer.
 * summary:
 *   Checks the flag at iRam8001cfb0; if zero, sets it to 1, calls cls_1059a294_new to
 *   construct an object at 0x8001cf94, and calls prepend_to_singly_linked_list with
 *   0x8000fb84. Returns the pointer 0x8001cf94. The specific role of the object is not
 *   determinable from the pseudocode or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_object_1040b854(void)

{
  if (iRam8001cfb0 == 0) {
    iRam8001cfb0 = 1;
    cls_1059a294_new((cls_1059a294 *)0x8001cf94/*SDRAM*/);
    prepend_to_singly_linked_list((uint32_t *)(0x8000fb84/*SDRAM*/));
  }
  return 0x8001cf94/*SDRAM*/;
}
