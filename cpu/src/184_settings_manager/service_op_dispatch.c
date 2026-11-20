/* @k10d service_op_dispatch @ 0x10487a9c
 * name: verified (structural evidence: decomp + reachability scan; the ROM/EEPROM dumper mechanism)
 * unit: 184_settings_manager (unit names are model-proposed)
 * purpose:
 *   Card-based service-operation executor driven by the MODSET flag array: per flag, builds
 *   a status label, runs the card read/write worker (read_eeprom_blocks_to_heap/10470158)
 *   and shows WAIT/COMPLETE/ERROR. Handles CPU_ROM_STORE / DSP_ROM_STORE / EEPROM_STORE /
 *   adjust-data dumps to C: files. ZERO callers on 1.31 (reachable only by reviving the
 *   MODSET task).
 * summary:
 *   VERIFIED: decomp + reachability scan; the ROM/EEPROM dumper mechanism
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1048803e) overlaps instruction at (ram,0x1048803c)
    */
/* DEAD CODE: zero callers. The else-if family dispatch V2/V3 patched. DO NOT PATCH */

uint32_t service_op_dispatch(int *param_1,char *param_2,void *param_3,void *param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  void *pvVar6;
  int iVar7;
  bool bVar8;
  char *pcVar9;
  uint8_t *puVar10;
  int *piVar11;
  uintptr_t sp;
  uint8_t *puVar12;
  uint8_t auStack_f4 [12];
  uint32_t uStack_d8;
  uint8_t auStack_ac [80];
  uint8_t auStack_5c [83];
  uint8_t uStack_9;
  
  puVar12 = auStack_f4;
  uStack_d8 = 0;
  heap_alloc_one_byte_1045926e((int)&uStack_9);
  trigger_sr_cal_transfer_104867c0((int)param_1);
  if (param_2[4] == '\0') {
    if (param_2[10] == '\0') {
      if (param_2[9] == '\0') {
        if (param_2[0xb] == '\0') {
          if (param_2[0xc] == '\0') {
            if (param_2[8] == '\0') {
              if (param_2[0x10] == '\0') {
                if (param_2[0x11] == '\0') {
                  if (param_2[0x14] == '\0') {
                    uStack_d8 = 0;
                    cVar1 = *param_2;
                    if (cVar1 != '\0') {
                      invoke_virtual_method_one_arg(*param_1,cVar1 == '\x01');
                    }
                    cVar2 = param_2[1];
                    if (cVar2 != '\0') {
                      invoke_virtual_method_one(*param_1,cVar2 == '\x01');
                    }
                    cVar3 = param_2[2];
                    if (cVar3 != '\0') {
                      invoke_virtual_method_with_arg(*param_1,cVar3 == '\x01');
                    }
                    cVar4 = param_2[3];
                    if (cVar4 != '\0') {
                      invoke_virtual_slot_one_1046d78e(*param_1,cVar4 == '\x01');
                    }
                    cVar5 = param_2[0x16];
                    if (cVar5 != '\0') {
                      call_virtual_slot_two_with_one_1046d7d0(*param_1,cVar5 == '\x01');
                    }
                    if (param_2[0xe] != '\0') {
                      init_card_service_params(*param_1);
                    }
                    if (cVar5 != '\0' ||
                        (cVar4 != '\0' || (cVar3 != '\0' || (cVar2 != '\0' || cVar1 != '\0')))) {
                      save_settings_with_lock(*param_1);
                    }
                    if (param_2[0x15] == '\0') {
                      if (param_2[5] == '\0') {
                        if (param_2[6] == '\0') {
                          if (param_2[7] == '\0') {
                            if (param_2[0xd] == '\0') {
                              if (param_2[0xf] == '\0') {
                                if (param_2[0x12] == '\0') {
                                  if (param_2[0x13] != '\0') {
                                    trigger_sr_cal_transfer_104867c0((int)param_1);
                                    uStack_d8 = get_lens_fw_update_singleton();
                                  }
                                }
                                else {
                                  iVar7 = initialize_singleton_object_1045d6a0();
                                  piVar11 = *(int **)(iVar7 + 0x14);
                                  write_byte_to_virtual_object(piVar11,0xe,1);
                                  send_data_via_cpucom(piVar11,param_1 + 0x18);
                                }
                              }
                              else {
                                trigger_sr_cal_transfer_104867c0((int)param_1);
                                uStack_d8 = get_or_create_singleton_object_1048a800();
                              }
                            }
                            else {
                              trigger_sr_cal_transfer_104867c0((int)param_1);
                              iVar7 = menu_ctor_classic_wrapper();
                              *(uint32_t *)(iVar7 + 0x6c) = 1;
                              uStack_d8 = menu_ctor_classic_wrapper();
                            }
                          }
                          else {
                            trigger_sr_cal_transfer_104867c0((int)param_1);
                            uStack_d8 = menu_ctor_TESTMODE();
                          }
                        }
                        else {
                          trigger_sr_cal_transfer_104867c0((int)param_1);
                          uStack_d8 = get_or_init_singleton_10489b4e();
                        }
                      }
                      else {
                        uStack_d8 = get_singleton_object_ptr();
                      }
                    }
                    else {
                      uStack_d8 = get_or_create_singleton_object_104882d0();
                    }
                  }
                  else {
                    uStack_d8 = get_lens_fw_update_object();
                  }
                }
                else {
                  pvVar6 = (void *)get_kernel_object_id((uint32_t)(&uStack_9));
                  format_string_to_buffer_10545140(auStack_5c,&DAT_105b3330/*ROM*/,pvVar6,param_4);
                  bVar8 = read_eeprom_blocks_to_heap(*param_1,auStack_5c);
                  if (bVar8) {
                    pcVar9 = &DAT_105b3340/*ROM*/;
                  }
                  else {
                    pcVar9 = &DAT_105b334c/*ROM*/;
                  }
                  format_string_to_buffer_10545140(auStack_ac,pcVar9,pvVar6,param_4);
                  *(uint16_t *)(puVar12 + 2) = 0xb;
                  *(uint16_t *)(puVar12 + 6) = 0xff;
                  puVar12[0xb] = 0;
                  build_and_dispatch_draw_params((int)param_1,4,8,auStack_ac,*(uint16_t *)(puVar12 + 2),
                               *(uint16_t *)(puVar12 + 6),puVar12[0xb]);
                  cVar1 = *(char *)((int)param_1 + 0x31);
                  while (cVar1 == '\0') {
                    cVar1 = *(char *)((int)param_1 + 0x31);
                  }
                }
              }
              else {
                pvVar6 = (void *)get_kernel_object_id((uint32_t)(&uStack_9));
                format_string_to_buffer_10545140(auStack_5c,&DAT_105b3308/*ROM*/,pvVar6,param_4);
                iVar7 = eeprom_adj_dump_0xa7(*param_1,auStack_5c);
                if (iVar7 == 0) {
                  pcVar9 = &DAT_105b3324/*ROM*/;
                }
                else {
                  pcVar9 = &DAT_105b3318/*ROM*/;
                }
                format_string_to_buffer_10545140(auStack_ac,pcVar9,pvVar6,param_4);
                *(uint16_t *)(puVar12 + 2) = 0xb;
                *(uint16_t *)(puVar12 + 6) = 0xff;
                puVar12[0xb] = 0;
                build_and_dispatch_draw_params((int)param_1,4,8,auStack_ac,*(uint16_t *)(puVar12 + 2),
                             *(uint16_t *)(puVar12 + 6),puVar12[0xb]);
                cVar1 = *(char *)((int)param_1 + 0x31);
                while (cVar1 == '\0') {
                  cVar1 = *(char *)((int)param_1 + 0x31);
                }
              }
            }
            else {
              format_string_to_buffer_10545140(auStack_ac,&DAT_105b32fc/*ROM*/,param_3,param_4);
              initialize_twai_flag_object(*param_1);
              *(uint16_t *)(puVar12 + 2) = 0xb;
              *(uint16_t *)(puVar12 + 6) = 0xff;
              puVar12[0xb] = 0;
              build_and_dispatch_draw_params((int)param_1,4,8,auStack_ac,*(uint16_t *)(puVar12 + 2),
                           *(uint16_t *)(puVar12 + 6),puVar12[0xb]);
              cVar1 = *(char *)((int)param_1 + 0x31);
              while (cVar1 == '\0') {
                cVar1 = *(char *)((int)param_1 + 0x31);
              }
            }
          }
          else {
            format_string_to_buffer_10545140(auStack_ac,&DAT_105b32bc/*ROM*/,param_3,param_4);
            *(uint16_t *)(puVar12 + 2) = 0xb;
            *(uint16_t *)(puVar12 + 6) = 0xff;
            puVar12[0xb] = 0;
            pvVar6 = (void *)0x8;
            puVar10 = auStack_ac;
            build_and_dispatch_draw_params((int)param_1,4,8,auStack_ac,*(uint16_t *)(puVar12 + 2),
                         *(uint16_t *)(puVar12 + 6),puVar12[0xb]);
            format_string_to_buffer_10545140(auStack_ac,&DAT_105b32c4/*ROM*/,pvVar6,puVar10);
            pvVar6 = (void *)get_kernel_object_id((uint32_t)(&uStack_9));
            format_string_to_buffer_10545140(auStack_5c,&DAT_105b32d0/*ROM*/,pvVar6,puVar10);
            iVar7 = write_data_to_cf_card(*param_1,auStack_5c);
            if (iVar7 == 0) {
              format_string_to_buffer_10545140(auStack_ac,&DAT_105b32e4/*ROM*/,pvVar6,puVar10);
            }
            format_string_to_buffer_10545140(auStack_ac,&DAT_105b32f0/*ROM*/,pvVar6,puVar10);
            *(uint16_t *)(puVar12 + 2) = 0xb;
            *(uint16_t *)(puVar12 + 6) = 0xff;
            puVar12[0xb] = 0;
            build_and_dispatch_draw_params((int)param_1,4,8,auStack_ac,*(uint16_t *)(puVar12 + 2),
                         *(uint16_t *)(puVar12 + 6),puVar12[0xb]);
            cVar1 = *(char *)((int)param_1 + 0x31);
            while (cVar1 == '\0') {
              cVar1 = *(char *)((int)param_1 + 0x31);
            }
          }
        }
        else {
          format_string_to_buffer_10545140(auStack_ac,&DAT_105b3288/*ROM*/,param_3,param_4);
          *(uint16_t *)(puVar12 + 2) = 0xb;
          *(uint16_t *)(puVar12 + 6) = 0xff;
          puVar12[0xb] = 0;
          pvVar6 = (void *)0x8;
          puVar10 = auStack_ac;
          build_and_dispatch_draw_params((int)param_1,4,8,auStack_ac,*(uint16_t *)(puVar12 + 2),
                       *(uint16_t *)(puVar12 + 6),puVar12[0xb]);
          format_string_to_buffer_10545140(auStack_ac,&DAT_105b3290/*ROM*/,pvVar6,puVar10);
          pvVar6 = (void *)get_kernel_object_id((uint32_t)(&uStack_9));
          format_string_to_buffer_10545140(auStack_5c,&DAT_105b329c/*ROM*/,pvVar6,puVar10);
          iVar7 = read_card_data_in_chunks(*param_1,auStack_5c);
          if (iVar7 == 0) {
            format_string_to_buffer_10545140(auStack_ac,&DAT_105b32b0/*ROM*/,pvVar6,puVar10);
          }
          *(uint16_t *)(puVar12 + 2) = 0xb;
          *(uint16_t *)(puVar12 + 6) = 0xff;
          puVar12[0xb] = 0;
          build_and_dispatch_draw_params((int)param_1,4,8,auStack_ac,*(uint16_t *)(puVar12 + 2),
                       *(uint16_t *)(puVar12 + 6),puVar12[0xb]);
          cVar1 = *(char *)((int)param_1 + 0x31);
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)param_1 + 0x31);
          }
        }
      }
      else {
        format_string_to_buffer_10545140(auStack_ac,&DAT_105b323c/*ROM*/,param_3,param_4);
        *(uint16_t *)(puVar12 + 2) = 0xb;
        *(uint16_t *)(puVar12 + 6) = 0xff;
        puVar12[0xb] = 0;
        pvVar6 = (void *)0x8;
        puVar10 = auStack_ac;
        build_and_dispatch_draw_params((int)param_1,3,8,auStack_ac,*(uint16_t *)(puVar12 + 2),
                     *(uint16_t *)(puVar12 + 6),puVar12[0xb]);
        format_string_to_buffer_10545140(auStack_ac,&DAT_105b3244/*ROM*/,pvVar6,puVar10);
        pvVar6 = (void *)get_kernel_object_id((uint32_t)(&uStack_9));
        format_string_to_buffer_10545140(auStack_5c,&DAT_105b3250/*ROM*/,pvVar6,puVar10);
        iVar7 = write_card_data_in_chunks(*param_1,&DAT_105b3260/*ROM*/);
        if (iVar7 == 0) {
          format_string_to_buffer_10545140(auStack_ac,&DAT_105b327c/*ROM*/,pvVar6,puVar10);
        }
        else {
          pvVar6 = (void *)0x0;
          iVar7 = verify_card_data_integrity(*param_1,(int)auStack_5c,0);
          if (iVar7 == 0) {
            format_string_to_buffer_10545140(auStack_ac,&DAT_105b3270/*ROM*/,pvVar6,puVar10);
          }
        }
        *(uint16_t *)(puVar12 + 2) = 0xb;
        *(uint16_t *)(puVar12 + 6) = 0xff;
        puVar12[0xb] = 0;
        build_and_dispatch_draw_params((int)param_1,3,8,auStack_ac,*(uint16_t *)(puVar12 + 2),
                     *(uint16_t *)(puVar12 + 6),puVar12[0xb]);
        cVar1 = *(char *)((int)param_1 + 0x31);
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)param_1 + 0x31);
        }
      }
    }
    else {
      format_string_to_buffer_10545140(auStack_ac,&DAT_105b3214/*ROM*/,param_3,param_4);
      pvVar6 = (void *)get_kernel_object_id((uint32_t)(&uStack_9));
      format_string_to_buffer_10545140(auStack_5c,&DAT_105b3220/*ROM*/,pvVar6,param_4);
      iVar7 = write_card_data_in_chunks(*param_1,auStack_5c);
      if (iVar7 == 0) {
        format_string_to_buffer_10545140(auStack_ac,&DAT_105b3230/*ROM*/,pvVar6,param_4);
      }
      *(uint16_t *)(puVar12 + 2) = 0xb;
      *(uint16_t *)(puVar12 + 6) = 0xff;
      puVar12[0xb] = 0;
      build_and_dispatch_draw_params((int)param_1,4,8,auStack_ac,*(uint16_t *)(puVar12 + 2),
                   *(uint16_t *)(puVar12 + 6),puVar12[0xb]);
      cVar1 = *(char *)((int)param_1 + 0x31);
      while (cVar1 == '\0') {
        cVar1 = *(char *)((int)param_1 + 0x31);
      }
    }
  }
  else {
    deactivate_app_mode_context(*param_1);
    dispatch_two_param_operation(*param_1,2,1);
    cVar1 = *(char *)((int)param_1 + 0x31);
    while (cVar1 == '\0') {
      cVar1 = *(char *)((int)param_1 + 0x31);
    }
  }
  heap_free_if_flagged(&uStack_9,2);
  return uStack_d8;
}
