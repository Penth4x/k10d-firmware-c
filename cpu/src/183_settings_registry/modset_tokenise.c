/* @k10d modset_tokenise @ 0x10487418
 * name: verified (structural evidence: decomp)
 * unit: 183_settings_registry (unit names are model-proposed)
 * purpose:
 *   Opens C:\MODSET.TXT (name XOR-0x29 at 0x105b2fc8), reads [TOKEN] bracketed lines (stops
 *   at '!' or ';'), each token -> match_service_token.
 * summary:
 *   VERIFIED: decomp
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1048749c) overlaps instruction at (ram,0x1048749a)
    */

uint32_t modset_tokenise(uint32_t *param_1,uint8_t *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  int iVar10;
  uintptr_t sp;
  char *pcStack_5c;
  uint32_t uStack_58;
  uint8_t auStack_48 [16];
  int iStack_38;
  uint8_t uStack_27;
  uint8_t uStack_26;
  uint8_t uStack_25;
  uint8_t uStack_24;
  uint8_t uStack_23;
  uint8_t uStack_22;
  uint8_t uStack_21;
  uint8_t uStack_20;
  uint8_t uStack_1f;
  uint8_t uStack_1e;
  uint8_t uStack_1d;
  uint8_t uStack_1c;
  uint8_t uStack_1b;
  uint8_t uStack_1a;
  uint8_t uStack_19;
  uint8_t uStack_18;
  uint8_t uStack_17;
  uint8_t uStack_16;
  uint8_t uStack_15;
  uint8_t uStack_14;
  uint8_t uStack_13;
  uint8_t uStack_12;
  uint8_t uStack_11;
  int iStack_10;
  uint32_t uStack_c;
  
  iStack_10 = 0;
  bVar2 = false;
  pcVar4 = (char *)heap_alloc_2(0x400);
  iVar5 = heap_alloc_2(0x80);
  pvVar6 = (void *)heap_alloc_2(0xf);
  (*(code *)0x10486a2c/*ROM*/)(param_1,0x105b2fc8/*ROM*/,pvVar6,0xf);
  iVar7 = get_or_create_camera_object();
  piVar9 = *(int **)(iVar7 + 0xc);
  cls_105ab468_new(auStack_48);
  iVar7 = call_with_offset_lock_1048101c(piVar9,pvVar6,auStack_48);
  if (iVar7 == 0) {
    uStack_58 = 0;
  }
  else {
    uStack_c = 0;
    iVar7 = (**(code **)(*piVar9 + 0x2c))
                      ((int)*(short *)(*piVar9 + 0x28) + (int)piVar9,pvVar6,1,&uStack_c);
    if (iVar7 == 0) {
      uStack_58 = 0;
    }
    else {
      pcVar8 = (char *)heap_alloc_2(iStack_38 + 1);
      uStack_58 = (**(code **)(*piVar9 + 0x3c))
                            ((int)*(short *)(*piVar9 + 0x38) + (int)piVar9,uStack_c,pcVar8,iStack_38
                            );
      (**(code **)(*piVar9 + 0x34))((int)*(short *)(*piVar9 + 0x30) + (int)piVar9,uStack_c);
      pcVar8[iStack_38] = '\0';
      uStack_27 = 0;
      pcStack_5c = pcVar8;
      uStack_26 = uStack_27;
      uStack_25 = uStack_27;
      uStack_24 = uStack_27;
      uStack_23 = uStack_27;
      uStack_22 = uStack_27;
      uStack_21 = uStack_27;
      uStack_20 = uStack_27;
      uStack_1f = uStack_27;
      uStack_1e = uStack_27;
      uStack_1d = uStack_27;
      uStack_1c = uStack_27;
      uStack_1b = uStack_27;
      uStack_1a = uStack_27;
      uStack_19 = uStack_27;
      uStack_18 = uStack_27;
      uStack_17 = uStack_27;
      uStack_16 = uStack_27;
      uStack_15 = uStack_27;
      uStack_14 = uStack_27;
      uStack_13 = uStack_27;
      uStack_12 = uStack_27;
      uStack_11 = uStack_27;
      while (iVar7 = copy_line_until_crlf(*param_1,pcStack_5c,&iStack_10,pcVar4), iVar7 != 0) {
        iVar7 = 0;
        cVar1 = *pcVar4;
        while (cVar1 != '\0') {
          cVar1 = pcVar4[iVar7];
          if (cVar1 == '[') {
            iVar3 = iVar7 + 1;
            iVar10 = 0;
            cVar1 = pcVar4[iVar3];
            while (cVar1 != '\0') {
              if (pcVar4[iVar3] == ']') {
                *(uint8_t *)(iVar5 + iVar10) = 0;
                bVar2 = true;
                iVar10 = iVar10 + 1;
                break;
              }
              *(char *)(iVar5 + iVar10) = pcVar4[iVar3];
              iVar3 = iVar3 + 1;
              iVar10 = iVar10 + 1;
              cVar1 = pcVar4[iVar3];
            }
            if (bVar2) {
              match_service_token(param_1,(void *)iVar5,param_2);
              bVar2 = false;
            }
            iVar7 = iVar7 + iVar10;
          }
          else if ((cVar1 == '!') || (cVar1 == ';')) break;
          iVar7 = iVar7 + 1;
          cVar1 = pcVar4[iVar7];
        }
        pcStack_5c = pcStack_5c + iStack_10;
      }
      heap_free_2((int)pcVar8);
    }
  }
  heap_free_2((int)pcVar4);
  heap_free_2(iVar5);
  heap_free_2((int)pvVar6);
  cls_105ab468_delete(auStack_48,2);
  return uStack_58;
}
