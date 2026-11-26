/* @k10d dispatch_event_by_id_104130aa @ 0x104130aa
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Dispatches an event based on param_2, calling specific handlers or setting flags in the
 *   object at param_1.
 * summary:
 *   The function acts as a large switch statement on param_2. For many values, it calls
 *   specific helper functions (e.g., clear_linked_object_and_flags,
 *   configure_exposure_state) passing param_1. For other values, it modifies fields within
 *   the object pointed to by param_1 (e.g., at offsets 0x1508, 0x1518, 0x14fc) or sets a
 *   flag at a calculated offset (param_1 + iVar2) using set_flg_obj. The specific subsystem
 *   is not identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104130c2) overlaps instruction at (ram,0x104130c0)
    */

uint32_t dispatch_event_by_id_104130aa(cls_1059c10c *param_1,int param_2,uint param_3)

{
  uint32_t uVar1;
  int iVar2;
  
  if (param_2 == 0xd00010) {
    iVar2 = 0x1540;
  }
  else if (param_2 < 0xd00011) {
    if (param_2 == 0xd00008) {
      (*(code *)0x10416d0e/*ROM*/)(param_1);
      return 0;
    }
    if (param_2 < 0xd00009) {
      if (param_2 == 0xd00004) {
        (*(code *)0x10416bfa/*ROM*/)(param_1);
        return 0;
      }
      if (param_2 < 0xd00005) {
        if (param_2 == 0xd00001) {
          clear_linked_object_and_flags((int)(param_1));
          return 0;
        }
        if (param_2 == 0xd00002) {
          uVar1 = configure_exposure_state((int)(param_1));
          return uVar1;
        }
        if (param_2 == 0xd00003) {
          (*(code *)0x10416bf8/*ROM*/)(param_1);
          return 0;
        }
        return 0;
      }
      if (param_2 != 0xd00005) {
        if (param_2 == 0xd00006) {
          (*(code *)0x10416bfc/*ROM*/)(param_1);
          return 0;
        }
        if (param_2 == 0xd00007) {
          (*(code *)0x10416d0c/*ROM*/)(param_1);
          return 0;
        }
        return 0;
      }
      iVar2 = 0x1538;
    }
    else {
      if (param_2 == 0xd0000c) {
        invoke_virtual_and_check_flag((int)(param_1));
        return 0;
      }
      if (0xd0000c < param_2) {
        if (param_2 == 0xd0000d) {
          set_object_flag_and_notify((int)(param_1),(int)(0));
          return 0;
        }
        if (param_2 == 0xd0000e) {
          set_object_flag_and_notify((int)(param_1),(int)(1));
          return 0;
        }
        if (param_2 != 0xd0000f) {
          return 0;
        }
        iVar2 = check_and_dispatch_state_flags((int)(param_1));
        if (iVar2 != 0) {
          return 1;
        }
        return 0;
      }
      if (param_2 != 0xd00009) {
        if (param_2 == 0xd0000a) {
          uVar1 = poll_until_flag_clear_10416cbc((int)(param_1));
          return uVar1;
        }
        if (param_2 == 0xd0000b) {
          set_flag_and_call_helper_10416bd2((int)(param_1));
          return 0;
        }
        return 0;
      }
      set_flg_obj((uint32_t *)&param_1[1].field_0x580, 0x40);
      iVar2 = 0x1540;
    }
  }
  else {
    if (param_2 == 0xf00008) {
      return 0;
    }
    if (param_2 < 0xf00009) {
      if (param_2 == 0xf00004) {
        iVar2 = 0x1538;
        *(uint32_t *)&param_1[1].field_0x560 = *(uint32_t *)(param_3 + 0x8c8);
      }
      else if (param_2 < 0xf00005) {
        if (param_2 == 0xf00001) {
          iVar2 = 0x1538;
        }
        else {
          if (param_2 == 0xf00002) {
            return 0;
          }
          if (param_2 != 0xf00003) {
            return 0;
          }
          iVar2 = 0x1538;
        }
      }
      else if (param_2 == 0xf00005) {
        param_1[1].field_0x544 = 1;
        iVar2 = 0x1540;
      }
      else if (param_2 == 0xf00006) {
        if ((*(uint *)&param_1[1].field_0x550 == param_3) && (*(int *)&param_1[1].field_0x550 != 0))
        {
          return 0;
        }
        if ((param_3 & 0x2000000) == 0) {
          *(uint *)&param_1[1].field_0x550 = *(uint *)&param_1[1].field_0x550 | param_3;
        }
        else {
          *(uint32_t *)&param_1[1].field_0x550 = 0x2000000;
        }
        iVar2 = 0x1538;
      }
      else {
        if (param_2 != 0xf00007) {
          return 0;
        }
        iVar2 = 0x1538;
        *(uint *)&param_1[1].field_0x550 = *(uint *)&param_1[1].field_0x550 | param_3;
      }
    }
    else if (param_2 == 0x1140002) {
      iVar2 = 0x1548;
    }
    else if (param_2 < 0x1140003) {
      if (param_2 == 0xf00009) {
        return 0;
      }
      if (param_2 == 0xf0000b) {
        iVar2 = 0x1538;
      }
      else {
        if (param_2 != 0x1140001) {
          return 0;
        }
        iVar2 = 0x1548;
      }
    }
    else if (param_2 == 0x1170001) {
      iVar2 = 0x1540;
    }
    else if (param_2 == 0x1170002) {
      iVar2 = 0x1540;
    }
    else if (param_2 == 0x1170003) {
      iVar2 = 0x1540;
    }
    else {
      if (param_2 != 0x1170004) {
        return 0;
      }
      iVar2 = 0x1540;
    }
  }
  set_flg_obj((uint32_t *)((int)&param_1->field_0x0 + iVar2), 0x2);
  return 0;
}
