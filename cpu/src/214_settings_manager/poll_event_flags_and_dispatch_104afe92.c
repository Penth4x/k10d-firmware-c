/* @k10d poll_event_flags_and_dispatch_104afe92 @ 0x104afe92
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void poll_event_flags_and_dispatch_104afe92(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  uint uStack_c;
  
  iVar2 = 0;
  iVar3 = _DAT_105a2af0/*ROM*/;
LAB_104afed8:
  uStack_c = 0;
  bVar1 = call_subobject_method_and_reset(param_1,&uStack_c,iVar3);
  if (bVar1) goto LAB_104afeea;
  iVar2 = 0;
  goto LAB_104b0190;
LAB_104afeea:
  if (uStack_c == 0) {
    bVar1 = iVar2 == 0;
  }
  else {
    do {
      if ((uStack_c & 8) == 0) {
        if ((uStack_c & 2) == 0) {
          if ((uStack_c & 0x10) == 0) {
            if ((uStack_c & 0x20) == 0) {
              if ((uStack_c & 0x40) == 0) {
                if ((uStack_c & 0x80) == 0) {
                  if ((uStack_c & 0x100) == 0) {
                    if ((uStack_c & 4) == 0) {
                      if ((uStack_c & 0x200) == 0) {
                        if ((uStack_c & 0x400) == 0) {
                          if ((uStack_c & 0x800) == 0) {
                            if ((uStack_c & 0x1000) == 0) {
                              if ((((uStack_c & 1) != 0) &&
                                  (uStack_c = uStack_c & 0xfffffffe,
                                  *(char *)(param_1 + 0x28) == '\0')) &&
                                 (iVar2 = *(int *)(*(int *)(param_1 + 0x48) + 8),
                                 iVar2 = (**(code **)(iVar2 + 0x1c))
                                                   (*(int *)(param_1 + 0x48) +
                                                    (int)*(short *)(iVar2 + 0x18)), iVar2 == 1)) {
                                *(uint8_t *)(param_1 + 0x28) = 1;
                                iVar4 = **(int **)(param_1 + 0x2c);
                                (**(code **)(iVar4 + 0x2c))
                                          ((int)*(int **)(param_1 + 0x2c) +
                                           (int)*(short *)(iVar4 + 0x28));
                                uStack_c = 0;
                                bVar1 = false;
                                goto LAB_104b018e;
                              }
                            }
                            else {
                              iVar4 = **(int **)(param_1 + 0x4c);
                              (**(code **)(iVar4 + 0x2c))
                                        ((int)*(int **)(param_1 + 0x4c) +
                                         (int)*(short *)(iVar4 + 0x28));
                              uStack_c = uStack_c & 0xffffefff;
                            }
                          }
                          else {
                            uStack_c = uStack_c & 0xfffff7ff;
                            iVar2 = **(int **)(param_1 + 0x4c);
                            iVar2 = (**(code **)(iVar2 + 0x34))
                                              ((int)*(int **)(param_1 + 0x4c) +
                                               (int)*(short *)(iVar2 + 0x30),
                                               *(uint32_t *)(param_1 + 100),
                                               *(uint32_t *)(param_1 + 0x68));
                          }
                        }
                        else {
                          iVar4 = **(int **)(param_1 + 0x4c);
                          (**(code **)(iVar4 + 0x24))
                                    ((int)*(int **)(param_1 + 0x4c) + (int)*(short *)(iVar4 + 0x20),
                                     *(uint32_t *)(param_1 + 0x58));
                          uStack_c = uStack_c & 0xfffffbff;
                        }
                      }
                      else {
                        iVar4 = **(int **)(param_1 + 0x4c);
                        (**(code **)(iVar4 + 0x1c))
                                  ((int)*(int **)(param_1 + 0x4c) + (int)*(short *)(iVar4 + 0x18),
                                   *(uint32_t *)(param_1 + 0x58));
                        uStack_c = uStack_c & 0xfffffdff;
                      }
                    }
                    else {
                      uStack_c = 0;
                      update_cached_value_and_notify(param_1,*(uint32_t *)(param_1 + 0x24));
                    }
                  }
                  else {
                    uStack_c = uStack_c & 0xfffffeff;
                    iVar2 = *(int *)(*(int *)(param_1 + 0x48) + 8);
                    iVar2 = (**(code **)(iVar2 + 0x34))
                                      (*(int *)(param_1 + 0x48) + (int)*(short *)(iVar2 + 0x30),
                                       *(uint32_t *)(param_1 + 0x5c),
                                       *(uint32_t *)(param_1 + 0x60));
                  }
                }
                else {
                  uStack_c = uStack_c & 0xffffff7f;
                  iVar2 = *(int *)(*(int *)(param_1 + 0x48) + 8);
                  iVar2 = (**(code **)(iVar2 + 0x54))
                                    (*(int *)(param_1 + 0x48) + (int)*(short *)(iVar2 + 0x50));
                }
              }
              else {
                uStack_c = uStack_c & 0xffffffbf;
                iVar2 = *(int *)(*(int *)(param_1 + 0x48) + 8);
                iVar2 = (**(code **)(iVar2 + 0x4c))
                                  (*(int *)(param_1 + 0x48) + (int)*(short *)(iVar2 + 0x48));
              }
            }
            else {
              uStack_c = uStack_c & 0xffffffdf;
              iVar2 = *(int *)(*(int *)(param_1 + 0x48) + 8);
              iVar2 = (**(code **)(iVar2 + 0x44))
                                (*(int *)(param_1 + 0x48) + (int)*(short *)(iVar2 + 0x40),
                                 *(uint32_t *)(param_1 + 0x50));
            }
          }
          else {
            uStack_c = uStack_c & 0xffffffef;
            iVar2 = *(int *)(*(int *)(param_1 + 0x48) + 8);
            iVar2 = (**(code **)(iVar2 + 0x3c))
                              (*(int *)(param_1 + 0x48) + (int)*(short *)(iVar2 + 0x38),
                               *(uint32_t *)(param_1 + 0x50));
          }
        }
        else {
          uStack_c = uStack_c & 0xfffffffd;
          iVar3 = *(int *)(*(int *)(param_1 + 0x48) + 8);
          (**(code **)(iVar3 + 0x24))(*(int *)(param_1 + 0x48) + (int)*(short *)(iVar3 + 0x20));
          iVar3 = 500;
        }
      }
      else {
        uStack_c = 0;
        iVar2 = *(int *)(*(int *)(param_1 + 0x48) + 8);
        iVar2 = (**(code **)(iVar2 + 0x2c))
                          (*(int *)(param_1 + 0x48) + (int)*(short *)(iVar2 + 0x28));
      }
    } while (uStack_c != 0);
    bVar1 = iVar2 == 0;
  }
LAB_104b018e:
  if (bVar1) {
LAB_104b0190:
    (**(code **)(*(int *)(param_1 + 0x10) + 0x24))
              (*(short *)(*(int *)(param_1 + 0x10) + 0x20) + param_1,0);
    *(uint8_t *)(param_1 + 0x28) = 0;
    iVar3 = **(int **)(param_1 + 0x2c);
    (**(code **)(iVar3 + 0x34))((int)*(int **)(param_1 + 0x2c) + (int)*(short *)(iVar3 + 0x30));
    iVar3 = _DAT_105a2af0/*ROM*/;
  }
  goto LAB_104afed8;
}
