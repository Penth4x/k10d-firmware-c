/* @k10d invoke_two_virtual_methods_and_update_flags @ 0x1041d30e
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Calls two virtual methods on an object referenced by param_1, then updates a flag field
 *   via two helper calls.
 * summary:
 *   The function retrieves a pointer from param_1+0x2c, then calls virtual slots at offsets
 *   0x2c and 0x34 on the object at that pointer+4, passing a this-adjusted pointer and 0.
 *   It then reads a pointer from param_1+0x44, calls read_bounded_array_element_1051d696
 *   with that pointer and 0, and passes the result (masked with 0xfffd) to
 *   update_camera_state_flags along with the pointer and 0. The callees are not named, so
 *   the specific subsystem is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_two_virtual_methods_and_update_flags(int param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x2c) + 4);
  (**(code **)(iVar3 + 0x2c))(*(int *)(param_1 + 0x2c) + (int)*(short *)(iVar3 + 0x28),0);
  iVar3 = *(int *)(*(int *)(param_1 + 0x2c) + 4);
  (**(code **)(iVar3 + 0x34))(*(int *)(param_1 + 0x2c) + (int)*(short *)(iVar3 + 0x30),0);
  pvVar2 = *(void **)(param_1 + 0x44);
  uVar1 = read_bounded_array_element_1051d696(pvVar2,0);
  update_camera_state_flags(pvVar2,0,uVar1 & 0xfffd);
  return;
}
