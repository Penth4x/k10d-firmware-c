/* @k10d build_four_entry_parameter_table @ 0x104b2112
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * build_four_entry_parameter_table(int *param_1, uint32_t param_x1)

{
  uint32_t *puVar1;
  uint32_t uVar2;
  
  *(uint8_t *)(param_1 + 6) = 4;
  puVar1 = (uint32_t *)heap_alloc_2(0x10);
  uVar2 = (uint32_t)(uintptr_t)alloc_and_init_28_byte_struct((uint8_t *)0x0,3,1,1);
  *puVar1 = uVar2;
  allocate_struct_buffers((byte *)__frv_reg_unset(4));
  (*(code *)0x104b3fbc/*ROM*/)(uVar2,0,*(uint32_t *)param_1[5]);
  (*(code *)0x104b3fbc/*ROM*/)(uVar2,1,*(uint32_t *)param_1[2]);
  (*(code *)0x104b3fbc/*ROM*/)(uVar2,2,*(uint32_t *)*param_1);
  (*(code *)0x104b3fd8/*ROM*/)(uVar2,0,*(uint32_t *)(param_1[5] + 4));
  (*(code *)0x104b3ff4/*ROM*/)(uVar2,0,*(uint32_t *)(param_1[5] + 8));
  uVar2 = (uint32_t)(uintptr_t)alloc_and_init_28_byte_struct((uint8_t *)0x0,3,1,1);
  puVar1[1] = uVar2;
  allocate_struct_buffers((byte *)__frv_reg_unset(4));
  (*(code *)0x104b3fbc/*ROM*/)(uVar2,0,*(uint32_t *)param_1[5]);
  (*(code *)0x104b3fbc/*ROM*/)(uVar2,1,*(uint32_t *)(param_1[2] + 4));
  (*(code *)0x104b3fbc/*ROM*/)(uVar2,2,*(uint32_t *)param_1[1]);
  (*(code *)0x104b3fd8/*ROM*/)(uVar2,0,*(uint32_t *)(param_1[5] + 4));
  (*(code *)0x104b3ff4/*ROM*/)(uVar2,0,*(uint32_t *)(param_1[5] + 8));
  uVar2 = (uint32_t)(uintptr_t)alloc_and_init_28_byte_struct((uint8_t *)0x0,3,3,2);
  puVar1[2] = uVar2;
  allocate_struct_buffers((byte *)__frv_reg_unset(4));
  (*(code *)0x104b3fbc/*ROM*/)(uVar2,0,*(uint32_t *)param_1[5]);
  (*(code *)0x104b3fbc/*ROM*/)(uVar2,1,*(uint32_t *)param_1[2]);
  (*(code *)0x104b3fbc/*ROM*/)(uVar2,2,*(uint32_t *)(*param_1 + 4));
  (*(code *)0x104b3fd8/*ROM*/)(uVar2,0,*(uint32_t *)(param_1[5] + 4));
  (*(code *)0x104b3fd8/*ROM*/)(uVar2,1,*(uint32_t *)param_1[0xd]);
  (*(code *)0x104b3fd8/*ROM*/)(uVar2,2,*(uint32_t *)param_1[3]);
  (*(code *)0x104b3ff4/*ROM*/)(uVar2,0,*(uint32_t *)(param_1[5] + 8));
  (*(code *)0x104b3ff4/*ROM*/)(uVar2,1,*(uint32_t *)param_1[4]);
  uVar2 = (uint32_t)(uintptr_t)alloc_and_init_28_byte_struct((uint8_t *)0x0,3,3,2);
  puVar1[3] = uVar2;
  allocate_struct_buffers((byte *)__frv_reg_unset(4));
  (*(code *)0x104b3fbc/*ROM*/)(uVar2,0,*(uint32_t *)param_1[5]);
  (*(code *)0x104b3fbc/*ROM*/)(uVar2,1,*(uint32_t *)(param_1[2] + 4));
  (*(code *)0x104b3fbc/*ROM*/)(uVar2,2,*(uint32_t *)(param_1[1] + 4));
  (*(code *)0x104b3fd8/*ROM*/)(uVar2,0,*(uint32_t *)(param_1[5] + 4));
  (*(code *)0x104b3fd8/*ROM*/)(uVar2,1,*(uint32_t *)(param_1[0xd] + 4));
  (*(code *)0x104b3fd8/*ROM*/)(uVar2,2,*(uint32_t *)(param_1[3] + 4));
  (*(code *)0x104b3ff4/*ROM*/)(uVar2,0,*(uint32_t *)(param_1[5] + 8));
  (*(code *)0x104b3ff4/*ROM*/)(uVar2,1,*(uint32_t *)(param_1[4] + 4));
  return puVar1;
}
