/* @k10d construct_cls_105fa778_object @ 0x1052e494
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 289_test_mode_ui (unit names are model-proposed)
 * purpose:
 *   Allocates and initializes a cls_105fa778 object, setting its vtable and storing a
 *   parameter in two fields.
 * summary:
 *   If param_1 is null, it calls get_pool2_block to allocate 0x18 bytes. It then calls the
 *   base class constructor construct_object_with_vtable (cls_105b6a30) with the provided
 *   parameters. It sets the vtable pointer at offset 0x10 to 0x105fa778 and stores param_4
 *   at offsets 4 and 0x14. Returns the object pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int construct_cls_105fa778_object(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  uintptr_t sp;
  uint8_t *puVar1;
  uint32_t *puVar2;
  uint8_t auStack_1c [4];
  
  puVar1 = auStack_1c;
  puVar2 = (uint32_t *)auStack_1c;
  if ((param_1 != 0) ||
     (param_1 = get_pool2_block((void *)0x18), puVar2 = (uint32_t *)puVar1,
     (uint16_t *)param_1 != (uint16_t *)0x0)) {
    *puVar2 = 0;
    construct_object_with_vtable((uint16_t *)param_1,((uint16_t)((uint64_t)(param_2) >> 16)),((uint16_t)((uint64_t)(param_3) >> 16)),0,*puVar2);
    *(uint32_t *)(param_1 + 0x10) = 0x105fa778/*ROM*/;
    *(uint32_t *)(param_1 + 0x14) = param_4;
    *(uint32_t *)(param_1 + 4) = param_4;
  }
  return (int)(uint16_t *)param_1;
}
