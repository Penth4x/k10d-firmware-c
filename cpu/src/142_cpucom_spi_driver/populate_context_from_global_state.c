/* @k10d populate_context_from_global_state @ 0x10466b4c
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Populates a context object's fields with values retrieved from a global state object
 *   and triggers a virtual callback.
 * summary:
 *   This function is virtual method slot 2 of class cls_105a7df8. It retrieves a global
 *   object via get_or_init_sram_buffer_104277bc and uses read_table_entry_field to extract
 *   values at indices 0x44, 0x46, and 8, storing them at offsets 0x18, 0x1c, and 0x20 of
 *   the input object. It then invokes a virtual method (slot 3) on the object stored at
 *   offset 0x20 and calls create_kernel_object on offset 0xc before returning 1. The
 *   specific subsystem (e.g., CPUcom) is not confirmed by the code itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105a7df8": ignoring multiple overlapping fields */

uint32_t populate_context_from_global_state(cls_105a7df8 *param_1)

{
  void *pvVar1;
  void *puVar2;
  int iVar3;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  puVar2 = (void *)read_table_entry_field(pvVar1,0x44);
  ((uint32_t *)&(param_1->field_0x14))[1] = (uint32_t)(puVar2);
  puVar2 = (void *)read_table_entry_field(pvVar1,0x46);
  ((uint32_t *)&(param_1->field_0x14))[2] = (uint32_t)(puVar2);
  iVar3 = read_table_entry_field(pvVar1,8);
  param_1->field_0x20 = iVar3;
  (((vtbl_entry*)(*(int *)(iVar3 + 8)))[3].fn)
            (iVar3 + 8 + (int)((vtbl_entry*)(*(int *)(iVar3 + 8)))[3].adj,&param_1->field_0x4,0xe);
  create_kernel_object(&param_1->field_0xc);
  return 1;
}
