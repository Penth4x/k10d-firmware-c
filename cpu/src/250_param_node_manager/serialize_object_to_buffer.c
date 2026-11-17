/* @k10d serialize_object_to_buffer @ 0x104dffbe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 250_param_node_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void serialize_object_to_buffer(uint8_t *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint16_t uStack_a;
  
  *(uint32_t *)(param_1 + 0x54) = 0;
  iVar1 = *(int *)(param_1 + 0x24);
  uStack_a = 2;
  copy_bytes_forward(param_1,param_1 + 0x60,4);
  copy_bytes_forward(&uStack_a,param_1 + 100,2);
  copy_bytes_forward(param_1 + 4,param_1 + 0x66,2);
  copy_bytes_forward(param_1 + 0xc,param_1 + 0x68,4);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar2 = 0;
    do {
      copy_bytes_forward(param_1 + iVar2 + 0x10,param_1 + iVar2 + 0x6c,4);
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (uVar3 < *(uint *)(param_1 + 0x24));
  }
  bounded_byte_copy(*(uint **)(param_1 + 0x38),param_1 + 0x60,iVar1 * 4 + 0xc,0);
  (**(code **)(*(int *)(param_1 + 0x40) + 0x1c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x40) + 0x18));
  return;
}
