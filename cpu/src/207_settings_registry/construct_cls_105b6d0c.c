/* @k10d construct_cls_105b6d0c @ 0x104a9b74
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 207_settings_registry (unit names are model-proposed)
 * purpose:
 *   Constructs a cls_105b6d0c object by calling the base class constructor and initializing
 *   member fields.
 * summary:
 *   Allocates a 0x18-byte object if param_1 is null, then calls the base class constructor
 *   construct_object_with_vtable. It sets the vtable pointer at offset 0x10 to 0x105b6d0c
 *   and initializes a pointer at offset 0x14 to null or a heap-allocated buffer of size
 *   param_4*4. The function returns the object pointer in r4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int construct_cls_105b6d0c(int param_1,uint32_t param_2,uint32_t param_3,int param_4,uint32_t param_5)

{
  uint32_t uVar1;
  uintptr_t sp;
  uint8_t *puVar2;
  uint32_t *puVar3;
  uint8_t auStack_1c [4];
  
  puVar2 = auStack_1c;
  puVar3 = (uint32_t *)auStack_1c;
  if ((param_1 != 0) ||
     (param_1 = get_pool2_block((void *)0x18), puVar3 = (uint32_t *)puVar2,
     (uint16_t *)param_1 != (uint16_t *)0x0)) {
    *puVar3 = param_5;
    construct_object_with_vtable((uint16_t *)param_1,((uint16_t)((uint64_t)(param_2) >> 16)),((uint16_t)((uint64_t)(param_3) >> 16)),param_4,*puVar3);
    *(uint32_t *)(param_1 + 0x10) = 0x105b6d0c/*ROM*/;
    *(uint32_t *)(param_1 + 0x14) = 0;
    if (param_4 != 0) {
      uVar1 = heap_alloc_2(param_4 << 2);
      *(uint32_t *)(param_1 + 0x14) = uVar1;
    }
  }
  return (int)(uint16_t *)param_1;
}
