/* @k10d initialize_sram_object_once_104b743a @ 0x104b743a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 220_shutter_trigger (unit names are model-proposed)
 * purpose:
 *   Performs a one-time initialization of a SDRAM object at 0x800495c0 guarded by a flag.
 * summary:
 *   Checks the global flag iRam80049e34; if zero, sets it to 1, calls cls_105b8a04_new to
 *   construct an object at 0x800495c0, and calls prepend_to_singly_linked_list with
 *   0x80010778. Returns the pointer 0x800495c0. The role of the constructed object and the
 *   second callee is not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_sram_object_once_104b743a(void)

{
  if (iRam80049e34 == 0) {
    iRam80049e34 = 1;
    cls_105b8a04_new((cls_105b8a04 *)0x800495c0/*SDRAM*/);
    prepend_to_singly_linked_list((uint32_t *)(0x80010778/*SDRAM*/));
  }
  return 0x800495c0/*SDRAM*/;
}
