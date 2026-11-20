/* @k10d initialize_transfer_context @ 0x1046568a
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Initializes a context object by resolving member pointers from a base object and
 *   invoking a setup method on one of them.
 * summary:
 *   This function is virtual slot 2 of class cls_105a7d14. It calls
 *   get_or_init_sram_buffer_104277bc to obtain a base object, then uses
 *   read_table_entry_field to retrieve member pointers at indices 0x45, 9, 0x8c, and 0xb6,
 *   storing them in the context at offsets 0x10, 0x14, 0x18, and 0xc. It performs a virtual
 *   call on the object at index 9, passing the context and the value 0xf. Finally, it
 *   zeroes fields at 0x1c and 0x20 and returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_transfer_context(cls_105a7d14 *param_1)

{
  void *pvVar1;
  void *puVar2;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  puVar2 = (void *)read_table_entry_field(pvVar1,0x45);
  param_1->field_0x10 = (uintptr_t)(puVar2);
  puVar2 = (void *)read_table_entry_field(pvVar1,9);
  param_1->field_0x14 = (uintptr_t)(puVar2);
  (((vtbl_entry*)(*(int *)((char*)puVar2 + 8)))[3].fn)
            ((char*)puVar2 + ((vtbl_entry*)(*(int *)((char*)puVar2 + 8)))[3].adj + 8,&param_1->field_0x4,0xf);
  puVar2 = (void *)read_table_entry_field(pvVar1,0x8c);
  param_1->field_0x18 = (uintptr_t)(puVar2);
  puVar2 = (void *)read_table_entry_field(pvVar1,0xb6);
  param_1->field_0xc = (uintptr_t)(puVar2);
  param_1->field_0x20 = 0;
  *(uint32_t *)&param_1->field_0x1c = 0;
  return 1;
}
