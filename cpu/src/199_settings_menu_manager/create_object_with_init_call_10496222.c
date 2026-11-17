/* @k10d create_object_with_init_call_10496222 @ 0x10496222
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a new object via cls_105b46cc_new and invokes its virtual initialization slot
 *   with param_2.
 * summary:
 *   Calls cls_105b46cc_new(0) to obtain a new object pointer in r4. Performs a virtual call
 *   through the vtable at offset 0xc, specifically slot 2 (offset 0x84), passing the object
 *   pointer (adjusted by the this-adjustment short at 0x80) and param_2. Returns the newly
 *   created object pointer. The specific role of the object or the initialization routine
 *   is not determinable from the provided pseudocode and lack of named callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int create_object_with_init_call_10496222(void *param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = (int)cls_105b46cc_new(0);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0x84))
            (*(short *)(*(int *)(iVar1 + 0xc) + 0x80) + iVar1,param_2,0);
  return iVar1;
}
