/* @k10d match_verb_in_table @ 0x104b5d4a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 218_config_parser (unit names are model-proposed)
 * purpose:
 *   Checks if a verb string matches any entry in a table of pointers, returning true and
 *   storing the match offset.
 * summary:
 *   Iterates through an array of string pointers located at param_1 + 0xa0, comparing each
 *   against the input string param_2. If a match is found, it calculates the end offset of
 *   the matched string and stores it in param_1 + 0x1e0. If no match is found, it calls
 *   cmd_error_report with a constant argument. The function returns a boolean indicating
 *   whether a match was successful.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool match_verb_in_table(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  
  bVar6 = false;
  if (*(int *)(param_1 + 0xa0) != -1) {
    iVar5 = *(int *)(param_1 + 8);
    iVar7 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0xa0 + iVar7);
      if (*(char *)(iVar5 + iVar4) != '\0') {
        iVar2 = 0;
        iVar3 = iVar4;
        do {
          if (*(char *)(iVar5 + iVar3) == ':') {
            cVar1 = *(char *)(param_2 + iVar2);
            if (((cVar1 == '\0') || (cVar1 == ' ')) || (cVar1 == '\t')) {
              bVar6 = true;
            }
            if ((cVar1 == '/') || (*(char *)(param_2 + iVar2 + 1) == '/')) {
              bVar6 = true;
            }
            break;
          }
          if (*(char *)(param_2 + iVar2) != *(char *)(iVar5 + iVar3)) break;
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 1;
        } while (*(char *)(iVar5 + iVar3) != '\0');
      }
      if (bVar6) {
        iVar3 = iVar4 + -1;
        iVar7 = iVar4;
        for (; ((iVar7 = iVar7 + 1, *(char *)(iVar5 + iVar3) != '\r' ||
                (*(char *)(iVar5 + iVar4) != '\n')) && (*(char *)(iVar5 + iVar4) != '\0'));
            iVar4 = iVar4 + 1) {
          iVar3 = iVar3 + 1;
        }
        *(int *)(param_1 + 0x1e0) = iVar7;
        break;
      }
      iVar7 = iVar7 + 4;
    } while (*(int *)(param_1 + 0xa0 + iVar7) != -1);
  }
  if (!bVar6) {
    cmd_error_report((uint32_t *)(*(uint32_t *)(param_1 + 4)),(uint32_t)(0x90));
  }
  return bVar6;
}
