/* @k10d populate_struct_from_three_sources @ 0x1042bbae
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t populate_struct_from_three_sources(int param_1, uint32_t param_x1)

{
  int iVar1;
  
  iVar1 = initialize_singleton_object_1045d6a0();
  *(uint32_t *)(param_1 + 0xc) = *(uint32_t *)(iVar1 + 0x1c);
  *(uint32_t *)(param_1 + 0x10) = *(uint32_t *)(iVar1 + 0x14);
  *(uint32_t *)(param_1 + 0x14) = *(uint32_t *)(iVar1 + 0x20);
  *(uint32_t *)(param_1 + 0x18) = *(uint32_t *)(iVar1 + 8);
  *(uint32_t *)(param_1 + 0x1c) = *(uint32_t *)(iVar1 + 0x24);
  *(uint32_t *)(param_1 + 0x20) = *(uint32_t *)(iVar1 + 0x28);
  iVar1 = get_or_create_singleton_object_104bb22a();
  *(uint32_t *)(param_1 + 0x24) = *(uint32_t *)(iVar1 + 4);
  wait_flg_obj((void *)(param_1 + 0x2c),0);
  iVar1 = get_or_create_singleton_104e7b68();
  *(uint32_t *)(param_1 + 0x28) = *(uint32_t *)(iVar1 + 8);
  return 1;
}
