/* @k10d init_singleton_object_104dc134 @ 0x104dc134
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Lazily initializes a singleton object at 0x80059dc0 on first call and returns its
 *   pointer.
 * summary:
 *   Checks the flag at 0x80059e80; if zero, sets it to 1, calls cls_105bb0b8_new to
 *   construct an object at 0x80059dc0, stores a pointer to 0x105ba2d8 in uRam80059ddc, and
 *   calls prepend_to_singly_linked_list with argument 0x80010884. Returns the address
 *   0x80059dc0 regardless of whether initialization occurred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_singleton_object_104dc134(void)

{
  if (iRam80059e80 == 0) {
    iRam80059e80 = 1;
    cls_105bb0b8_new((void *)0x80059dc0/*SDRAM*/);
    uRam80059ddc = 0x105ba2d8/*ROM*/;
    prepend_to_singly_linked_list((void *)0x80010884/*SDRAM*/);
  }
  return 0x80059dc0/*SDRAM*/;
}
