/* @k10d cls_105a9068_new @ 0x1046d362
 * name: verified (structural evidence: heap_alloc(0x58) when NULL; stores vtable 0x105a9068; returns param_1)
 * unit: 156_settings_context_init (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a9068 (vtable 0x105a9068, 0x58 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x58) when NULL; stores vtable 0x105a9068; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105a9068_new(uint32_t *param_1)

{
  int iVar1;
  void *pvVar2;
  uint32_t uVar3;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x58), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_1059e478_new(param_1 + 1);
    cls_1059e408_new(param_1 + 2);
    *param_1 = 0x105a9068/*ROM*/;
    param_1[1] = 0x105a90a0/*ROM*/;
    param_1[2] = 0x105a90b8/*ROM*/;
    *(uint8_t *)(param_1 + 4) = 0;
    *(uint8_t *)((int)param_1 + 0x11) = 0;
    *(uint8_t *)((int)param_1 + 0x12) = 0;
    *(uint8_t *)((int)param_1 + 0x13) = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    cls_105a2af8_new(param_1 + 0x11);
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    iVar1 = sr_driver_singleton();
    pvVar2 = *(void **)(iVar1 + 4);
    param_1[5] = (uint32_t)pvVar2;
    uVar3 = module_array_getter(pvVar2,3);
    param_1[6] = uVar3;
    uVar3 = return_sram_address_10435ae4();
    param_1[7] = uVar3;
    iVar1 = get_sensor_singleton();
    param_1[8] = *(uint32_t *)(iVar1 + 4);
    iVar1 = initialize_singleton_object_1045d6a0();
    param_1[0xb] = *(uint32_t *)(iVar1 + 0x28);
    param_1[0xc] = *(uint32_t *)(iVar1 + 0x1c);
    param_1[0xd] = *(uint32_t *)(iVar1 + 4);
    param_1[0x10] = *(uint32_t *)(iVar1 + 0x14);
    iVar1 = get_cls_105a7db4_singleton();
    param_1[0xe] = *(uint32_t *)(iVar1 + 8);
    iVar1 = get_or_create_singleton_object_104bb22a();
    param_1[0xf] = *(uint32_t *)(iVar1 + 4);
    pvVar2 = (void *)get_or_init_sram_buffer_104277bc();
    iVar1 = read_table_entry_field(pvVar2,0x8d);
    param_1[0x13] = iVar1;
    (**(code **)(*(int *)(iVar1 + 8) + 0x1c))
              (iVar1 + 8 + (int)*(short *)(*(int *)(iVar1 + 8) + 0x18),param_1 + 2,0x2d);
    pvVar2 = (void *)get_or_init_sram_buffer_104277bc();
    uVar3 = read_table_entry_field(pvVar2,0x7e);
    param_1[0x15] = uVar3;
  }
  return param_1;
}
