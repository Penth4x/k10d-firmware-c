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

uint32_t * cls_105ba124_new(uint32_t *param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x2b70), param_1 != (uint32_t *)0x0)) {
    cls_105ba0cc_new(param_1);
    param_1[0xac6] = 0x105ba124/*ROM*/;
    cls_105bb0b8_new(param_1 + 0xac7);
    cls_105bb0b8_new(param_1 + 0xacf);
    *(uint8_t *)(param_1 + 0xad7) = 0;
    cls_105a2af8_new(param_1 + 0xad8);
    *(uint8_t *)(param_1 + 0xadb) = 0;
    *(uint8_t *)((int)param_1 + 0x2b6d) = 0;
    wait_flg_obj(param_1 + 0xad8,0);
    pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
    uVar2 = read_table_entry_field(pvVar1,0xcd);
    param_1[0xada] = uVar2;
  }
  return param_1;
}
