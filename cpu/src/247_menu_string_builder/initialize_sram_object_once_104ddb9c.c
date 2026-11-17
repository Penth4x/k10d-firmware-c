/* @k10d initialize_sram_object_once_104ddb9c @ 0x104ddb9c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Performs a one-time initialization of a SDRAM object at 0x80059e40 guarded by a flag.
 * summary:
 *   Checks the flag at 0x80059e90; if zero, sets it to 1, calls cls_105bb0b8_new to
 *   construct an object at 0x80059e40, stores the constant 0x105ba358 into 0x80059e5c, and
 *   calls prepend_to_singly_linked_list with argument 0x800108c4. Returns the pointer
 *   0x80059e40. The specific role of the object and the callees is not determinable from
 *   the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_sram_object_once_104ddb9c(void)

{
  if (iRam80059e90 == 0) {
    iRam80059e90 = 1;
    cls_105bb0b8_new((void*)0x80059e40/*SDRAM*/);
    uRam80059e5c = 0x105ba358/*ROM*/;
    prepend_to_singly_linked_list((void*)0x800108c4/*SDRAM*/);
  }
  return 0x80059e40/*SDRAM*/;
}
