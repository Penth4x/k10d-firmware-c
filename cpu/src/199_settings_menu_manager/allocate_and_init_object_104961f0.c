/* @k10d allocate_and_init_object_104961f0 @ 0x104961f0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a new object via cls_105b4ef0_new and invokes its virtual constructor with
 *   param_2.
 * summary:
 *   Calls cls_105b4ef0_new(0) to obtain a pointer to a newly allocated object. It then
 *   performs a virtual call to slot 10 (offset 0x84 in the vtable) on the object, passing
 *   param_2 and 0 as arguments. Returns the pointer to the initialized object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_and_init_object_104961f0(void *param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = cls_105b4ef0_new(0);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0x84))
            (*(short *)(*(int *)(iVar1 + 0xc) + 0x80) + iVar1,param_2,0);
  return iVar1;
}
