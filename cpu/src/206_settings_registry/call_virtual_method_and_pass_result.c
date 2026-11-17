/* @k10d call_virtual_method_and_pass_result @ 0x104a5fd2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_virtual_method_and_pass_result(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_1 + 0x2c);
  pvVar1 = (void *)(**(code **)(iVar2 + 0x2c))
                             ((int)*(int **)(param_1 + 0x2c) + (int)*(short *)(iVar2 + 0x28));
  copy_bytes_to_struct_field(param_2,pvVar1,0x10);
  return;
}
