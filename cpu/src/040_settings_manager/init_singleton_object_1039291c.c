/* @k10d init_singleton_object_1039291c @ 0x1039291c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Lazily initializes a global object at 0x80019988 on first call and returns its pointer.
 * summary:
 *   Checks the flag at 0x80019a0c; if zero, sets it to 1, calls cls_10562850_new to
 *   construct an object at 0x80019988, and calls prepend_to_singly_linked_list with
 *   0x80004540. Returns the pointer 0x80019988. This is a standard lazy-initialization
 *   singleton pattern.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t init_singleton_object_1039291c(void)

{
  if (_DAT_80019a0c/*SDRAM*/ == 0) {
    _DAT_80019a0c/*SDRAM*/ = 1;
    cls_10562850_new((cls_10562850 *)0x80019988/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80004540/*SDRAM*/);
  }
  return 0x80019988/*SDRAM*/;
}
