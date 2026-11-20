/* @k10d poll_event_flags_and_dispatch_104afe92 @ 0x104afe92
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void poll_event_flags_and_dispatch_104afe92(cls_105b7994 *param_1)

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
  bVar1 = call_subobject_method_and_reset((int)param_1,&uStack_c,iVar3);
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
                                  (uStack_c = uStack_c & 0xfffffffe, param_1->field_0x28 == '\0'))
                                 && (iVar2 = *(int *)(param_1->field_0x48 + 8),
                                    iVar2 = (((vtbl_entry*)(iVar2))[3].fn)
                                                      (param_1->field_0x48 +
                                                       (int)((vtbl_entry*)(iVar2))[3].adj), iVar2 == 1))
                              {
                                param_1->field_0x28 = '\x01';
                                iVar4 = *(uint32_t*)(param_1->field_0x2c);
                                (((vtbl_entry*)(iVar4))[5].fn)
                                          ((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar4))[5].adj)
                                ;
                                uStack_c = 0;
                                bVar1 = false;
                                goto LAB_104b018e;
                              }
                            }
                            else {
                              iVar4 = *(uint32_t*)(param_1->field_0x4c);
                              (((vtbl_entry*)(iVar4))[5].fn)
                                        ((int)param_1->field_0x4c + (int)((vtbl_entry*)(iVar4))[5].adj);
                              uStack_c = uStack_c & 0xffffefff;
                            }
                          }
                          else {
                            uStack_c = uStack_c & 0xfffff7ff;
                            iVar2 = *(uint32_t*)(param_1->field_0x4c);
                            iVar2 = (((vtbl_entry*)(iVar2))[6].fn)
                                              ((int)param_1->field_0x4c +
                                               (int)((vtbl_entry*)(iVar2))[6].adj,param_1->field_0x64,
                                               param_1->field_0x68);
                          }
                        }
                        else {
                          iVar4 = *(uint32_t*)(param_1->field_0x4c);
                          (((vtbl_entry*)(iVar4))[4].fn)
                                    ((int)param_1->field_0x4c + (int)((vtbl_entry*)(iVar4))[4].adj,
                                     param_1->field_0x58);
                          uStack_c = uStack_c & 0xfffffbff;
                        }
                      }
                      else {
                        iVar4 = *(uint32_t*)(param_1->field_0x4c);
                        (((vtbl_entry*)(iVar4))[3].fn)
                                  ((int)param_1->field_0x4c + (int)((vtbl_entry*)(iVar4))[3].adj,
                                   param_1->field_0x58);
                        uStack_c = uStack_c & 0xfffffdff;
                      }
                    }
                    else {
                      uStack_c = 0;
                      update_cached_value_and_notify((uint32_t)(param_1),param_1->field_0x24);
                    }
                  }
                  else {
                    uStack_c = uStack_c & 0xfffffeff;
                    iVar2 = *(int *)(param_1->field_0x48 + 8);
                    iVar2 = (((vtbl_entry*)(iVar2))[6].fn)
                                      (param_1->field_0x48 + (int)((vtbl_entry*)(iVar2))[6].adj,
                                       param_1->field_0x5c,param_1->field_0x60);
                  }
                }
                else {
                  uStack_c = uStack_c & 0xffffff7f;
                  iVar2 = *(int *)(param_1->field_0x48 + 8);
                  iVar2 = (((vtbl_entry*)(iVar2))[10].fn)
                                    (param_1->field_0x48 + (int)((vtbl_entry*)(iVar2))[10].adj);
                }
              }
              else {
                uStack_c = uStack_c & 0xffffffbf;
                iVar2 = *(int *)(param_1->field_0x48 + 8);
                iVar2 = (((vtbl_entry*)(iVar2))[9].fn)
                                  (param_1->field_0x48 + (int)((vtbl_entry*)(iVar2))[9].adj);
              }
            }
            else {
              uStack_c = uStack_c & 0xffffffdf;
              iVar2 = *(int *)(param_1->field_0x48 + 8);
              iVar2 = (((vtbl_entry*)(iVar2))[8].fn)
                                (param_1->field_0x48 + (int)((vtbl_entry*)(iVar2))[8].adj,
                                 param_1->field_0x50);
            }
          }
          else {
            uStack_c = uStack_c & 0xffffffef;
            iVar2 = *(int *)(param_1->field_0x48 + 8);
            iVar2 = (((vtbl_entry*)(iVar2))[7].fn)
                              (param_1->field_0x48 + (int)((vtbl_entry*)(iVar2))[7].adj,
                               param_1->field_0x50);
          }
        }
        else {
          uStack_c = uStack_c & 0xfffffffd;
          iVar3 = *(int *)(param_1->field_0x48 + 8);
          (((vtbl_entry*)(iVar3))[4].fn)(param_1->field_0x48 + (int)((vtbl_entry*)(iVar3))[4].adj);
          iVar3 = 500;
        }
      }
      else {
        uStack_c = 0;
        iVar2 = *(int *)(param_1->field_0x48 + 8);
        iVar2 = (((vtbl_entry*)(iVar2))[5].fn)(param_1->field_0x48 + (int)((vtbl_entry*)(iVar2))[5].adj);
      }
    } while (uStack_c != 0);
    bVar1 = iVar2 == 0;
  }
LAB_104b018e:
  if (bVar1) {
LAB_104b0190:
    (((vtbl_entry*)(param_1->field_0x10))[4].fn)
              (&param_1->field_0x0 + ((vtbl_entry*)(param_1->field_0x10))[4].adj,0);
    param_1->field_0x28 = '\0';
    iVar3 = *(uint32_t*)(param_1->field_0x2c);
    (((vtbl_entry*)(iVar3))[6].fn)((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar3))[6].adj);
    iVar3 = _DAT_105a2af0/*ROM*/;
  }
  goto LAB_104afed8;
}
