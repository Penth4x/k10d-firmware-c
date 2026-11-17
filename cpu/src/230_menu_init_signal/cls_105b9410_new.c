/* @k10d cls_105b9410_new @ 0x104c3be8
 * name: verified (structural evidence: heap_alloc(0xa0) when NULL; stores vtable 0x105b9410; returns param_1)
 * unit: 230_menu_init_signal (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b9410 (vtable 0x105b9410, 0xa0 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xa0) when NULL; stores vtable 0x105b9410; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b9410_new(uint32_t *param_1)

{
  int iVar1;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xa0), param_1 != (uint32_t *)0x0)) {
    cls_1059e478_new(param_1);
    *param_1 = 0x105b9410/*ROM*/;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    alloc_and_zero_struct_104bb416(param_1 + 7);
    cls_105a2af8_new(param_1 + 0x1e);
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    alloc_two_word_pair_1045c3dc(param_1 + 0x22,0,0);
    alloc_two_word_pair_1045c3dc(param_1 + 0x24,0,0);
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    iVar1 = get_or_create_singleton_object_104fb12e();
    param_1[4] = *(uint32_t *)(iVar1 + 0x18);
    param_1[1] = *(uint32_t *)(iVar1 + 0x20);
    param_1[3] = *(uint32_t *)(iVar1 + 0x44);
    param_1[2] = *(uint32_t *)(iVar1 + 0x50);
    param_1[5] = *(uint32_t *)(iVar1 + 0x68);
    param_1[6] = *(uint32_t *)(iVar1 + 0x54);
    wait_flg_obj(param_1 + 0x1e,0);
  }
  return param_1;
}
