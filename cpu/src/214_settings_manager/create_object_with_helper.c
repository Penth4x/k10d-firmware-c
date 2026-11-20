/* @k10d create_object_with_helper @ 0x104b13f0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls two initialization helpers and returns the result of the first.
 * summary:
 *   Invokes allocate_pixel_buffer_struct with fixed arguments (0, 1, 0, 0, 0) to obtain a
 *   handle. Then calls cls_105b7e7c_new with param_2, param_3, and param_4. Finally, calls
 *   an unnamed function at 0x105207b2 passing the first handle, the second handle, and two
 *   zeros. Returns the first handle in r4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t create_object_with_helper(void *param_1,int param_2,uint32_t param_3,int param_4)

{
  uint32_t uVar1;
  int iVar2;
  
  uVar1 = (uint32_t)allocate_pixel_buffer_struct((uint32_t *)0x0,1,0,0,(uint16_t *)0x0);
  iVar2 = cls_105b7e7c_new((cls_105b7e7c *)0x0,param_2,param_3,param_4);
  (*(code *)0x105207b2/*ROM*/)(uVar1,iVar2,0,0);
  return uVar1;
}
