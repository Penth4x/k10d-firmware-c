/* @k10d copy_string_to_heap_field @ 0x10519ef2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_string_to_heap_field(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = populate_ui_text_fields(__frv_reg_unset(4));
  iVar3 = count_string_bytes((char *)(param_1 + 0x2c));
  if (0 < iVar3) {
    iVar1 = iVar3 + -1;
    do {
      if (*(char *)(param_1 + 0x2c + iVar1) != ' ') break;
      iVar1 = iVar1 + -1;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar1);
  }
  iVar4 = heap_alloc_2(iVar3 + 1);
  *(int *)(param_1 + 0x70) = iVar4;
  iVar1 = iVar3;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    *(char *)(iVar1 + iVar4) = ((char *)(param_1 + 0x2c))[iVar1];
  }
  *(uint8_t *)(*(int *)(param_1 + 0x70) + iVar3) = 0;
  return uVar2;
}
