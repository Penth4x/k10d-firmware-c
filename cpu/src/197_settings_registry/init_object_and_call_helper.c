/* @k10d init_object_and_call_helper @ 0x104933c0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 197_settings_registry (unit names are model-proposed)
 * purpose:
 *   Constructs an object at a fixed SDRAM address and then calls an unnamed helper with a
 *   fixed SDRAM pointer.
 * summary:
 *   The function calls cls_105a5c2c_new to initialize an object at DAT_80048f7c with
 *   argument 0. It then calls prepend_to_singly_linked_list with the constant address
 *   0x800104f0. No camera-specific behavior is evident from the pseudocode or the single
 *   unnamed callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_and_call_helper(void)

{
  cls_105a5c2c_new((cls_105a5c2c *)&DAT_80048f7c/*SDRAM*/,0);
  prepend_to_singly_linked_list((void *)0x800104f0/*SDRAM*/);
  return;
}
