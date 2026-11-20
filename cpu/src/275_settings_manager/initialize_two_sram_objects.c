/* @k10d initialize_two_sram_objects @ 0x1051bfb6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 275_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructs an object at 0x8005a15c and initializes a second structure at 0x800133a8.
 * summary:
 *   Calls cls_105a2af8_new to allocate/initialize an object in SDRAM at 0x8005a15c. Then
 *   calls prepend_to_singly_linked_list to initialize or configure a second data structure
 *   at 0x800133a8. No camera-specific MMIO or subsystem behavior is visible in the
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_two_sram_objects(void)

{
  cls_105a2af8_new((cls_105a2af8 *)0x8005a15c/*SDRAM*/);
  prepend_to_singly_linked_list((void *)0x800133a8/*SDRAM*/);
  return;
}
