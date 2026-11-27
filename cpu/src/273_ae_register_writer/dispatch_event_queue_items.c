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
/* WARNING: Struct "cls_105d624c": ignoring overlapping field "field_0x14" */

void dispatch_event_queue_items(cls_105d624c *param_1)

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
  int iVar11;
  int *piVar12;
  uint32_t uVar13;
  int iVar14;
  uintptr_t sp;
  uint uStack_34;
  uint uStack_28;
  int iStack_18;
  uint uStack_c;
  
  uStack_c = 0;
  set_flg_obj(&param_1->field_0x34c, 0x8);
  eventflag_wai_flg(&param_1->field_0x34c,0x10,&uStack_c,_DAT_105a2af0/*ROM*/);
  invoke_dual_object_slot2((int)(param_1),(uint32_t)(0xf00001),(uint32_t)(0));
  do {
    while( true ) {
      puVar10 = &param_1->field_0x34c;
      eventflag_wai_flg(puVar10,3,&uStack_c,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(puVar10,uStack_c & 3);
      eventflag_wai_flg(puVar10,8,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
      call_kernel_with_short_id(&param_1->field_0x344);
      iVar4 = 7;
      iVar14 = 0;
      do {
        *(uint32_t *)((int)&param_1->field_0x1f8 + iVar14) = 0;
        *(uint32_t *)((int)&param_1->field_0x1fc + iVar14) = 0;
        *(uint32_t *)((int)&param_1->field_0x200 + iVar14) = 0;
        *(uint32_t *)((int)&param_1->field_0x204 + iVar14) = 0;
        *(uint32_t *)((int)&param_1->field_0x208 + iVar14) = 0;
        iVar4 = iVar4 + -1;
        iVar14 = iVar14 + 0x14;
      } while (-1 < iVar4);
      uStack_34 = collect_active_entries((int)(param_1->field_0x58),(int)(&param_1->field_0x1f8),(int)(0x28));
      uVar13 = *(uint32_t *)(param_1->field_0x58 + 0x161c8);
      iVar4 = find_entry_with_status_two_or_three((uint32_t)param_1);
      check_kernel_call_success_10459d88(&param_1->field_0x344);
      if ((uStack_34 != 0) && (param_1->field_0x29f != '\0')) {
        param_1->field_0x29f = '\0';
        pvVar5 = (void *)get_or_init_singleton_object_1051d40e();
        update_camera_state_flags(pvVar5,0x17,1);
        invoke_dual_object_slot2((int)(param_1),(uint32_t)(0xf00002),(uint32_t)(0));
        manage_kernel_object_handle(&param_1->field_0x28,0);
      }
      iVar14 = read_first_byte_10516be8(&param_1->field_0x2b8);
      if (iVar14 != 0) {
        update_object_link_and_flags((int)(param_1),(int)(uVar13));
      }
      if (param_1->field_0x355 == '\0') break;
      process_event_queue_and_check_status((int)(param_1),(int)(uStack_34));
    }
    if (0 < (int)uStack_34) {
      iVar14 = 0;
      do {
        iVar11 = *(int *)((int)&param_1->field_0x1f8 + iVar14);
        if (iVar11 == 0) break;
        sVar1 = *(short *)(*(int *)(iVar11 + 0x20) + *(int *)(iVar11 + 0x24) * 2);
        while (sVar1 == 1) {
          iVar6 = read_first_byte_10516be8(&param_1->field_0x2b8);
          if (((iVar6 == 0) || (iVar6 = get_field_at_offset_four_10516bec((int)&param_1->field_0x2b8), iVar6 != iVar11))
             || (iVar11 == 0)) {
            release_buffer_slot_by_index((int)param_1,iVar11,
                         (uint)*(ushort *)
                                (*(int *)(iVar11 + 0x20) + 0xa0 + *(int *)(iVar11 + 0x24) * 2));
          }
          else {
            iVar6 = *(int *)(iVar11 + 0x24) * 2;
            uVar2 = (uint)*(ushort *)(*(int *)(iVar11 + 0x20) + 0xa0 + iVar6);
            if (((uVar2 == 4) || (*(short *)(*(int *)(iVar11 + 0x20) + 0xa0 + iVar6) == 5)) ||
               (uVar2 == 9)) {
              release_buffer_slot_by_index((int)param_1,iVar11,uVar2);
            }
            else {
              call_subroutine_on_offset_field_1051654c((int)(param_1),(uint32_t)(uVar2));
            }
          }
          iVar6 = *(int *)(iVar11 + 0x24) + 1;
          *(int *)(iVar11 + 0x24) = iVar6;
          sVar1 = *(short *)(*(int *)(iVar11 + 0x20) + iVar6 * 2);
        }
        iVar14 = iVar14 + 4;
      } while (iVar14 < (int)(uStack_34 << 2));
    }
    if (*(short *)(*(int *)(iVar4 + 0x20) + 0x140) == 2) {
      if (0 < (int)uStack_34) {
        iVar14 = 0;
        uStack_28 = uStack_34;
        do {
          iVar11 = *(int *)((int)&param_1->field_0x1f8 + iVar14);
          if (iVar4 != iVar11) {
            link_object_into_list_1051332e(param_1->field_0x58,iVar11);
          }
          iVar14 = iVar14 + 4;
          uVar2 = uStack_28 - 1;
          bVar9 = 0 < (int)uStack_28;
          uStack_28 = uVar2;
        } while (bVar9 && uVar2 != 0);
      }
      uStack_34 = (uint)(iVar4 == param_1->field_0x1f8);
    }
    if (0 < (int)uStack_34) {
      iStack_18 = 0;
      do {
        piVar12 = *(int **)((int)&param_1->field_0x1f8 + iStack_18);
        if (piVar12 == (int *)0x0) break;
        iStack_18 = iStack_18 + 4;
        if (param_1->field_0x70 == '\0') {
LAB_105146f6:
          bVar9 = false;
          sVar1 = *(short *)(piVar12[8] + piVar12[9] * 2);
          while (sVar1 == 2) {
            bVar8 = dispatch_three_param_via_vtable((int)param_1,piVar12,
                                 (uint)*(ushort *)(piVar12[8] + 0xa0 + piVar12[9] * 2));
            if (!bVar8) {
              bVar9 = true;
              break;
            }
            iVar4 = piVar12[9];
            piVar12[9] = iVar4 + 1;
            sVar1 = *(short *)(piVar12[8] + (iVar4 + 1) * 2);
          }
          if (bVar9) goto LAB_1051474a;
          bVar9 = false;
          sVar1 = *(short *)(piVar12[8] + piVar12[9] * 2);
          if ((sVar1 != 0x13) && (sVar1 != 0x14)) {
            do {
              switch(*(uint16_t *)(piVar12[8] + piVar12[9] * 2)) {
              case 3:
                dispatch_event_via_vtable_10515690((int)param_1,piVar12);
                break;
              case 4:
                iVar14 = piVar12[0xf];
                iVar11 = piVar12[0xd];
                iVar4 = piVar12[0x18];
                if (iVar4 == 0) goto switchD_105147bc_caseD_13;
                do {
                  iVar4 = iVar4 + -1;
                  *(uint8_t *)(iVar4 + iVar14) = *(uint8_t *)(iVar4 + iVar11);
                } while (iVar4 != 0);
                goto LAB_10514ad0;
              case 5:
                update_object_state_and_notify_1051576a((int)param_1,piVar12);
                break;
              case 6:
                ae_reg_writer_a((int)param_1,piVar12);
                break;
              case 7:
                ae_reg_writer_b((int)param_1,piVar12);
                break;
              case 8:
                dispatch_event_with_flags((int)param_1,piVar12);
                break;
              case 9:
                init_object_with_virtual_call_10515968((int)param_1,piVar12);
                break;
              case 10:
                dispatch_event_via_vtable_105159bc((int)param_1,piVar12);
                break;
              case 0xb:
                init_object_with_vcall_and_state((int)param_1,piVar12);
                break;
              case 0xc:
                init_object_with_vtable_call((int)param_1,piVar12);
                break;
              case 0xd:
                queue_event_with_state((int)param_1,piVar12);
                break;
              case 0xe:
                bVar9 = check_flag_and_call_helper_10515bb2((int)param_1,piVar12);
                bVar9 = !bVar9;
                break;
              case 0xf:
                dispatch_state_to_virtual_slot((int)param_1,piVar12);
                break;
              case 0x10:
                initialize_event_node((int)param_1,piVar12);
                break;
              case 0x11:
                initialize_event_node_and_dispatch((int)param_1,piVar12);
                break;
              case 0x12:
                init_object_and_dispatch_virtual((int)param_1,piVar12);
                break;
              case 0x13:
              case 0x14:
              case 0x17:
                goto switchD_105147bc_caseD_13;
              case 0x15:
                *(short *)(piVar12 + 0x1a4) = *(short *)(piVar12 + 0x1a4) + 1;
                (((vtbl_entry*)(piVar12[0x235]))[43].fn)
                          ((int)((vtbl_entry*)(piVar12[0x235]))[43].adj + (int)piVar12);
                iVar4 = *(int *)*piVar12;
                (((vtbl_entry*)(iVar4))[2].fn)
                          (*piVar12 + (int)((vtbl_entry*)(iVar4))[2].adj,0xf00005,piVar12);
                break;
              case 0x16:
                dispatch_event_or_fallback((int)(param_1),(int *)(piVar12));
                break;
              case 0x18:
                check_and_dispatch_event_10515eac((int)param_1,piVar12);
                break;
              case 0x19:
                set_param2_offset_1c_to_four(param_1->field_0x58,piVar12);
                iVar4 = *(int *)*piVar12;
                (((vtbl_entry*)(iVar4))[2].fn)
                          (*piVar12 + (int)((vtbl_entry*)(iVar4))[2].adj,0xf0000a,piVar12);
                param_1->field_0x29f = '\x01';
                break;
              case 0x1a:
                iVar4 = read_first_byte_10516be8(&param_1->field_0x2b8);
                if (((iVar4 != 0) &&
                    (piVar3 = (int *)get_field_at_offset_four_10516bec((int)&param_1->field_0x2b8), piVar3 == piVar12))
                   && (piVar12 != (int *)0x0)) {
                  param_1->field_0x2c1 = 1;
                  iVar4 = *(int *)*piVar12;
                  (((vtbl_entry*)(iVar4))[2].fn)
                            (*piVar12 + (int)((vtbl_entry*)(iVar4))[2].adj,0xf00004,piVar12);
                  goto LAB_10514ad0;
                }
                goto switchD_105147bc_caseD_13;
              case 0x1b:
                initialize_event_object((int)param_1,piVar12);
                break;
              case 0x1c:
                init_object_with_virtual_call_10515eea((int)param_1,piVar12);
                break;
              case 0x1d:
                (((vtbl_entry*)(piVar12[0x235]))[42].fn)
                          ((int)((vtbl_entry*)(piVar12[0x235]))[42].adj + (int)piVar12);
                piVar12[4] = 0x600001;
                piVar12[2] = (int)&param_1->field_0x4;
                piVar12[3] = piVar12[0x1fe];
                piVar12[5] = (int)piVar12;
                reg_framework_send(param_1->field_0x38 + 8, (void *)(piVar12 + 2), 0x2);
                break;
              case 0x1e:
                init_object_and_call_virtual((int)param_1,piVar12);
                break;
              default:
switchD_105147bc_caseD_13:
LAB_10514ad0:
                call_two_helpers_on_object_10514cfa((int)param_1);
              }
              if (bVar9) break;
              iVar4 = piVar12[9];
              piVar12[9] = iVar4 + 1;
              sVar1 = *(short *)(piVar12[8] + (iVar4 + 1) * 2);
              if ((sVar1 == 0x13) || (sVar1 == 0x14)) break;
            } while( true );
          }
          sVar1 = *(short *)(piVar12[8] + piVar12[9] * 2);
          if (sVar1 == 0x13) {
            piVar12[9] = piVar12[9] + 1;
          }
          else if (sVar1 == 0x14) {
            (*(code *)0x10511b1e/*ROM*/)(piVar12);
            piVar3 = (int *)*piVar12;
            iVar4 = read_first_byte_10516be8(&param_1->field_0x2b8);
            if (((iVar4 == 0) ||
                (piVar7 = (int *)get_field_at_offset_four_10516bec((int)&param_1->field_0x2b8), piVar7 != piVar12)) ||
               (piVar12 == (int *)0x0)) {
              forward_param_to_callee_10515fbc((int)param_1,piVar12);
            }
            else {
              release_object_if_allocated_1051655c((int)(param_1));
            }
            param_1->field_0x74 = (uint32_t)((int *)0x0);
            iVar4 = count_active_entries_in_seven_slots_105136e0(param_1->field_0x58);
            iVar14 = count_seven_entries_with_value_two(param_1->field_0x58);
            count_entries_with_value_four(param_1->field_0x58);
            if (iVar14 != 0) {
              set_flag_at_offset_0x34c((int)(param_1));
            }
            if (piVar3 != (int *)0x0) {
              (((vtbl_entry*)(*piVar3))[2].fn)
                        ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,0xf00003,piVar12);
            }
            if ((iVar4 != 0) && (iVar14 == 0)) {
              iVar11 = count_active_entries_in_seven_slots_105136e0(param_1->field_0x58);
              iVar14 = heap_alloc_2((iVar11 + 1) * 4);
              collect_matching_entries_1051377c(param_1->field_0x58,iVar14,iVar11 + 1);
              if ((0 < iVar11) && (iVar11 = iVar11 + -3, 2 < iVar11)) {
                do {
                  iVar11 = iVar11 + -3;
                } while (-1 < iVar11);
              }
              heap_free_2(iVar14);
            }
            if (iVar4 == 0) {
              (*(code *)0x10515ee8/*ROM*/)(param_1);
              param_1->field_0x320 = 250000;
              param_1->field_0x29f = '\x01';
              invoke_dual_object_slot2((int)(param_1),(uint32_t)(0xf00001),(uint32_t)(0));
              pvVar5 = (void *)get_or_init_singleton_object_1051d40e();
              update_camera_state_flags(pvVar5,0x17,0);
              get_or_init_singleton_object_1051d40e();
              (*(code *)0x1051d6a8/*ROM*/)();
              (*(code *)0x10459608/*ROM*/)(&param_1->field_0x28);
            }
          }
        }
        else {
          if (param_1->field_0x74 == (uint32_t)((int *)0x0)) {
            param_1->field_0x74 = (uint32_t)(piVar12);
            goto LAB_105146f6;
          }
          if (param_1->field_0x74 == (uint32_t)(piVar12)) goto LAB_105146f6;
LAB_1051474a:
          link_object_into_list_1051332e(param_1->field_0x58,(int)piVar12);
        }
      } while (iStack_18 < (int)(uStack_34 << 2));
    }
    if (param_1->field_0x298 != 0) {
      check_kernel_call_success_10459fea(0x28);
    }
  } while( true );
}
