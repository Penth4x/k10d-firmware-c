/* @k10d populate_struct_from_three_getters @ 0x104d1cb2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 243_module_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t populate_struct_from_three_getters(int param_1, uint32_t param_x1)

{
  int iVar1;
  
  iVar1 = initialize_singleton_object_1045d6a0();
  *(uint32_t *)(param_1 + 8) = *(uint32_t *)(iVar1 + 0x1c);
  *(uint32_t *)(param_1 + 0x10) = *(uint32_t *)(iVar1 + 8);
  iVar1 = get_or_create_singleton_object_104bb22a();
  *(uint32_t *)(param_1 + 0xc) = *(uint32_t *)(iVar1 + 4);
  iVar1 = get_or_create_singleton_object_10485138();
  *(uint32_t *)(param_1 + 0x14) = *(uint32_t *)(iVar1 + 4);
  return 1;
}
