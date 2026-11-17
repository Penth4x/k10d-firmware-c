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

void poll_event_flags_and_dispatch_1041b086(int *param_1)

{
  int *piVar1;
  int iVar2;
  uintptr_t sp;
  uint uStack_c;
  
  uStack_c = 0;
  eventflag_wai_flg(param_1 + 0x1f,0x40,&uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(param_1 + 0x1f,0x40);
  (**(code **)(*param_1 + 0xcc))((int)*(short *)(*param_1 + 200) + (int)param_1);
  wait_cpucom_line_clear_10506bc0(param_1[0xf]);
  (**(code **)(*param_1 + 0xdc))((int)*(short *)(*param_1 + 0xd8) + (int)param_1);
  set_flag_at_offset_0x84_1041b75a(param_1);
  iVar2 = *(int *)param_1[0x14];
  (**(code **)(iVar2 + 0x14))(param_1[0x14] + (int)*(short *)(iVar2 + 0x10),0xd00001,0);
  do {
    do {
      piVar1 = param_1 + 0x1f;
      eventflag_wai_flg(piVar1,0x1ba,&uStack_c,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(piVar1,uStack_c & 0x1ba);
      if ((uStack_c & 0x10) != 0) {
        eventflag_clr_flg(piVar1,0x20);
        release_object_at_offset_0x18_10506bda(param_1[0xf]);
        iVar2 = *(int *)param_1[0x14];
        (**(code **)(iVar2 + 0x14))(param_1[0x14] + (int)*(short *)(iVar2 + 0x10),0xd0000e,0);
        *(uint8_t *)(param_1 + 0x23) = 1;
      }
      if ((uStack_c & 2) != 0) {
        if (*(char *)(param_1 + 0x23) != '\0') {
          call_helper_with_zero_flag_1041b732(param_1);
          call_two_helpers_on_object_10506c36(param_1[0xf]);
          (**(code **)(*param_1 + 0x8c))((int)*(short *)(*param_1 + 0x88) + (int)param_1);
          call_helper_on_field_0x18_10506c50(param_1[0xf]);
        }
        iVar2 = *(int *)param_1[0x14];
        (**(code **)(iVar2 + 0x14))(param_1[0x14] + (int)*(short *)(iVar2 + 0x10),0xd0000d,0);
        *(uint8_t *)(param_1 + 0x23) = 0;
        *(uint8_t *)((int)param_1 + 0x8e) = 0;
      }
      if ((uStack_c & 0x20) != 0) {
        iVar2 = call_with_second_field(param_1[0xe]);
        if ((((iVar2 == 0) && (*(char *)(param_1 + 0x23) != '\0')) &&
            (*(char *)((int)param_1 + 0x8d) != '\0')) && (*(char *)((int)param_1 + 0x8e) == '\0')) {
          iVar2 = *(int *)param_1[0x14];
          iVar2 = (**(code **)(iVar2 + 0x14))
                            (param_1[0x14] + (int)*(short *)(iVar2 + 0x10),0xd0000f,0);
          if (iVar2 == 0) {
            if (*(char *)(param_1 + 0x23) != '\0') {
              call_helper_with_zero_flag_1041b732(param_1);
              call_two_helpers_on_object_10506c36(param_1[0xf]);
              (**(code **)(*param_1 + 0x8c))((int)*(short *)(*param_1 + 0x88) + (int)param_1);
              call_helper_on_field_0x18_10506c50(param_1[0xf]);
            }
            iVar2 = *(int *)param_1[0x14];
            (**(code **)(iVar2 + 0x14))(param_1[0x14] + (int)*(short *)(iVar2 + 0x10),0xd0000d,0);
            *(uint8_t *)(param_1 + 0x23) = 0;
            *(uint8_t *)((int)param_1 + 0x8e) = 0;
          }
          else {
            iVar2 = (**(code **)(*param_1 + 0x94))((int)*(short *)(*param_1 + 0x90) + (int)param_1);
            eventflag_clr_flg(param_1 + 0x1f,0x10);
            eventflag_clr_flg(param_1 + 0x1f,0x20);
            if (((iVar2 != 0) && (param_1[0x16] != 0)) && (*(char *)(param_1[0x16] + 0x5d) == '\0'))
            {
              iVar2 = *(int *)param_1[0x14];
              (**(code **)(iVar2 + 0x14))(param_1[0x14] + (int)*(short *)(iVar2 + 0x10),0xd00001,0);
            }
          }
        }
        else {
          if (*(char *)(param_1 + 0x23) != '\0') {
            call_helper_with_zero_flag_1041b732(param_1);
            call_two_helpers_on_object_10506c36(param_1[0xf]);
            (**(code **)(*param_1 + 0x8c))((int)*(short *)(*param_1 + 0x88) + (int)param_1);
            call_helper_on_field_0x18_10506c50(param_1[0xf]);
          }
          iVar2 = *(int *)param_1[0x14];
          (**(code **)(iVar2 + 0x14))(param_1[0x14] + (int)*(short *)(iVar2 + 0x10),0xd0000d,0);
          *(uint8_t *)(param_1 + 0x23) = 0;
          *(uint8_t *)((int)param_1 + 0x8e) = 0;
        }
      }
      if ((uStack_c & 0x80) != 0) {
        (**(code **)(*param_1 + 0x9c))((int)*(short *)(*param_1 + 0x98) + (int)param_1);
        eventflag_clr_flg(piVar1,0x10);
        iVar2 = *(int *)param_1[0x14];
        (**(code **)(iVar2 + 0x14))(param_1[0x14] + (int)*(short *)(iVar2 + 0x10),0xd00001,0);
      }
      if ((uStack_c & 0x100) != 0) {
        (**(code **)(*param_1 + 0xa4))((int)*(short *)(*param_1 + 0xa0) + (int)param_1);
      }
    } while ((uStack_c & 8) == 0);
    (**(code **)(*param_1 + 0xec))((int)*(short *)(*param_1 + 0xe8) + (int)param_1);
  } while( true );
}
