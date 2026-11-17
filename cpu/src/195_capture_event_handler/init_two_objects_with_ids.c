/* @k10d init_two_objects_with_ids @ 0x10492962
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 195_capture_event_handler (unit names are model-proposed)
 * purpose:
 *   Constructs two objects at fixed SDRAM addresses and passes two other SDRAM addresses to
 *   an unknown helper.
 * summary:
 *   The function calls cls_105a2af8_new and cls_105a2be0_new with pointers 0x80048f20 and
 *   0x80048f28 respectively, likely initializing object instances in SDRAM. It also calls
 *   prepend_to_singly_linked_list twice with addresses 0x800104a4 and 0x800104b4. The
 *   specific roles of these objects and the helper function are not determinable from the
 *   provided pseudocode and callee list.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_two_objects_with_ids(void)

{
  cls_105a2af8_new((void *)0x80048f20/*SDRAM*/);
  prepend_to_singly_linked_list((void *)0x800104a4/*SDRAM*/);
  cls_105a2be0_new((void *)0x80048f28/*SDRAM*/);
  prepend_to_singly_linked_list((void *)0x800104b4/*SDRAM*/);
  return;
}
