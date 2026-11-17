/* @k10d cls_1055a4c4_new @ 0x10390d9c
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x1055a4c4; returns param_1)
 * unit: 038_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1055a4c4 (vtable 0x1055a4c4, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x1055a4c4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_1055a4c4_new(void *param_1)

{
  if ((param_1 != (void *)0x0) || (param_1 = (void *)heap_alloc((void *)0x18), param_1 != (uint32_t *)0x0)
     ) {
    *(uint32_t *)((int)param_1 + 0x14) = 0x1055a4c4/*ROM*/;
    initialize_lens_update_object(param_1,0xc);
    cls_105a2be0_new((uint32_t *)((int)param_1 + 0xc));
    call_helper_with_fixed_args_10390ece(param_1);
  }
  return (int)param_1;
}
