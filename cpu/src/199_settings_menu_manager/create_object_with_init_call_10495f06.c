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
  cls_105b47b4 *pcVar2;
  
  iVar1 = allocate_and_init_object_104962ea((void *)(param_1),(int)(param_2),(uint32_t)(param_3),(uint32_t)(param_4));
  pcVar2 = (cls_105b47b4 *)heap_alloc((void *)0x68);
  if (pcVar2 == (cls_105b47b4 *)0x0) {
    pcVar2 = (cls_105b47b4 *)0x0;
  }
  else {
    cls_105b47b4_new(pcVar2);
  }
  (((vtbl_entry*)(pcVar2->field_0xc))[16].fn)
            ((int)&pcVar2->field_0x0 + (int)((vtbl_entry*)(pcVar2->field_0xc))[16].adj,iVar1,0);
  return (int)pcVar2;
}
