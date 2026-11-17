/* @k10d construct_cls_105aa4c0_object @ 0x10476f60
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object of class cls_105aa4c0 by setting its vtable pointer and calling
 *   the base class constructor.
 * summary:
 *   Checks if the object pointer is non-null. If valid, writes the vtable address
 *   0x105aa4c0 to the object's first word. Calls destructor_free_if_flagged_1047e01a, which
 *   is the verified virtual method slot 1 (constructor) of the base class cls_105aae4c,
 *   passing 0 as an argument. If the second parameter's least significant bit is set, calls
 *   release_heap_block_104771a2 on the object, likely for additional initialization or
 *   activation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void construct_cls_105aa4c0_object(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x105aa4c0/*ROM*/;
    destructor_free_if_flagged_1047e01a(param_1,0);
    if ((param_2 & 1) != 0) {
      release_heap_block_104771a2(param_1);
    }
  }
  return;
}
