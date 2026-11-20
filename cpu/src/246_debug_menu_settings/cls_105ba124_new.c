/* @k10d cls_105ba124_new @ 0x104d7f08
 * name: verified (structural evidence: heap_alloc(0x2b70) when NULL; stores vtable 0x105ba124; returns param_1)
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105ba124 (vtable 0x105ba124, 0x2b70 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x2b70) when NULL; stores vtable 0x105ba124; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105ba0cc * cls_105ba124_new(cls_105ba124 *param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  
  if ((param_1 != (cls_105ba124 *)0x0) ||
     (param_1 = (cls_105ba124 *)heap_alloc((void *)0x2b70), param_1 != (cls_105ba124 *)0x0)) {
    cls_105ba0cc_new((cls_105ba0cc *)param_1);
    *(uint32_t *)&((cls_105ba0cc *)(param_1 + 2))->field_0xde0 = 0x105ba124/*ROM*/;
    cls_105bb0b8_new((cls_105bb0b8 *)((uint32_t *)(((cls_105ba0cc *)(param_1 + 2))) + 889));
    cls_105bb0b8_new((cls_105bb0b8 *)((uint32_t *)(((cls_105ba0cc *)(param_1 + 2))) + 897));
    ((uint32_t *)(((cls_105ba0cc *)(param_1 + 2))))[905] = 0;
    cls_105a2af8_new((cls_105a2af8 *)((uint32_t *)(((cls_105ba0cc *)(param_1 + 2))) + 906));
    ((uint32_t *)(((cls_105ba0cc *)(param_1 + 2))))[909] = 0;
    ((uint8_t *)(((cls_105ba0cc *)(param_1 + 2))))[3637] = 0;
    wait_flg_obj(((uint32_t *)(((cls_105ba0cc *)(param_1 + 2))) + 906),0);
    pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
    uVar2 = read_table_entry_field(pvVar1,0xcd);
    *(uint32_t *)((uint32_t *)(((cls_105ba0cc *)(param_1 + 2))) + 908) = uVar2;
  }
  return (cls_105ba0cc *)param_1;
}
