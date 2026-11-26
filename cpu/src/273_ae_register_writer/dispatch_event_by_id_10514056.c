/* @k10d dispatch_event_by_id_10514056 @ 0x10514056
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105d624c": ignoring overlapping field "field_0x14" */

uint32_t dispatch_event_by_id_10514056(cls_105d624c *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  call_kernel_with_short_id(&param_1->field_0x344);
  if (param_2 != 0xa00004) {
    if (param_2 < 0xa00005) {
      if (param_2 == 0x700004) goto code_r0x105143aa;
      if (param_2 < 0x700005) {
        if (param_2 == 0x600001) {
          (((vtbl_entry*)(param_3[0x235]))[26].fn)
                    ((int)((vtbl_entry*)(param_3[0x235]))[26].adj + (int)param_3);
        }
        else if (param_2 < 0x600002) {
          if (param_2 == 1) {
            (((vtbl_entry*)(param_3[0x235]))[39].fn)
                      ((int)((vtbl_entry*)(param_3[0x235]))[39].adj + (int)param_3);
          }
          else if ((param_2 != 2) && (param_2 != 3)) goto code_r0x105143aa;
        }
        else {
          if (((param_2 == 0x600002) || (param_2 == 0x600003)) || (param_2 != 0x700003))
          goto code_r0x105143aa;
          if (*(char *)(param_3[0x1ff] + 0x20) != '\0') {
            iVar1 = *(int *)*param_3;
            (((vtbl_entry*)(iVar1))[2].fn)(*param_3 + (int)((vtbl_entry*)(iVar1))[2].adj,0xf00004,param_3);
          }
        }
      }
      else {
        if (param_2 == 0x800003) {
          accumulate_lens_data_values((int)(param_1),(int)(0));
code_r0x10514390:
          set_flg_obj(&param_1->field_0x34c, 0x40);
          goto code_r0x105143aa;
        }
        if (param_2 < 0x800004) {
          if (param_2 == 0x700005) goto code_r0x105143aa;
          if (param_2 == 0x800001) {
            (((vtbl_entry*)(param_3[0x235]))[34].fn)
                      ((int)((vtbl_entry*)(param_3[0x235]))[34].adj + (int)param_3);
            (((vtbl_entry*)(param_3[0x235]))[36].fn)
                      ((int)((vtbl_entry*)(param_3[0x235]))[36].adj + (int)param_3);
            if (*(char *)(param_3 + 0x1a9) != '\0') {
              build_status_bitmask_and_notify((int)(param_1),(int *)(*param_3),(int)(0));
            }
            if (*(char *)((int)param_3 + 0x6a5) != '\0') {
              build_status_bitmask_and_notify((int)(param_1),(int *)(*param_3),(int)(1));
            }
          }
          else if (param_2 != 0x800002) goto code_r0x105143aa;
        }
        else {
          if (param_2 == 0x800004) goto code_r0x10514390;
          if (((param_2 != 0xa00001) && (param_2 != 0xa00002)) && (param_2 != 0xa00003))
          goto code_r0x105143aa;
        }
      }
    }
    else {
      if (param_2 == 0xc00005) goto code_r0x105143aa;
      if (param_2 < 0xc00006) {
        if (param_2 != 0xa00008) {
          if (param_2 < 0xa00009) {
            if (((param_2 != 0xa00005) && (param_2 != 0xa00006)) && (param_2 != 0xa00007))
            goto code_r0x105143aa;
          }
          else if ((param_2 != 0xa00009) && (param_2 != 0xa0000a)) {
            if (param_2 != 0xc00003) goto code_r0x105143aa;
            (((vtbl_entry*)(param_3[0x235]))[31].fn)
                      ((int)((vtbl_entry*)(param_3[0x235]))[31].adj + (int)param_3);
          }
        }
      }
      else if (param_2 != 0x10f0002) {
        if (param_2 < 0x10f0003) {
          if ((param_2 == 0xc00008) || ((param_2 != 0x10e0001 && (param_2 != 0x10f0001))))
          goto code_r0x105143aa;
        }
        else if ((((param_2 != 0x10f0003) && (param_2 != 0x1100001)) && (param_2 != 0x1130001)) &&
                (param_2 != 0x1180001)) goto code_r0x105143aa;
      }
    }
  }
  call_two_helpers_on_object_10514cfa((int)param_1);
code_r0x105143aa:
  check_kernel_call_success_10459d88(&param_1->field_0x344);
  return 0;
}
