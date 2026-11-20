/* @k10d copy_bytes_from_buffer_104e35e2 @ 0x104e35e2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_bytes_from_buffer_104e35e2(cls_105c1150 *param_1,int param_2)

{
  int iVar1;
  uintptr_t sp;
  int iStack_c;
  
  iStack_c = 0;
  iVar1 = copy_and_clamp_byte_value((int *)&param_1->field_0x4,&iStack_c);
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    *(uint8_t *)(iVar1 + param_2) = *(uint8_t *)(iVar1 + iStack_c);
  }
  return;
}
