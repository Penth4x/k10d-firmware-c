/* @k10d initialize_settings_context @ 0x104188aa
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Initializes a settings object by refreshing the working copy and caching specific
 *   setting values.
 * summary:
 *   The function calls get_or_init_singleton_object_1051d40e twice and passes the results
 *   to read_bounded_array_element_1051d696 and update_camera_state_flags, likely for memory
 *   or context setup. It then calls settings_refresh_working_copy on the object at param_1
 *   + 0x7c to update the local settings cache. Finally, it reads setting ID 0x60 via
 *   setting_get and stores it in the object at offset 0x14fd, along with other
 *   initialization flags.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_settings_context(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  uint uVar3;
  uint32_t uVar4;
  
  pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
  pvVar2 = (void *)get_or_init_singleton_object_1051d40e();
  uVar3 = read_bounded_array_element_1051d696(pvVar2,0x18);
  update_camera_state_flags(pvVar1,0x18,uVar3 | 8);
  eventflag_clr_flg((uint32_t *)(param_1 + 0x1540),(uint)(0x10));
  *(uint32_t *)(param_1 + 0x14f8) = *(uint32_t *)(param_1 + 0x84);
  *(uint8_t *)(param_1 + 0x14fc) = 0;
  *(uint8_t *)(param_1 + 0x14f4) = 1;
  settings_refresh_working_copy(*(void **)(param_1 + 0x7c));
  uVar4 = setting_get(*(int *)(param_1 + 0x7c),0x60);
  *(char *)(param_1 + 0x14fd) = (char)uVar4;
  return;
}
