/* @k10d create_object_with_init_call_10495f06 @ 0x10495f06
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x68-byte object, constructs it, and invokes a virtual method with a
 *   computed value.
 * summary:
 *   Calls allocate_and_init_object_104962ea with the input parameters to obtain an integer
 *   value. Allocates 0x68 bytes from the heap and initializes the object via
 *   cls_105b47b4_new. Invokes virtual slot 13 (offset 0x84) on the object's vtable pointer
 *   (at offset 0x1c) with the computed integer and 0. Returns the pointer to the allocated
 *   object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int create_object_with_init_call_10495f06(void *param_1,int param_2,void *param_3,void *param_4)

{
  int iVar1;
  uint32_t *puVar2;
  
  iVar1 = allocate_and_init_object_104962ea(param_1,param_2,(int)param_3,(int)param_4);
  puVar2 = (uint32_t *)heap_alloc((void *)0x68);
  if (puVar2 == (uint32_t *)0x0) {
    puVar2 = (uint32_t *)0x0;
  }
  else {
    cls_105b47b4_new(puVar2);
  }
  (**(code **)(puVar2[3] + 0x84))((int)*(short *)(puVar2[3] + 0x80) + (int)puVar2,iVar1,0);
  return (int)puVar2;
}
