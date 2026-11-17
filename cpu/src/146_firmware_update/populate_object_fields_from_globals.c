/* @k10d populate_object_fields_from_globals @ 0x1046789c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 146_firmware_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t populate_object_fields_from_globals(void *param_1)

{
  int iVar1;
  void *pvVar2;
  uint32_t uVar3;
  
  iVar1 = get_cls_105a7db4_singleton();
  *(uint32_t *)((int)param_1 + 0x240) = *(uint32_t *)(iVar1 + 0xc);
  *(uint32_t *)((int)param_1 + 0x244) = *(uint32_t *)(iVar1 + 8);
  pvVar2 = (void *)get_or_init_sram_buffer_104277bc();
  uVar3 = read_table_entry_field(pvVar2,0x4d);
  *(uint32_t *)((int)param_1 + 0x234) = uVar3;
  return 1;
}
