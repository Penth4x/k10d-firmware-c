/* @k10d cls_105bb0ec_new @ 0x104dea28
 * name: verified (structural evidence: heap_alloc(0x98) when NULL; stores vtable 0x105bb0ec; returns param_1)
 * unit: 248_menu_parser (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105bb0ec (vtable 0x105bb0ec, 0x98 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x98) when NULL; stores vtable 0x105bb0ec; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105bb0ec": ignoring overlapping field "field_0x8" */
/* WARNING: Struct "cls_1059e128": ignoring overlapping field "field_0x8" */

cls_105bb0ec * cls_105bb0ec_new(cls_105bb0ec *param_1)

{
  uint uVar1;
  void *puVar2;
  
  if ((param_1 != (cls_105bb0ec *)0x0) || (param_1 = (cls_105bb0ec *)heap_alloc((void *)0x98), param_1 != (cls_105bb0ec *)0x0)) {
    cls_1059e128_new((cls_1059e128 *)param_1);
    cls_105b8234_new(&param_1->field_0x40);
    param_1->field_0x0 = (uintptr_t)((void *)0x105bb0ec/*ROM*/);
    ((uint32_t *)&(param_1->field_0x4))[0] = (uint32_t)((void *)0x105bb1d4/*ROM*/);
    param_1->field_0x18 = (uintptr_t)((void *)0x105bb1f4/*ROM*/);
    param_1->field_0x2c = (uintptr_t)((void *)0x105bb224/*ROM*/);
    ((uint32_t *)&(param_1->field_0x30))[0] = (uint32_t)((void *)0x105bb23c/*ROM*/);
    param_1->field_0x34 = (uintptr_t)((void *)0x105bb25c/*ROM*/);
    ((uint32_t *)&(param_1->field_0x40))[0] = 0x105bb29c/*ROM*/;
    param_1->field_0x44 = (uintptr_t)((void *)0x20);
    param_1->field_0x48 = 0;
    uVar1 = find_first_free_bit(param_1);
    param_1->field_0x4c = uVar1;
    puVar2 = (void *)find_first_free_bit(param_1);
    param_1->field_0x50 = (uintptr_t)(puVar2);
    uVar1 = find_first_free_bit(param_1);
    param_1->field_0x54 = uVar1;
    uVar1 = find_first_free_bit(param_1);
    param_1->field_0x58 = uVar1;
    uVar1 = find_first_free_bit(param_1);
    param_1->field_0x5c = (char)(uVar1 >> 0x18);
    param_1->field_0x5d = (char)(uVar1 >> 0x10);
    param_1->field_0x5e = (char)(uVar1 >> 8);
    param_1->field_0x5f = (char)uVar1;
    uVar1 = find_first_free_bit(param_1);
    param_1->field_0x60 = uVar1;
    uVar1 = find_first_free_bit(param_1);
    param_1->field46_0x64 = (char)(uVar1 >> 0x18);
    param_1->field_0x65 = (char)(uVar1 >> 0x10);
    param_1->field_0x66 = (short)uVar1;
    uVar1 = find_first_free_bit(param_1);
    param_1->field_0x68 = uVar1;
    param_1->field_0x6c = param_1->field_0x48;
    param_1->field_0x70 = (uintptr_t)((uint32_t *)0x0);
    param_1->field_0x74 = (uintptr_t)((int *)0x0);
    param_1->field_0x78 = (uintptr_t)((int *)0x0);
    param_1->field_0x7c = 0;
    param_1->field_0x80 = 0;
    param_1->field_0x84 = 0;
    param_1->field_0x88 = 0;
    param_1->field_0x8c = 0;
    param_1->field59_0x90 = '\0';
    param_1->field_0x91 = '\0';
    param_1->field_0x92 = '\0';
    param_1->field_0x93 = '\0';
    param_1->field_0x94 = '\0';
  }
  return param_1;
}
