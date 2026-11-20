/* @k10d dispatch_mode_event_by_state @ 0x103b7f10
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103b7f56) overlaps instruction at (ram,0x103b7f54)
    */

void dispatch_mode_event_by_state(cls_1056ac8c *param_1,uint param_2,uint32_t param_3)

{
  bool bVar1;
  uint32_t uVar2;
  int iVar3;
  void *puVar4;
  
  dispatch_event_0x29_via_vtable((cls_105643d0 *)param_1,param_2,param_3);
  uVar2 = 0;
  if (param_2 == 0xc) {
    iVar3 = *(int *)(param_1->field_0x2c);
    (((vtbl_entry*)(iVar3))[2].fn)
              ((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar3))[2].adj,0x1120066,0);
  }
  iVar3 = *(int *)&param_1->field_0x40;
  if (((iVar3 != 3) && (iVar3 != 9)) && (iVar3 != 0x65)) {
    if ((iVar3 == 8 || iVar3 == 7) || iVar3 == 6) {
      iVar3 = call_two_helpers_in_sequence_10491ff0();
      if (iVar3 != 0) {
        if (param_2 != 0x18) {
          if (param_2 < 0x19) {
            if (param_2 != 5) {
              if (param_2 < 6) {
                if ((param_2 != 0) && (param_2 != 1)) {
                  return;
                }
              }
              else if (((param_2 != 7) && (param_2 != 9)) && (param_2 != 0x12)) {
                return;
              }
            }
          }
          else if (param_2 != 0x26) {
            if (param_2 < 0x27) {
              if (((param_2 != 0x1b) && (param_2 != 0x1c)) && (param_2 != 0x25)) {
                return;
              }
            }
            else if ((param_2 != 0x27) && (param_2 != 0x28)) {
              if (param_2 != 0x2c) {
                return;
              }
              iVar3 = 0;
              goto code_r0x103b83b0;
            }
          }
        }
        iVar3 = *(int *)(param_1->field_0x2c);
        (((vtbl_entry*)(iVar3))[2].fn)
                  ((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar3))[2].adj,0x1120065,0);
        return;
      }
      if (param_2 != 0x18) {
        if (param_2 < 0x19) {
          if (param_2 != 5) {
            if (param_2 < 6) {
              if ((param_2 != 0) && (param_2 != 1)) {
                return;
              }
            }
            else if (((param_2 != 7) && (param_2 != 9)) && (param_2 != 0x12)) {
              return;
            }
          }
        }
        else if (param_2 != 0x25) {
          if (param_2 < 0x26) {
            if ((param_2 != 0x1b) && (param_2 != 0x1c)) {
              return;
            }
          }
          else if (((param_2 != 0x26) && (param_2 != 0x27)) && (param_2 != 0x28)) {
            return;
          }
        }
      }
      iVar3 = 1;
code_r0x103b83b0:
      toggle_object_state_flags(param_1,iVar3);
      return;
    }
    if (iVar3 != 1) {
      if ((iVar3 != 2 && iVar3 != 4) && iVar3 != 5) {
        if (iVar3 != 100) {
          return;
        }
        if (param_2 != 0x13) {
          if (param_2 < 0x14) {
            if (param_2 != 3) {
              if (param_2 < 4) {
                if ((param_2 != 0) && (param_2 != 1)) {
                  return;
                }
              }
              else if (((param_2 != 7) && (param_2 != 9)) && (param_2 != 0x11)) {
                return;
              }
            }
          }
          else if (param_2 != 0x1a) {
            if (param_2 < 0x1b) {
              if ((param_2 != 0x18) && (param_2 != 0x19)) {
                return;
              }
            }
            else if (((param_2 != 0x1b) && (param_2 != 0x1c)) && (param_2 != 0x2c)) {
              return;
            }
          }
        }
        (((vtbl_entry*)(param_1->field_0x0))[14].fn)
                  ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[14].adj,0x1120009,0 );
        return;
      }
      iVar3 = call_two_helpers_in_sequence_10491ff0();
      if (iVar3 != 0) {
        if (param_2 != 0x18) {
          if (param_2 < 0x19) {
            if (param_2 != 5) {
              if (param_2 < 6) {
                if ((param_2 != 0) && (param_2 != 1)) {
                  return;
                }
              }
              else if (((param_2 != 7) && (param_2 != 9)) && (param_2 != 0x12)) {
                return;
              }
            }
          }
          else if (param_2 != 0x26) {
            if (param_2 < 0x27) {
              if (((param_2 != 0x1b) && (param_2 != 0x1c)) && (param_2 != 0x25)) {
                return;
              }
            }
            else if ((param_2 != 0x27) && (param_2 != 0x28)) {
              if (param_2 != 0x2c) {
                return;
              }
              iVar3 = 0;
              goto code_r0x103b83b0;
            }
          }
        }
        iVar3 = *(int *)(param_1->field_0x2c);
        (((vtbl_entry*)(iVar3))[2].fn)
                  ((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar3))[2].adj,0x1120065,0);
        return;
      }
      if (param_2 != 0x18) {
        if (param_2 < 0x19) {
          if (param_2 != 5) {
            if (param_2 < 6) {
              if ((param_2 != 0) && (param_2 != 1)) {
                return;
              }
            }
            else if (((param_2 != 7) && (param_2 != 9)) && (param_2 != 0x12)) {
              return;
            }
          }
        }
        else if (param_2 != 0x25) {
          if (param_2 < 0x26) {
            if ((param_2 != 0x1b) && (param_2 != 0x1c)) {
              return;
            }
          }
          else if (((param_2 != 0x26) && (param_2 != 0x27)) && (param_2 != 0x28)) {
            return;
          }
        }
      }
      iVar3 = 1;
      goto code_r0x103b83b0;
    }
    iVar3 = call_two_helpers_in_sequence_10491ff0();
    if (iVar3 == 0) {
      if (param_2 == 0x18) {
        uVar2 = 0x1120001;
        bVar1 = false;
        goto code_r0x103b8268;
      }
      if (param_2 < 0x19) {
        if (param_2 != 5) {
          if (param_2 < 6) {
            if ((param_2 != 0) && (param_2 != 1)) {
              bVar1 = true;
              goto code_r0x103b8268;
            }
          }
          else if (param_2 != 7) {
            if (param_2 == 9) {
              uVar2 = 0x112000c;
              bVar1 = false;
              goto code_r0x103b8268;
            }
            if (param_2 != 0x12) {
              bVar1 = true;
              goto code_r0x103b8268;
            }
          }
        }
      }
      else if (param_2 != 0x25) {
        if (param_2 < 0x26) {
          if ((param_2 != 0x1b) && (param_2 != 0x1c)) {
            bVar1 = true;
            goto code_r0x103b8268;
          }
        }
        else if (((param_2 != 0x26) && (param_2 != 0x27)) && (param_2 != 0x28)) {
          bVar1 = true;
          goto code_r0x103b8268;
        }
      }
      toggle_object_state_flags(param_1,1);
      bVar1 = true;
      goto code_r0x103b8268;
    }
    if (param_2 == 0x18) {
      uVar2 = 0x1120001;
      bVar1 = false;
      goto code_r0x103b8268;
    }
    if (param_2 < 0x19) {
      if (param_2 != 5) {
        if (param_2 < 6) {
          if ((param_2 != 0) && (param_2 != 1)) {
            bVar1 = true;
            goto code_r0x103b8268;
          }
        }
        else if (param_2 != 7) {
          if (param_2 == 9) {
            uVar2 = 0x112000c;
            bVar1 = false;
            goto code_r0x103b8268;
          }
          if (param_2 != 0x12) {
            bVar1 = true;
            goto code_r0x103b8268;
          }
        }
      }
    }
    else if (param_2 != 0x26) {
      if (param_2 < 0x27) {
        if (((param_2 != 0x1b) && (param_2 != 0x1c)) && (param_2 != 0x25)) {
          bVar1 = true;
          goto code_r0x103b8268;
        }
      }
      else if ((param_2 != 0x27) && (param_2 != 0x28)) {
        if (param_2 == 0x2c) {
          toggle_object_state_flags(param_1,0);
          bVar1 = true;
        }
        else {
          bVar1 = true;
        }
        goto code_r0x103b8268;
      }
    }
    iVar3 = *(int *)(param_1->field_0x2c);
    (((vtbl_entry*)(iVar3))[2].fn)
              ((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar3))[2].adj,0x1120065,0);
    bVar1 = true;
code_r0x103b8268:
    if (bVar1) {
      return;
    }
    (((vtbl_entry*)(param_1->field_0x0))[14].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[14].adj,uVar2,0);
    return;
  }
  if (param_2 == 9) {
    uVar2 = 0x112000c;
    bVar1 = false;
  }
  else if (param_2 < 10) {
    if (((param_2 == 0) || (param_2 == 1)) || (param_2 == 7)) {
LAB_103b7f9e:
      uVar2 = 0x1120004;
      puVar4 = (void *)(param_1->field_0x0);
      goto LAB_103b7fb6;
    }
    bVar1 = true;
  }
  else if (param_2 == 0x18) {
    uVar2 = 0x1120001;
    bVar1 = false;
  }
  else {
    if (((param_2 == 0x1b) || (param_2 == 0x1c)) || (param_2 == 0x2c)) goto LAB_103b7f9e;
    bVar1 = true;
  }
  if (bVar1) {
    return;
  }
  puVar4 = (void *)(param_1->field_0x0);
LAB_103b7fb6:
  (((vtbl_entry*)(puVar4))[14].fn)((int)&param_1->field_0x0 + (int)((vtbl_entry*)(puVar4))[14].adj,uVar2,0);
  return;
}
