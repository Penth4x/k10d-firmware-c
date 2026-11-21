/* @k10d cls_105b9400_new @ 0x104c23b4
 * name: verified (structural evidence: heap_alloc(0x1dc) when NULL; stores vtable 0x105b9400; returns param_1)
 * unit: 227_sensor_config_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b9400 (vtable 0x105b9400, 0x1dc bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1dc) when NULL; stores vtable 0x105b9400; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

cls_105b9400 * cls_105b9400_new(cls_105b9400 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uintptr_t sp;
  uint8_t *puVar4;
  uint8_t *puVar5;
  uint8_t auStack_24 [16];
  
  puVar4 = auStack_24;
  puVar5 = auStack_24;
  if ((param_1 != (cls_105b9400 *)0x0) ||
     (param_1 = (cls_105b9400 *)heap_alloc((void *)0x1dc), puVar5 = puVar4, param_1 != (cls_105b9400 *)0x0))
  {
    param_1->field_0x1d8 = (uintptr_t)(&DAT_105b9400/*ROM*/);
    param_1->field_0x0 = 0xffffffff;
    param_1->field_0x4 = 0;
    param_1->field_0x6 = 0;
    param_1->field_0x8 = 0xffffffff;
    param_1->field_0x19 = 0;
    param_1->field_0x1c = 0;
    puVar5[3] = 0;
    puVar5[7] = 0;
    puVar5[0xb] = 0;
    puVar5[0xf] = 0;
    alloc_and_init_small_struct_1045c524(&param_1->field_0x20,(uint)_DAT_105a5c18/*ROM*/,1,1,puVar5[3],puVar5[7],puVar5[0xb],
                 puVar5[0xf]);
    param_1->field_0x28 = 0;
    param_1->field_0x2c = 0;
    param_1->field_0x30 = 0;
    get_lens_fw_update_status((int)param_1 + 0x38, 4, 0x38, (code *)init_56_byte_struct_104c2344);
    puVar5[3] = 0;
    puVar5[7] = 0;
    puVar5[0xb] = 0;
    puVar5[0xf] = 0;
    alloc_and_init_small_struct_1045c524(&param_1->field_0x1cc,(uint)_DAT_105a5c18/*ROM*/,1,1,puVar5[3],puVar5[7],puVar5[0xb],
                 puVar5[0xf]);
    param_1->field_0x1d4 = 0;
    param_1->field_0x1d6 = 0;
    param_1->field_0x1d7 = 0;
    iVar3 = 3;
    iVar1 = 0;
    do {
      iVar2 = iVar1;
      (&param_1->field_0xc)[iVar2] = 0;
      (&param_1->field_0xd)[iVar2] = 0;
      (&param_1->field_0xe)[iVar2] = 0;
      iVar3 = iVar3 + -1;
      iVar1 = iVar2 + 3;
    } while (-1 < iVar3);
    (&param_1->field_0xf)[iVar2] = 0;
    param_1->field_0x31 = 0;
    param_1->field_0x32 = 0;
    param_1->field_0x33 = 0;
    param_1->field_0x34 = 0;
    iVar3 = 8;
    iVar1 = 0;
    do {
      *(uint32_t *)((int)&param_1->field_0x118 + iVar1) = 0;
      *(uint32_t *)((int)&param_1->field_0x11c + iVar1) = 0;
      *(uint32_t *)((int)&param_1->field_0x120 + iVar1) = 0;
      *(uint32_t *)((int)&param_1->field_0x124 + iVar1) = 0;
      *(uint32_t *)((int)&param_1->field_0x128 + iVar1) = 0;
      iVar3 = iVar3 + -1;
      iVar1 = iVar1 + 0x14;
    } while (-1 < iVar3);
  }
  return param_1;
}
