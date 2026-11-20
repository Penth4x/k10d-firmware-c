/* @k10d parse_colon_delimited_fields @ 0x104b5c58
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 217_error_display_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void parse_colon_delimited_fields(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  
  uVar10 = 0;
  uVar5 = 0;
  bVar8 = false;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar7 = -1;
    iVar2 = 1;
    iVar9 = 0;
    iVar3 = 0;
    do {
      iVar4 = iVar3;
      if (bVar8) {
        if ((*(char *)(*(int *)(param_1 + 8) + iVar7) == '\r') &&
           (*(char *)(*(int *)(param_1 + 8) + uVar5) == '\n')) {
          bVar8 = false;
          iVar4 = iVar2;
        }
      }
      else {
        iVar6 = *(int *)(param_1 + 8);
        cVar1 = *(char *)(iVar6 + uVar5);
        if ((cVar1 == ' ') || (cVar1 == '\t')) {
          bVar8 = true;
        }
        else if ((cVar1 == '/') && (*(char *)(iVar6 + iVar2) == '/')) {
          bVar8 = true;
        }
        else if (((*(char *)(iVar6 + iVar7) != '\r') || (iVar4 = iVar2, cVar1 != '\n')) &&
                (iVar4 = iVar3, cVar1 == ':')) {
          *(int *)(param_1 + 0xa0 + iVar9) = iVar3;
          uVar10 = uVar10 + 1;
          iVar9 = iVar9 + 4;
        }
      }
      if (0x50 < uVar10) {
        cmd_error_report((uint32_t *)(*(uint32_t *)(param_1 + 4)),(uint32_t)(0x91));
        return;
      }
      iVar2 = iVar2 + 1;
      uVar5 = uVar5 + 1;
      iVar7 = iVar7 + 1;
      iVar3 = iVar4;
    } while (uVar5 < *(uint *)(param_1 + 0xc));
  }
  return;
}
