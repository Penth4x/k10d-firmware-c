/* @k10d check_status_bit1 @ 0x104f140c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_status_bit1(uint32_t param_x0)

{
  void *pvVar1;
  uint uVar2;
  
  pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
  uVar2 = read_bounded_array_element_1051d696(pvVar1,0x18);
  return (uVar2 & 2) != 0;
}
