/* @k10d advance_state_machine_counters @ 0x1051f6ec
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int advance_state_machine_counters(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != 2) {
    if (param_2 != 1) {
      return (int)param_1;
    }
    return 0;
  }
  iVar3 = param_1[0x11];
  iVar2 = param_1[0x17];
  iVar4 = param_1[0x18];
  iVar1 = advance_state_on_virtual_ok((int)param_1,param_3);
  if (iVar1 == 0) {
    iVar1 = advance_state_on_virtual_event((int)param_1,param_3);
    if (iVar1 == 0) {
      iVar1 = advance_state_counter_on_event((int)param_1,param_3);
      if (iVar1 == 0) {
        iVar1 = advance_state_on_virtual_call((int)param_1,param_3);
        if (iVar1 == 0) {
          iVar1 = (**(code **)(*param_3 + 0x24))
                            ((int)*(short *)(*param_3 + 0x20) + (int)param_3,0x15);
          if (iVar1 == 0) {
            iVar1 = (**(code **)(*param_3 + 0x24))
                              ((int)*(short *)(*param_3 + 0x20) + (int)param_3,0x17);
            if (iVar1 != 0) {
              iVar1 = get_or_create_singleton_1051f11c();
              *(uint32_t *)(iVar1 + 0x44) = 4;
              return iVar1;
            }
            iVar1 = (**(code **)(*param_3 + 0x3c))
                              ((int)*(short *)(*param_3 + 0x38) + (int)param_3,0x29);
            if (iVar1 < 1) {
              iVar1 = (**(code **)(*param_3 + 0x3c))
                                ((int)*(short *)(*param_3 + 0x38) + (int)param_3,0x29);
              if (-1 < iVar1) {
                return (int)param_1;
              }
              iVar1 = *(int *)(iVar3 * 4 + 0x105d6f90/*ROM*/);
              if (iVar1 == 2) {
                if (iVar2 == 2) {
                  if (param_1[0x1b] < 1) {
                    param_1[0x1b] = 3;
                  }
                  else {
                    param_1[0x1b] = param_1[0x1b] + -1;
                  }
                }
                else if (param_1[iVar2 + 0x19] < 1) {
                  param_1[iVar2 + 0x19] = 0xf;
                }
                else {
                  param_1[iVar2 + 0x19] = param_1[iVar2 + 0x19] + -1;
                }
              }
              else {
                if (iVar1 != 4) {
                  return (int)param_1;
                }
                if (param_1[iVar4 + 0x1d] < 1) {
                  param_1[iVar4 + 0x1d] = 0xf;
                }
                else {
                  param_1[iVar4 + 0x1d] = param_1[iVar4 + 0x1d] + -1;
                }
              }
            }
            else {
              iVar1 = *(int *)(iVar3 * 4 + 0x105d6f90/*ROM*/);
              if (iVar1 == 2) {
                if (iVar2 == 2) {
                  if (param_1[0x1b] < 3) {
                    param_1[0x1b] = param_1[0x1b] + 1;
                  }
                  else {
                    param_1[0x1b] = 0;
                  }
                }
                else if (param_1[iVar2 + 0x19] < 0xf) {
                  param_1[iVar2 + 0x19] = param_1[iVar2 + 0x19] + 1;
                }
                else {
                  param_1[iVar2 + 0x19] = 0;
                }
              }
              else {
                if (iVar1 != 4) {
                  return (int)param_1;
                }
                if (param_1[iVar4 + 0x1d] < 0xf) {
                  param_1[iVar4 + 0x1d] = param_1[iVar4 + 0x1d] + 1;
                }
                else {
                  param_1[iVar4 + 0x1d] = 0;
                }
              }
            }
          }
          else {
            iVar1 = *(int *)(iVar3 * 4 + 0x105d6f90/*ROM*/);
            if ((iVar1 != 6) && (iVar1 != 7)) {
              return (int)param_1;
            }
            set_flag_at_offset_0x58_1051ff6e((int)param_1);
          }
        }
        else {
          iVar1 = *(int *)(iVar3 * 4 + 0x105d6f90/*ROM*/);
          if (iVar1 == 2) {
            if (iVar2 < 1) {
              param_1[0x17] = 2;
            }
            else {
              param_1[0x17] = iVar2 + -1;
            }
          }
          else {
            if (iVar1 != 4) {
              return (int)param_1;
            }
            if (iVar4 < 1) {
              param_1[0x18] = 1;
            }
            else {
              param_1[0x18] = iVar4 + -1;
            }
          }
        }
      }
      else {
        iVar1 = *(int *)(iVar3 * 4 + 0x105d6f90/*ROM*/);
        if (iVar1 == 2) {
          if (iVar2 < 2) {
            param_1[0x17] = iVar2 + 1;
          }
          else {
            param_1[0x17] = 0;
          }
        }
        else {
          if (iVar1 != 4) {
            return (int)param_1;
          }
          if (iVar4 < 1) {
            param_1[0x18] = iVar4 + 1;
          }
          else {
            param_1[0x18] = 0;
          }
        }
      }
    }
    else if (iVar3 < 3) {
      param_1[0x11] = iVar3 + 1;
    }
    else {
      param_1[0x11] = 0;
    }
  }
  else if (iVar3 < 1) {
    param_1[0x11] = 3;
  }
  else {
    param_1[0x11] = iVar3 + -1;
  }
  iVar1 = build_exposure_param_table(param_1);
  return iVar1;
}
