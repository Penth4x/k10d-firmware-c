/* @k10d serialize_object_to_buffer @ 0x104dffbe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 250_param_node_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void serialize_object_to_buffer(cls_105bc4d8 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint16_t uStack_a;
  
  param_1->field_0x54 = 0;
  iVar1 = param_1->field_0x24;
  uStack_a = 2;
  copy_bytes_forward(param_1,&param_1->field_0x60,4);
  copy_bytes_forward(&uStack_a,&param_1->field_0x64,2);
  copy_bytes_forward(&param_1->field_0x4,&param_1->field_0x66,2);
  copy_bytes_forward(&param_1->field_0xc,&param_1->field_0x68,4);
  uVar3 = 0;
  if (param_1->field_0x24 != 0) {
    iVar2 = 0;
    do {
      copy_bytes_forward((uint8_t *)((int)&param_1->field_0x10 + iVar2),(uint8_t *)((int)&param_1->field_0x6c + iVar2),(uint)(4));
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (uVar3 < (uint)param_1->field_0x24);
  }
  bounded_byte_copy((uint *)param_1->field_0x38,&param_1->field_0x60,iVar1 * 4 + 0xc,0);
  (((vtbl_entry*)(param_1->field_0x40))[3].fn)
            ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x40))[3].adj);
  return;
}
