/* @k10d cls_105d6d68_new @ 0x1051d2da
 * name: verified (structural evidence: heap_alloc(0x10) when NULL; stores vtable 0x105d6d68; returns param_1)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d6d68 (vtable 0x105d6d68, 0x10 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10) when NULL; stores vtable 0x105d6d68; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105d6d68_new(uint32_t *param_1)

{
  void *pvVar1;
  int iVar2;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x10), param_1 != (uint32_t *)0x0)) {
    cls_1059e408_new(param_1);
    *param_1 = 0x105d6d68/*ROM*/;
    param_1[2] = 0;
    param_1[3] = 0;
    pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
    iVar2 = read_table_entry_field(pvVar1,0xb2);
    param_1[2] = iVar2;
    (**(code **)(*(int *)(iVar2 + 8) + 0x1c))
              (iVar2 + 8 + (int)*(short *)(*(int *)(iVar2 + 8) + 0x18),param_1,0xb);
  }
  return param_1;
}
