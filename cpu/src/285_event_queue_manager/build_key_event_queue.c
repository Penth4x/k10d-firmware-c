/* @k10d build_key_event_queue @ 0x1052a7a8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 285_event_queue_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1052aa6a) overlaps instruction at (ram,0x1052aa68)
    */

bool build_key_event_queue(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint32_t *puVar4;
  int *piVar5;
  int iVar6;
  uint8_t *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint32_t uVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  uintptr_t sp;
  int iStack_f8;
  int iStack_f0;
  int iStack_d4;
  int iStack_d0;
  int iStack_c4;
  int aiStack_c0 [46];
  
  iVar2 = 0x16;
  iVar10 = 0;
  do {
    puVar4 = (uint32_t *)(param_1 + 0x2a0 + iVar10);
    *puVar4 = 0xffff;
    puVar4[1] = 0;
    puVar4 = (uint32_t *)(param_1 + 0x2a0 + iVar10 + 8);
    *puVar4 = 0xffff;
    puVar4[1] = 0;
    iVar2 = iVar2 + -1;
    iVar10 = iVar10 + 0x10;
  } while (-1 < iVar2);
  iVar2 = 0;
  iStack_d0 = 0x21;
  iStack_d4 = 200;
  do {
    if ((((iVar2 != 0xd) && (iVar2 != 0xe)) && (iVar2 != 0xf)) && (iVar2 != 0x10)) {
      iVar10 = (**(code **)(*param_2 + 0x24))((int)*(short *)(*param_2 + 0x20) + (int)param_2,iVar2)
      ;
      if (iVar10 != 0) {
        *(int *)(*(int *)(param_1 + 0x410) * 8 + param_1 + 0x2a0) = iVar2;
        *(uint32_t *)(param_1 + 0x2a0 + *(int *)(param_1 + 0x410) * 8 + 4) = 1;
        *(int *)(param_1 + 0x410) = *(int *)(param_1 + 0x410) + 1;
      }
      iVar10 = (**(code **)(*param_2 + 0x2c))((int)*(short *)(*param_2 + 0x28) + (int)param_2,iVar2)
      ;
      if (iVar10 != 0) {
        *(int *)(*(int *)(param_1 + 0x410) * 8 + param_1 + 0x2a0) = iStack_d4;
        *(uint32_t *)(param_1 + 0x2a0 + *(int *)(param_1 + 0x410) * 8 + 4) = 1;
        *(int *)(param_1 + 0x410) = *(int *)(param_1 + 0x410) + 1;
      }
    }
    iVar2 = iVar2 + 1;
    iStack_d4 = iStack_d4 + 1;
    iVar10 = iStack_d0 + -1;
    bVar1 = 0 < iStack_d0;
    iStack_d0 = iVar10;
  } while (bVar1 && iVar10 != 0);
  iVar2 = (**(code **)(*param_2 + 0x54))((int)*(short *)(*param_2 + 0x50) + (int)param_2);
  if (iVar2 != 0xffff) {
    *(int *)(*(int *)(param_1 + 0x410) * 8 + param_1 + 0x2a0) = iVar2;
    *(uint32_t *)(param_1 + 0x2a0 + *(int *)(param_1 + 0x410) * 8 + 4) = 1;
    *(int *)(param_1 + 0x410) = *(int *)(param_1 + 0x410) + 1;
  }
  iVar2 = (**(code **)(*param_2 + 0x5c))((int)*(short *)(*param_2 + 0x58) + (int)param_2);
  if (iVar2 != 0xffff) {
    iVar10 = param_1 + 0x2a0;
    *(int *)(*(int *)(param_1 + 0x410) * 8 + iVar10) = iVar2 + 200;
    *(uint32_t *)(*(int *)(param_1 + 0x410) * 8 + iVar10 + 4) = 1;
    *(int *)(param_1 + 0x410) = *(int *)(param_1 + 0x410) + 1;
    iVar2 = (**(code **)(*param_2 + 0x54))((int)*(short *)(*param_2 + 0x50) + (int)param_2);
    if (iVar2 != 0xffff) {
      *(int *)(*(int *)(param_1 + 0x410) * 8 + iVar10) = iVar2;
      *(uint32_t *)(*(int *)(param_1 + 0x410) * 8 + iVar10 + 4) = 1;
      *(int *)(param_1 + 0x410) = *(int *)(param_1 + 0x410) + 1;
    }
  }
  iVar2 = 0x22;
  iStack_f0 = 3;
  do {
    iVar10 = (**(code **)(*param_2 + 0x34))((int)*(short *)(*param_2 + 0x30) + (int)param_2,iVar2);
    if (iVar10 != 0) {
      *(int *)(*(int *)(param_1 + 0x410) * 8 + param_1 + 0x2a0) = iVar2;
      iVar10 = *(int *)(param_1 + 0x410);
      uVar11 = (**(code **)(*param_2 + 0x3c))((int)*(short *)(*param_2 + 0x38) + (int)param_2,iVar2)
      ;
      *(uint32_t *)(param_1 + 0x2a0 + iVar10 * 8 + 4) = uVar11;
      *(int *)(param_1 + 0x410) = *(int *)(param_1 + 0x410) + 1;
    }
    iVar13 = iVar2 + 1;
    iVar10 = (**(code **)(*param_2 + 0x34))((int)*(short *)(*param_2 + 0x30) + (int)param_2,iVar13);
    if (iVar10 != 0) {
      *(int *)(*(int *)(param_1 + 0x410) * 8 + param_1 + 0x2a0) = iVar13;
      iVar10 = *(int *)(param_1 + 0x410);
      uVar11 = (**(code **)(*param_2 + 0x3c))
                         ((int)*(short *)(*param_2 + 0x38) + (int)param_2,iVar13);
      *(uint32_t *)(param_1 + 0x2a0 + iVar10 * 8 + 4) = uVar11;
      *(int *)(param_1 + 0x410) = *(int *)(param_1 + 0x410) + 1;
    }
    iVar13 = iVar2 + 2;
    iVar10 = (**(code **)(*param_2 + 0x34))((int)*(short *)(*param_2 + 0x30) + (int)param_2,iVar13);
    if (iVar10 != 0) {
      *(int *)(*(int *)(param_1 + 0x410) * 8 + param_1 + 0x2a0) = iVar13;
      iVar10 = *(int *)(param_1 + 0x410);
      uVar11 = (**(code **)(*param_2 + 0x3c))
                         ((int)*(short *)(*param_2 + 0x38) + (int)param_2,iVar13);
      *(uint32_t *)(param_1 + 0x2a0 + iVar10 * 8 + 4) = uVar11;
      *(int *)(param_1 + 0x410) = *(int *)(param_1 + 0x410) + 1;
    }
    iVar2 = iVar2 + 3;
    iStack_f0 = iStack_f0 + -1;
  } while (-1 < iStack_f0);
  if (*(int *)(param_1 + 4) != 0xffff) {
    iVar2 = 0;
    do {
      piVar5 = (int *)(param_1 + 0x2a0);
      if (*piVar5 != 0xffff) {
        iVar10 = 0;
        do {
          iVar6 = 0;
          iVar8 = 0;
          iVar12 = -1;
          iVar13 = 3;
          do {
            iVar9 = param_1 + 4 + iVar2;
            iVar3 = iVar9 + 0x14;
            if ((*(char *)(iVar3 + iVar6) == '\0') &&
               (*(int *)(param_1 + 0x2a0 + iVar10) == *(int *)(iVar9 + 8 + iVar8))) {
              *(uint8_t *)(iVar3 + iVar6) = 1;
            }
            else if ((*(char *)(iVar3 + iVar6) == '\0') ||
                    (*(int *)(param_1 + 0x2a0 + iVar10) != *(int *)(iVar9 + 8 + iVar8) + 200)) {
              if (*(int *)(iVar9 + 8 + iVar8) == 0xffff) {
                *(uint8_t *)(iVar3 + iVar6) = *(uint8_t *)(iVar3 + iVar12);
              }
            }
            else {
              *(uint8_t *)(iVar3 + iVar6) = 0;
            }
            iVar6 = iVar6 + 1;
            iVar12 = iVar12 + 1;
            iVar3 = iVar13 + -1;
            bVar1 = 0 < iVar13;
            iVar8 = iVar8 + 4;
            iVar13 = iVar3;
          } while (bVar1 && iVar3 != 0);
          iVar10 = iVar10 + 8;
        } while (*(int *)(param_1 + 0x2a0 + iVar10) != 0xffff);
      }
      iVar10 = param_1 + 4;
      if (((*(char *)(iVar10 + iVar2 + 4) == '\0') &&
          (piVar14 = (int *)(iVar10 + iVar2), *(char *)(piVar14 + 5) != '\0')) &&
         ((*(char *)((int)piVar14 + 0x15) != '\0' && (*(char *)((int)piVar14 + 0x16) != '\0')))) {
        piVar5[*(int *)(param_1 + 0x410) * 2] = *piVar14;
        piVar5[*(int *)(param_1 + 0x410) * 2 + 1] = 1;
        *(int *)(param_1 + 0x410) = *(int *)(param_1 + 0x410) + 1;
        *(uint8_t *)(piVar14 + 1) = 1;
      }
      else {
        piVar14 = (int *)(iVar2 + iVar10);
        if ((*(char *)(piVar14 + 1) != '\0') &&
           (((*(char *)(piVar14 + 5) == '\0' || (*(char *)((int)piVar14 + 0x15) == '\0')) ||
            (*(char *)((int)piVar14 + 0x16) == '\0')))) {
          piVar5[*(int *)(param_1 + 0x410) * 2] = *piVar14 + 200;
          piVar5[*(int *)(param_1 + 0x410) * 2 + 1] = 1;
          *(int *)(param_1 + 0x410) = *(int *)(param_1 + 0x410) + 1;
          *(uint8_t *)(piVar14 + 1) = 0;
        }
      }
      iVar2 = iVar2 + 0x18;
    } while (*(int *)(iVar10 + iVar2) != 0xffff);
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x16c)) {
    iVar10 = 0;
    do {
      iVar13 = 0;
      if (0 < *(int *)(param_1 + 0x410)) {
        iVar6 = 0;
        do {
          if (*(int *)(param_1 + 0x170 + iVar10) == *(int *)(param_1 + 0x2a0 + iVar6)) {
            iVar13 = param_1 + 0x170 + iVar10;
            *(int *)(iVar13 + 8) = *(int *)(iVar13 + 4) + 0x200;
            break;
          }
          iVar13 = iVar13 + 1;
          iVar6 = iVar6 + 8;
        } while (iVar13 < *(int *)(param_1 + 0x410));
      }
      iVar2 = iVar2 + 1;
      iVar10 = iVar10 + 0xc;
    } while (iVar2 < *(int *)(param_1 + 0x16c));
  }
  iVar13 = 0;
  iVar2 = 0x16;
  iVar10 = 0;
  do {
    *(uint32_t *)((int)aiStack_c0 + iVar10) = 0;
    *(uint32_t *)((int)aiStack_c0 + iVar10 + 4) = 0;
    iVar10 = iVar10 + 8;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  iStack_f8 = 0;
  iStack_c4 = 10;
  iVar2 = 0;
  do {
    iVar10 = (**(code **)(*param_2 + 0x14))
                       ((int)*(short *)(*param_2 + 0x10) + (int)param_2,iStack_f8);
    if (iVar10 != 0) {
      iVar13 = iVar13 + 1;
      *(int *)((int)aiStack_c0 + iVar2) = iStack_f8;
      iVar2 = iVar2 + 4;
    }
    iVar10 = (**(code **)(*param_2 + 0x14))
                       ((int)*(short *)(*param_2 + 0x10) + (int)param_2,iStack_f8 + 1);
    if (iVar10 != 0) {
      iVar13 = iVar13 + 1;
      *(int *)((int)aiStack_c0 + iVar2) = iStack_f8 + 1;
      iVar2 = iVar2 + 4;
    }
    iVar10 = (**(code **)(*param_2 + 0x14))
                       ((int)*(short *)(*param_2 + 0x10) + (int)param_2,iStack_f8 + 2);
    if (iVar10 != 0) {
      iVar13 = iVar13 + 1;
      *(int *)((int)aiStack_c0 + iVar2) = iStack_f8 + 2;
      iVar2 = iVar2 + 4;
    }
    iStack_f8 = iStack_f8 + 3;
    iStack_c4 = iStack_c4 + -1;
  } while (-1 < iStack_c4);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x16c)) {
    iVar10 = 0;
    while( true ) {
      if (0 < iVar13) {
        iVar6 = iVar13 + -3;
        iVar8 = 0;
        if (2 < iVar6) {
          do {
            piVar5 = (int *)(param_1 + 0x170 + iVar10);
            if ((*piVar5 == *(int *)((int)aiStack_c0 + iVar8)) &&
               (iVar12 = piVar5[2], iVar3 = iVar12 + -0x80, piVar5[2] = iVar3,
               iVar12 < 0x80 || iVar3 == 0)) {
              *(int *)(*(int *)(param_1 + 0x410) * 8 + param_1 + 0x2a0) = *piVar5;
              *(uint32_t *)(param_1 + 0x2a0 + *(int *)(param_1 + 0x410) * 8 + 4) = 1;
              piVar5[2] = piVar5[1];
              *(int *)(param_1 + 0x410) = *(int *)(param_1 + 0x410) + 1;
            }
            if ((*piVar5 == *(int *)((int)aiStack_c0 + iVar8 + 4)) &&
               (iVar12 = piVar5[2], iVar3 = iVar12 + -0x80, piVar5[2] = iVar3,
               iVar12 < 0x80 || iVar3 == 0)) {
              *(int *)(*(int *)(param_1 + 0x410) * 8 + param_1 + 0x2a0) = *piVar5;
              *(uint32_t *)(param_1 + 0x2a0 + *(int *)(param_1 + 0x410) * 8 + 4) = 1;
              piVar5[2] = piVar5[1];
              *(int *)(param_1 + 0x410) = *(int *)(param_1 + 0x410) + 1;
            }
            if ((*piVar5 == *(int *)((int)aiStack_c0 + iVar8 + 8)) &&
               (iVar12 = piVar5[2], iVar3 = iVar12 + -0x80, piVar5[2] = iVar3,
               iVar12 < 0x80 || iVar3 == 0)) {
              *(int *)(*(int *)(param_1 + 0x410) * 8 + param_1 + 0x2a0) = *piVar5;
              *(uint32_t *)(param_1 + 0x2a0 + *(int *)(param_1 + 0x410) * 8 + 4) = 1;
              piVar5[2] = piVar5[1];
              *(int *)(param_1 + 0x410) = *(int *)(param_1 + 0x410) + 1;
            }
            iVar6 = iVar6 + -3;
            iVar8 = iVar8 + 0xc;
          } while (-1 < iVar6);
        }
        iVar6 = iVar6 + 2;
        if (-1 < iVar6) {
          puVar7 = &stack0xfffffff8 + iVar8;
          do {
            piVar5 = (int *)(param_1 + 0x170 + iVar10);
            if ((*piVar5 == *(int *)(puVar7 + -0xb8)) &&
               (iVar8 = piVar5[2], iVar12 = iVar8 + -0x80, piVar5[2] = iVar12,
               iVar8 < 0x80 || iVar12 == 0)) {
              *(int *)(*(int *)(param_1 + 0x410) * 8 + param_1 + 0x2a0) = *piVar5;
              *(uint32_t *)(param_1 + 0x2a0 + *(int *)(param_1 + 0x410) * 8 + 4) = 1;
              piVar5[2] = piVar5[1];
              *(int *)(param_1 + 0x410) = *(int *)(param_1 + 0x410) + 1;
            }
            iVar6 = iVar6 + -1;
            puVar7 = puVar7 + 4;
          } while (-1 < iVar6);
        }
      }
      iVar2 = iVar2 + 1;
      if (*(int *)(param_1 + 0x16c) <= iVar2) break;
      iVar10 = iVar10 + 0xc;
    }
  }
  return 0 < *(int *)(param_1 + 0x410);
}
