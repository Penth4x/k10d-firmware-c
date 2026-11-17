/* @k10d dispatch_event_queue_items @ 0x105143f8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10514782) overlaps instruction at (ram,0x10514780)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_event_queue_items(int param_1)

{
  short sVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  bool bVar8;
  bool bVar9;
  int *piVar7;
  uint32_t *puVar10;
  int *piVar11;
  uint32_t uVar12;
  int iVar13;
  int iVar14;
  uintptr_t sp;
  uint uStack_34;
  uint uStack_28;
  int iStack_18;
  uint uStack_c;
  
  uStack_c = 0;
  set_flg_obj((uint32_t *)(param_1 + 0x34c));
  eventflag_wai_flg((uint32_t *)(param_1 + 0x34c),0x10,&uStack_c,_DAT_105a2af0/*ROM*/);
  invoke_dual_object_slot2(param_1,0xf00001,0);
  do {
    while( true ) {
      puVar10 = (uint32_t *)(param_1 + 0x34c);
      eventflag_wai_flg(puVar10,3,&uStack_c,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(puVar10,uStack_c & 3);
      eventflag_wai_flg(puVar10,8,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
      call_kernel_with_short_id((uint32_t *)(param_1 + 0x344));
      iVar4 = 7;
      iVar14 = 0;
      do {
        iVar13 = param_1 + 0x1f8;
        *(uint32_t *)(iVar14 + iVar13) = 0;
        *(uint32_t *)(iVar14 + 4 + iVar13) = 0;
        *(uint32_t *)(iVar14 + 8 + iVar13) = 0;
        *(uint32_t *)(iVar14 + 0xc + iVar13) = 0;
        *(uint32_t *)(iVar14 + 0x10 + iVar13) = 0;
        iVar4 = iVar4 + -1;
        iVar14 = iVar14 + 0x14;
      } while (-1 < iVar4);
      uStack_34 = collect_active_entries(*(uint32_t *)(param_1 + 0x58),param_1 + 0x1f8,0x28);
      uVar12 = *(uint32_t *)(*(int *)(param_1 + 0x58) + 0x161c8);
      iVar4 = find_entry_with_status_two_or_three(__frv_reg_unset(4));
      check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x344));
      if ((uStack_34 != 0) && (*(char *)(param_1 + 0x29f) != '\0')) {
        *(uint8_t *)(param_1 + 0x29f) = 0;
        pvVar5 = (void *)get_or_init_singleton_object_1051d40e();
        update_camera_state_flags(pvVar5,0x17,1);
        invoke_dual_object_slot2(param_1,0xf00002,0);
        manage_kernel_object_handle((int *)(param_1 + 0x28),0);
      }
      iVar14 = read_first_byte_10516be8(param_1 + 0x2b8);
      if (iVar14 != 0) {
        update_object_link_and_flags(param_1,uVar12);
      }
      if (*(char *)(param_1 + 0x355) == '\0') break;
      process_event_queue_and_check_status(param_1,uStack_34);
    }
    if (0 < (int)uStack_34) {
      iVar14 = 0;
      do {
        iVar13 = *(int *)(param_1 + 0x1f8 + iVar14);
        if (iVar13 == 0) break;
        sVar1 = *(short *)(*(int *)(iVar13 + 0x20) + *(int *)(iVar13 + 0x24) * 2);
        while (sVar1 == 1) {
          iVar6 = read_first_byte_10516be8(param_1 + 0x2b8);
          if (((iVar6 == 0) || (iVar6 = get_field_at_offset_four_10516bec(param_1 + 0x2b8), iVar6 != iVar13)) ||
             (iVar13 == 0)) {
            release_buffer_slot_by_index(param_1,iVar13,
                         (uint)*(ushort *)
                                (*(int *)(iVar13 + 0x20) + 0xa0 + *(int *)(iVar13 + 0x24) * 2));
          }
          else {
            iVar6 = *(int *)(iVar13 + 0x24) * 2;
            uVar2 = (uint)*(ushort *)(*(int *)(iVar13 + 0x20) + 0xa0 + iVar6);
            if (((uVar2 == 4) || (*(short *)(*(int *)(iVar13 + 0x20) + 0xa0 + iVar6) == 5)) ||
               (uVar2 == 9)) {
              release_buffer_slot_by_index(param_1,iVar13,uVar2);
            }
            else {
              call_subroutine_on_offset_field_1051654c(param_1,uVar2);
            }
          }
          iVar6 = *(int *)(iVar13 + 0x24) + 1;
          *(int *)(iVar13 + 0x24) = iVar6;
          sVar1 = *(short *)(*(int *)(iVar13 + 0x20) + iVar6 * 2);
        }
        iVar14 = iVar14 + 4;
      } while (iVar14 < (int)(uStack_34 << 2));
    }
    if (*(short *)(*(int *)(iVar4 + 0x20) + 0x140) == 2) {
      if (0 < (int)uStack_34) {
        iVar14 = 0;
        uStack_28 = uStack_34;
        do {
          iVar13 = *(int *)(param_1 + 0x1f8 + iVar14);
          if (iVar4 != iVar13) {
            link_object_into_list_1051332e(*(int *)(param_1 + 0x58),iVar13);
          }
          iVar14 = iVar14 + 4;
          uVar2 = uStack_28 - 1;
          bVar9 = 0 < (int)uStack_28;
          uStack_28 = uVar2;
        } while (bVar9 && uVar2 != 0);
      }
      uStack_34 = (uint)(iVar4 == *(int *)(param_1 + 0x1f8));
    }
    if (0 < (int)uStack_34) {
      iStack_18 = 0;
      do {
        piVar11 = *(int **)(param_1 + 0x1f8 + iStack_18);
        if (piVar11 == (int *)0x0) break;
        iStack_18 = iStack_18 + 4;
        if (*(char *)(param_1 + 0x70) == '\0') {
LAB_105146f6:
          bVar9 = false;
          sVar1 = *(short *)(piVar11[8] + piVar11[9] * 2);
          while (sVar1 == 2) {
            bVar8 = dispatch_three_param_via_vtable(param_1,piVar11,
                                 (uint)*(ushort *)(piVar11[8] + 0xa0 + piVar11[9] * 2));
            if (!bVar8) {
              bVar9 = true;
              break;
            }
            iVar4 = piVar11[9];
            piVar11[9] = iVar4 + 1;
            sVar1 = *(short *)(piVar11[8] + (iVar4 + 1) * 2);
          }
          if (bVar9) goto LAB_1051474a;
          bVar9 = false;
          sVar1 = *(short *)(piVar11[8] + piVar11[9] * 2);
          if ((sVar1 != 0x13) && (sVar1 != 0x14)) {
            do {
              switch(*(uint16_t *)(piVar11[8] + piVar11[9] * 2)) {
              case 3:
                dispatch_event_via_vtable_10515690(param_1,piVar11);
                break;
              case 4:
                iVar14 = piVar11[0xf];
                iVar13 = piVar11[0xd];
                iVar4 = piVar11[0x18];
                if (iVar4 == 0) goto switchD_105147bc_caseD_13;
                do {
                  iVar4 = iVar4 + -1;
                  *(uint8_t *)(iVar4 + iVar14) = *(uint8_t *)(iVar4 + iVar13);
                } while (iVar4 != 0);
                goto LAB_10514ad0;
              case 5:
                update_object_state_and_notify_1051576a(param_1,piVar11);
                break;
              case 6:
                ae_reg_writer_a(param_1,piVar11);
                break;
              case 7:
                ae_reg_writer_b(param_1,piVar11);
                break;
              case 8:
                dispatch_event_with_flags(param_1,piVar11);
                break;
              case 9:
                init_object_with_virtual_call_10515968(param_1,piVar11);
                break;
              case 10:
                dispatch_event_via_vtable_105159bc(param_1,piVar11);
                break;
              case 0xb:
                init_object_with_vcall_and_state(param_1,piVar11);
                break;
              case 0xc:
                init_object_with_vtable_call(param_1,piVar11);
                break;
              case 0xd:
                queue_event_with_state(param_1,piVar11);
                break;
              case 0xe:
                bVar9 = check_flag_and_call_helper_10515bb2(param_1,piVar11);
                bVar9 = !bVar9;
                break;
              case 0xf:
                dispatch_state_to_virtual_slot(param_1,piVar11);
                break;
              case 0x10:
                initialize_event_node(param_1,piVar11);
                break;
              case 0x11:
                initialize_event_node_and_dispatch(param_1,piVar11);
                break;
              case 0x12:
                init_object_and_dispatch_virtual(param_1,piVar11);
                break;
              case 0x13:
              case 0x14:
              case 0x17:
                goto switchD_105147bc_caseD_13;
              case 0x15:
                *(short *)(piVar11 + 0x1a4) = *(short *)(piVar11 + 0x1a4) + 1;
                (**(code **)(piVar11[0x235] + 0x15c))
                          ((int)*(short *)(piVar11[0x235] + 0x158) + (int)piVar11);
                iVar4 = *(int *)*piVar11;
                (**(code **)(iVar4 + 0x14))
                          (*piVar11 + (int)*(short *)(iVar4 + 0x10),0xf00005,piVar11);
                break;
              case 0x16:
                dispatch_event_or_fallback(param_1,piVar11);
                break;
              case 0x18:
                check_and_dispatch_event_10515eac(param_1,piVar11);
                break;
              case 0x19:
                set_param2_offset_1c_to_four(*(int *)(param_1 + 0x58),piVar11);
                iVar4 = *(int *)*piVar11;
                (**(code **)(iVar4 + 0x14))
                          (*piVar11 + (int)*(short *)(iVar4 + 0x10),0xf0000a,piVar11);
                *(uint8_t *)(param_1 + 0x29f) = 1;
                break;
              case 0x1a:
                iVar4 = read_first_byte_10516be8(param_1 + 0x2b8);
                if (((iVar4 != 0) &&
                    (piVar3 = (int *)get_field_at_offset_four_10516bec(param_1 + 0x2b8), piVar3 == piVar11)) &&
                   (piVar11 != (int *)0x0)) {
                  *(uint8_t *)(param_1 + 0x2c1) = 1;
                  iVar4 = *(int *)*piVar11;
                  (**(code **)(iVar4 + 0x14))
                            (*piVar11 + (int)*(short *)(iVar4 + 0x10),0xf00004,piVar11);
                  goto LAB_10514ad0;
                }
                goto switchD_105147bc_caseD_13;
              case 0x1b:
                initialize_event_object(param_1,piVar11);
                break;
              case 0x1c:
                init_object_with_virtual_call_10515eea(param_1,piVar11);
                break;
              case 0x1d:
                (**(code **)(piVar11[0x235] + 0x154))
                          ((int)*(short *)(piVar11[0x235] + 0x150) + (int)piVar11);
                piVar11[4] = 0x600001;
                piVar11[2] = param_1 + 4;
                piVar11[3] = piVar11[0x1fe];
                piVar11[5] = (int)piVar11;
                reg_framework_send(*(int *)(param_1 + 0x38) + 8);
                break;
              case 0x1e:
                init_object_and_call_virtual(param_1,piVar11);
                break;
              default:
switchD_105147bc_caseD_13:
LAB_10514ad0:
                call_two_helpers_on_object_10514cfa(param_1);
              }
              if (bVar9) break;
              iVar4 = piVar11[9];
              piVar11[9] = iVar4 + 1;
              sVar1 = *(short *)(piVar11[8] + (iVar4 + 1) * 2);
              if ((sVar1 == 0x13) || (sVar1 == 0x14)) break;
            } while( true );
          }
          sVar1 = *(short *)(piVar11[8] + piVar11[9] * 2);
          if (sVar1 == 0x13) {
            piVar11[9] = piVar11[9] + 1;
          }
          else if (sVar1 == 0x14) {
            (*(code *)0x10511b1e/*ROM*/)(piVar11);
            piVar3 = (int *)*piVar11;
            iVar4 = read_first_byte_10516be8(param_1 + 0x2b8);
            if (((iVar4 == 0) || (piVar7 = (int *)get_field_at_offset_four_10516bec(param_1 + 0x2b8), piVar7 != piVar11))
               || (piVar11 == (int *)0x0)) {
              forward_param_to_callee_10515fbc(param_1,piVar11);
            }
            else {
              release_object_if_allocated_1051655c(param_1);
            }
            *(uint32_t *)(param_1 + 0x74) = 0;
            iVar4 = count_active_entries_in_seven_slots_105136e0(*(uint32_t *)(param_1 + 0x58));
            iVar14 = count_seven_entries_with_value_two(*(uint32_t *)(param_1 + 0x58));
            count_entries_with_value_four(*(uint32_t *)(param_1 + 0x58));
            if (iVar14 != 0) {
              set_flag_at_offset_0x34c(param_1);
            }
            if (piVar3 != (int *)0x0) {
              (**(code **)(*piVar3 + 0x14))
                        ((int)*(short *)(*piVar3 + 0x10) + (int)piVar3,0xf00003,piVar11);
            }
            if ((iVar4 != 0) && (iVar14 == 0)) {
              iVar13 = count_active_entries_in_seven_slots_105136e0(*(uint32_t *)(param_1 + 0x58));
              iVar14 = heap_alloc_2((iVar13 + 1) * 4);
              collect_matching_entries_1051377c(*(uint32_t *)(param_1 + 0x58),iVar14,iVar13 + 1);
              if ((0 < iVar13) && (iVar13 = iVar13 + -3, 2 < iVar13)) {
                do {
                  iVar13 = iVar13 + -3;
                } while (-1 < iVar13);
              }
              heap_free_2(iVar14);
            }
            if (iVar4 == 0) {
              (*(code *)0x10515ee8/*ROM*/)(param_1);
              *(uint32_t *)(param_1 + 800) = 250000;
              *(uint8_t *)(param_1 + 0x29f) = 1;
              invoke_dual_object_slot2(param_1,0xf00001,0);
              pvVar5 = (void *)get_or_init_singleton_object_1051d40e();
              update_camera_state_flags(pvVar5,0x17,0);
              get_or_init_singleton_object_1051d40e();
              (*(code *)0x1051d6a8/*ROM*/)();
              (*(code *)0x10459608/*ROM*/)(param_1 + 0x28);
            }
          }
        }
        else {
          if (*(int **)(param_1 + 0x74) == (int *)0x0) {
            *(int **)(param_1 + 0x74) = piVar11;
            goto LAB_105146f6;
          }
          if (*(int **)(param_1 + 0x74) == piVar11) goto LAB_105146f6;
LAB_1051474a:
          link_object_into_list_1051332e(*(int *)(param_1 + 0x58),(int)piVar11);
        }
      } while (iStack_18 < (int)(uStack_34 << 2));
    }
    if (*(int *)(param_1 + 0x298) != 0) {
      check_kernel_call_success_10459fea();
    }
  } while( true );
}
