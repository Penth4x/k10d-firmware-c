/* @k10d dispatch_event_by_type_104bcec8 @ 0x104bcec8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104bcee2) overlaps instruction at (ram,0x104bcee0)
    */

uint32_t dispatch_event_by_type_104bcec8(int param_1,int param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  
  *(int **)(param_1 + 0x28) = param_3;
  if (param_2 == 0x10009) {
    cVar1 = *(char *)(param_1 + 0x1c);
    iVar3 = 0x1000;
joined_r0x104bcfde:
    bVar2 = false;
    if (cVar1 != '\0') {
LAB_104bd032:
      bVar2 = true;
    }
LAB_104bd046:
    bVar4 = iVar3 == 0;
code_r0x104bd048:
    if (bVar4) {
      return 0;
    }
    iVar3 = *param_3;
  }
  else {
    bVar2 = false;
    if (param_2 < 0x1000a) {
      if (param_2 == 0x10004) {
        iVar3 = 0x40;
      }
      else if (param_2 < 0x10005) {
        if (param_2 == 0x10000) {
          iVar3 = 1;
        }
        else if (param_2 == 0x10001) {
          iVar3 = 2;
        }
        else if (param_2 == 0x10002) {
          iVar3 = 4;
        }
        else {
          if (param_2 != 0x10003) {
            bVar4 = true;
            goto code_r0x104bd048;
          }
          iVar3 = 8;
        }
      }
      else {
        if (param_2 != 0x10005) {
          if (param_2 == 0x10006) {
            bVar4 = false;
          }
          else if (param_2 == 0x10007) {
            bVar4 = false;
          }
          else {
            if (param_2 == 0x10008) {
              cVar1 = *(char *)(param_1 + 0x1c);
              iVar3 = 0x800;
              goto joined_r0x104bcff4;
            }
            bVar4 = true;
          }
          goto code_r0x104bd048;
        }
        iVar3 = 0x80;
      }
      goto LAB_104bd046;
    }
    if (param_2 != 0x1000f) {
      if (param_2 < 0x10010) {
        if (param_2 == 0x1000a) {
          bVar4 = false;
        }
        else if (param_2 == 0x1000b) {
          bVar4 = false;
        }
        else if (param_2 == 0x1000c) {
          bVar4 = false;
        }
        else {
          if (param_2 == 0x1000d) {
            cVar1 = *(char *)(param_1 + 0x1c);
            iVar3 = 0x20000;
joined_r0x104bcff4:
            if (cVar1 == '\0') goto LAB_104bd046;
            goto LAB_104bd032;
          }
          bVar4 = true;
        }
      }
      else if (param_2 == 0x10036) {
        bVar4 = false;
      }
      else {
        if (param_2 < 0x10037) {
          if (param_2 == 0x10032) {
            iVar3 = 0x10;
          }
          else {
            if (param_2 != 0x10033) {
              bVar4 = true;
              goto code_r0x104bd048;
            }
            iVar3 = 0x20;
          }
          goto LAB_104bd046;
        }
        if (param_2 == 0x41000) {
          cVar1 = *(char *)(param_1 + 0x1c);
          iVar3 = 0x200;
          goto joined_r0x104bcfde;
        }
        if (param_2 == 0x43000) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
      }
      goto code_r0x104bd048;
    }
    iVar3 = *param_3;
  }
  if (iVar3 == 3) {
    if (!bVar2) {
      return 0;
    }
    if (*(char *)(param_1 + 0x1d) != '\0') {
      *(uint8_t *)(param_3 + 4) = 1;
    }
    iVar3 = **(int **)(param_1 + 4);
    (**(code **)(iVar3 + 0x14))((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar3 + 0x10),param_2)
    ;
    return 0;
  }
  if (iVar3 == 0) {
    *(uint32_t *)(param_1 + 0x2c) = 0;
    if (!bVar2) {
      *(uint32_t *)(param_1 + 0x28) = 1;
      goto LAB_104bd0e6;
    }
  }
  else if (iVar3 == 1) {
    *(int *)(param_1 + 0x2c) = param_3[1];
    if (!bVar2) {
      *(uint32_t *)(param_1 + 0x28) = 0;
      goto LAB_104bd0e6;
    }
  }
  else {
    if (iVar3 != 2) {
      return 0;
    }
    *(uint32_t *)(param_1 + 0x2c) = 0;
    if (!bVar2) {
      *(uint32_t *)(param_1 + 0x28) = 1;
LAB_104bd0e6:
      set_flg_obj((uint32_t *)(param_1 + 0x20));
      return 0;
    }
  }
  invoke_listener_slot_two((int *)(param_1 + 4));
  return 0;
}
