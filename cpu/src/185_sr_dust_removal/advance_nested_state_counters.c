/* @k10d advance_nested_state_counters @ 0x10489dba
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 185_sr_dust_removal (unit names are model-proposed)
 * purpose:
 *   Updates nested counter fields in a state object based on a mode table and virtual query
 *   results.
 * summary:
 *   The function acts as a state machine step, gated by param_2 == 2. It reads indices from
 *   param_1 (offsets 0x11, 0x17, 0x18) and a mode value from a global table at 0x105b3988.
 *   It calls a series of helper functions (advance_state_on_virtual_ok through
 *   advance_state_on_virtual_call) and virtual methods on param_3 to determine the next
 *   state. Depending on the mode (2 or 4) and the results of these queries, it increments
 *   or decrements the counter fields in param_1, wrapping them to zero or specific limits
 *   (3, 0xf). Finally, it calls serialize_exposure_params_to_buffer to finalize the state
 *   change.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int advance_nested_state_counters(int *param_1,int param_2,int *param_3)

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
              iVar1 = backup_eep_opener();
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
              iVar1 = *(int *)(iVar3 * 4 + 0x105b3988/*ROM*/);
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
              iVar1 = *(int *)(iVar3 * 4 + 0x105b3988/*ROM*/);
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
            iVar1 = *(int *)(iVar3 * 4 + 0x105b3988/*ROM*/);
            if ((iVar1 != 6) && (iVar1 != 7)) {
              return (int)param_1;
            }
            set_flag_at_offset_0x58_1048a70c((int)param_1);
          }
        }
        else {
          iVar1 = *(int *)(iVar3 * 4 + 0x105b3988/*ROM*/);
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
              param_1[0x18] = 3;
            }
            else {
              param_1[0x18] = iVar4 + -1;
            }
          }
        }
      }
      else {
        iVar1 = *(int *)(iVar3 * 4 + 0x105b3988/*ROM*/);
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
          if (iVar4 < 3) {
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
  iVar1 = serialize_exposure_params_to_buffer(param_1);
  return iVar1;
}
