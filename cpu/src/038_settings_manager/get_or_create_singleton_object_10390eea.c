/* @k10d get_or_create_singleton_object_10390eea @ 0x10390eea
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 038_settings_manager (unit names are model-proposed)
 * purpose:
 *   Lazily initializes a global object at 0x80019860 on first call and returns its pointer.
 * summary:
 *   Checks the flag at 0x80019868; if zero, sets it to 1, calls cls_1055a4d4_new to
 *   construct an object at 0x80019860, and calls prepend_to_singly_linked_list with
 *   0x800044d8. Returns the pointer 0x80019860. The specific role of the object is not
 *   determinable from the pseudocode or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_create_singleton_object_10390eea(void)

{
  if (_DAT_80019868/*SDRAM*/ == 0) {
    _DAT_80019868/*SDRAM*/ = 1;
    cls_1055a4d4_new((cls_1055a4d4 *)0x80019860/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x800044d8/*SDRAM*/);
  }
  return 0x80019860/*SDRAM*/;
}
