/* @k10d cls_105ab468_new @ 0x104809a4
 * name: verified (structural evidence: heap_alloc(0x20) when NULL; stores vtable 0x105ab468; returns param_1)
 * unit: 174_module_registry (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105ab468 (vtable 0x105ab468, 0x20 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x20) when NULL; stores vtable 0x105ab468; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

cls_105ab468 * cls_105ab468_new(cls_105ab468 *param_1)

{
  uintptr_t sp;
  uint8_t *puVar1;
  uint8_t *puVar2;
  uint8_t auStack_1c [16];
  
  puVar1 = auStack_1c;
  puVar2 = auStack_1c;
  if ((param_1 != (cls_105ab468 *)0x0) ||
     (param_1 = (cls_105ab468 *)heap_alloc((void *)0x20), puVar2 = puVar1, param_1 != (cls_105ab468 *)0x0))
  {
    param_1->field_0x1c = (uintptr_t)(&DAT_105ab468/*ROM*/);
    param_1->field_0xd = 0;
    param_1->field_0x10 = 0;
    puVar2[3] = 0;
    puVar2[7] = 0;
    puVar2[0xb] = 0;
    puVar2[0xf] = 0;
    alloc_and_init_small_struct_1045c524(&param_1->field_0x14,(uint)_DAT_105a5c18/*ROM*/,1,1,puVar2[3],puVar2[7],puVar2[0xb],
                 puVar2[0xf]);
    param_1->field_0x0 = 0;
  }
  return param_1;
}
