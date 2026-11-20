/* @k10d poll_event_flags_and_dispatch_1041b086 @ 0x1041b086
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1041b212) overlaps instruction at (ram,0x1041b210)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void poll_event_flags_and_dispatch_1041b086(cls_1059d1d8 *param_1)

{
  uint32_t *puVar1;
  int iVar2;
  uintptr_t sp;
  uint uStack_c;
  
  uStack_c = 0;
  eventflag_wai_flg(&param_1->field_0x7c,0x40,&uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(&param_1->field_0x7c,0x40);
  (((vtbl_entry*)(param_1->field_0x0))[25].fn)
            ((int)&param_1->field_0x0 + (int)*(short *)(param_1->field_0x0 + 200));
  wait_cpucom_line_clear_10506bc0(param_1->field_0x3c);
  (((vtbl_entry*)(param_1->field_0x0))[27].fn)
            ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[27].adj);
  set_flag_at_offset_0x84_1041b75a(param_1);
  iVar2 = *(int *)param_1->field_0x50;
  (((vtbl_entry*)(iVar2))[2].fn)((int)param_1->field_0x50 + (int)((vtbl_entry*)(iVar2))[2].adj,0xd00001,0);
  do {
    do {
      puVar1 = &param_1->field_0x7c;
      eventflag_wai_flg(puVar1,0x1ba,&uStack_c,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(puVar1,uStack_c & 0x1ba);
      if ((uStack_c & 0x10) != 0) {
        eventflag_clr_flg(puVar1,0x20);
        release_object_at_offset_0x18_10506bda(param_1->field_0x3c);
        iVar2 = *(int *)param_1->field_0x50;
        (((vtbl_entry*)(iVar2))[2].fn)
                  ((int)param_1->field_0x50 + (int)((vtbl_entry*)(iVar2))[2].adj,0xd0000e,0);
        param_1->field_0x8c = 1;
      }
      if ((uStack_c & 2) != 0) {
        if (param_1->field_0x8c != '\0') {
          call_helper_with_zero_flag_1041b732(param_1);
          call_two_helpers_on_object_10506c36(param_1->field_0x3c);
          (((vtbl_entry*)(param_1->field_0x0))[17].fn)
                    ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[17].adj);
          call_helper_on_field_0x18_10506c50(param_1->field_0x3c);
        }
        iVar2 = *(int *)param_1->field_0x50;
        (((vtbl_entry*)(iVar2))[2].fn)
                  ((int)param_1->field_0x50 + (int)((vtbl_entry*)(iVar2))[2].adj,0xd0000d,0);
        param_1->field_0x8c = 0;
        param_1->field_0x8e = 0;
      }
      if ((uStack_c & 0x20) != 0) {
        iVar2 = call_with_second_field(param_1->field_0x38);
        if ((((iVar2 == 0) && (param_1->field_0x8c != '\0')) && (param_1->field_0x8d != '\0')) &&
           (param_1->field_0x8e == '\0')) {
          iVar2 = *(int *)param_1->field_0x50;
          iVar2 = (((vtbl_entry*)(iVar2))[2].fn)
                            ((int)param_1->field_0x50 + (int)((vtbl_entry*)(iVar2))[2].adj,0xd0000f,0);
          if (iVar2 == 0) {
            if (param_1->field_0x8c != '\0') {
              call_helper_with_zero_flag_1041b732(param_1);
              call_two_helpers_on_object_10506c36(param_1->field_0x3c);
              (((vtbl_entry*)(param_1->field_0x0))[17].fn)
                        ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[17].adj);
              call_helper_on_field_0x18_10506c50(param_1->field_0x3c);
            }
            iVar2 = *(int *)param_1->field_0x50;
            (((vtbl_entry*)(iVar2))[2].fn)
                      ((int)param_1->field_0x50 + (int)((vtbl_entry*)(iVar2))[2].adj,0xd0000d,0);
            param_1->field_0x8c = 0;
            param_1->field_0x8e = 0;
          }
          else {
            iVar2 = (((vtbl_entry*)(param_1->field_0x0))[18].fn)
                              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[18].adj
                              );
            eventflag_clr_flg(&param_1->field_0x7c,0x10);
            eventflag_clr_flg(&param_1->field_0x7c,0x20);
            if (((iVar2 != 0) && (param_1->field_0x58 != 0)) &&
               (*(char *)(param_1->field_0x58 + 0x5d) == '\0')) {
              iVar2 = *(int *)param_1->field_0x50;
              (((vtbl_entry*)(iVar2))[2].fn)
                        ((int)param_1->field_0x50 + (int)((vtbl_entry*)(iVar2))[2].adj,0xd00001,0);
            }
          }
        }
        else {
          if (param_1->field_0x8c != '\0') {
            call_helper_with_zero_flag_1041b732(param_1);
            call_two_helpers_on_object_10506c36(param_1->field_0x3c);
            (((vtbl_entry*)(param_1->field_0x0))[17].fn)
                      ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[17].adj);
            call_helper_on_field_0x18_10506c50(param_1->field_0x3c);
          }
          iVar2 = *(int *)param_1->field_0x50;
          (((vtbl_entry*)(iVar2))[2].fn)
                    ((int)param_1->field_0x50 + (int)((vtbl_entry*)(iVar2))[2].adj,0xd0000d,0);
          param_1->field_0x8c = 0;
          param_1->field_0x8e = 0;
        }
      }
      if ((uStack_c & 0x80) != 0) {
        (((vtbl_entry*)(param_1->field_0x0))[19].fn)
                  ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[19].adj);
        eventflag_clr_flg(puVar1,0x10);
        iVar2 = *(int *)param_1->field_0x50;
        (((vtbl_entry*)(iVar2))[2].fn)
                  ((int)param_1->field_0x50 + (int)((vtbl_entry*)(iVar2))[2].adj,0xd00001,0);
      }
      if ((uStack_c & 0x100) != 0) {
        (((vtbl_entry*)(param_1->field_0x0))[20].fn)
                  ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[20].adj);
      }
    } while ((uStack_c & 8) == 0);
    (((vtbl_entry*)(param_1->field_0x0))[29].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[29].adj);
  } while( true );
}
