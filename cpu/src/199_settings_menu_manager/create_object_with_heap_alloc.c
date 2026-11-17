/* @k10d create_object_with_heap_alloc @ 0x10495f4e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x68-byte object, constructs it, and calls a virtual method with the result
 *   of a prior helper.
 * summary:
 *   Calls allocate_and_init_object_1049635c with the four input parameters to obtain an
 *   integer value. Allocates 0x68 bytes from the heap and, if successful, calls
 *   cls_105b47b4_new to construct the object. Then invokes virtual slot 13 (offset 0x84) on
 *   the object's vtable with the constructed object, the integer from
 *   allocate_and_init_object_1049635c, and 0 as arguments. Returns the pointer to the newly
 *   allocated object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int create_object_with_heap_alloc(void *param_1,int param_2,void *param_3,void *param_4)

{
  int iVar1;
  uint32_t *puVar2;
  
  iVar1 = allocate_and_init_object_1049635c(param_1,param_2,param_3,param_4);
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
