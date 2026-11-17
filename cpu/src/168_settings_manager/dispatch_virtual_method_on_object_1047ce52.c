/* @k10d dispatch_virtual_method_on_object_1047ce52 @ 0x1047ce52
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Performs a virtual method call on an object pointer using a vtable offset of 0x5c.
 * summary:
 *   The function calls three helper functions (set_struct_field_at_offset_4,
 *   map_mode_index_to_flag_1047cfd6, write_word_to_struct_array) with the input parameters.
 *   It then dereferences a pointer at offset 0x28 of param_1 to obtain a vtable pointer and
 *   invokes the virtual method at offset 0x5c (slot 11) with param_2 and param_3 as
 *   arguments. The return value of the virtual call is returned to the caller.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_method_on_object_1047ce52(int param_1,uint32_t param_2,int param_3)

{
  uint32_t uVar1;
  int iVar2;
  
  set_struct_field_at_offset_4(param_3,4);
  uVar1 = map_mode_index_to_flag_1047cfd6(param_1);
  write_word_to_struct_array(param_3,uVar1,0);
  iVar2 = **(int **)(param_1 + 0x28);
  uVar1 = (**(code **)(iVar2 + 0x5c))
                    ((int)*(int **)(param_1 + 0x28) + (int)*(short *)(iVar2 + 0x58),param_2,param_3)
  ;
  return uVar1;
}
