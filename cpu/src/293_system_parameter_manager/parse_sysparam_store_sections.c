/* @k10d parse_sysparam_store_sections @ 0x10535068
 * name: verified (structural evidence: decomp + d314 proof: debug fw reads+parses SYSPARAM.TXT at boot, sets flags, boots normally; stores fire at capture time)
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Reads SYSPARAM.TXT from the card root and parses its [SPn] sections + tokens into the
 *   sensor/store config struct. Factory engineering backdoor controlling raw-sensor/AFE/ADC
 *   behaviour and artifact stores.
 * summary:
 *   VERIFIED: decomp + d314 proof: debug fw reads+parses SYSPARAM.TXT at boot, sets flags,
 *   boots normally; stores fire at capture time
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1053513c) overlaps instruction at (ram,0x1053513a)
    */

void parse_sysparam_store_sections(int param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  ushort uVar9;
  uint32_t uVar8;
  uint16_t uVar10;
  int iVar11;
  uintptr_t sp;
  bool bVar12;
  char *pcStack_bd0;
  char *pcStack_bcc;
  char *pcStack_bc8;
  int iStack_bb8;
  uint32_t uStack_bb0;
  char acStack_bac [128];
  char acStack_b2c [128];
  uint8_t auStack_aac [128];
  uint8_t auStack_a2c [128];
  uint8_t auStack_9ac [2432];
  uint8_t auStack_2c [16];
  int iStack_1c;
  uint32_t uStack_c;
  
  iVar6 = get_or_create_camera_object();
  piVar4 = *(int **)(iVar6 + 0xc);
  uStack_c = 0;
  uStack_bb0 = (uint32_t)(uintptr_t)auStack_2c;
  cls_105ab468_new((void *)uStack_bb0);
  iVar6 = call_with_offset_lock_1048101c(piVar4,s_S_TC__SYSPARAM_TXT_10621139 + 3,(void *)uStack_bb0);
  if (iVar6 != 0) {
    iStack_bb8 = iStack_1c;
    if (0x400 < iStack_1c) {
      iStack_bb8 = 0x400;
    }
    iVar6 = (**(code **)(*piVar4 + 0x2c))
                      ((int)*(short *)(*piVar4 + 0x28) + (int)piVar4,s_C__SYSPARAM_TXT_1062114c,1,
                       &uStack_c);
    if (iVar6 != 0) {
      pcVar7 = (char *)heap_alloc_2(iStack_bb8);
      if (pcVar7 != (char *)0x0) {
        iVar6 = 0x80;
        do {
          iVar11 = iVar6 + -1;
          acStack_bac[iVar6 + -1] = s_C__SYSPARAM_TXT_1062114c[iVar6 + 0xf];
          iVar6 = iVar11;
        } while (iVar11 != 0);
        iVar6 = (**(code **)(*piVar4 + 0x3c))
                          ((int)*(short *)(*piVar4 + 0x38) + (int)piVar4,uStack_c,pcVar7,iStack_bb8)
        ;
        if (iVar6 != 0) {
          bVar2 = false;
          bVar3 = false;
          iVar6 = 0;
          pcStack_bcc = pcVar7;
          if (pcVar7 < pcVar7 + iStack_bb8) {
            do {
              cVar1 = *pcStack_bcc;
              if (cVar1 == '#') break;
              if (cVar1 == '[') {
                pcStack_bc8 = acStack_bac;
                bVar2 = true;
                pcVar5 = (char *)0x0;
                iVar11 = -0xbbc;
LAB_105359c6:
                *(char **)(&stack0xfffffff8 + iVar11) = pcVar5;
              }
              else {
                if (cVar1 == ']') {
                  *pcStack_bc8 = '\0';
                  bVar2 = false;
                  bVar3 = true;
                  iVar6 = 0;
                  pcVar5 = acStack_b2c;
                  iVar11 = -0xbc8;
                  goto LAB_105359c6;
                }
                if (bVar2) {
                  iVar11 = -0xbc0;
                  *pcStack_bc8 = cVar1;
                  pcVar5 = pcStack_bc8 + 1;
                  goto LAB_105359c6;
                }
                if (((cVar1 != '\r') && (cVar1 != '\n')) && (cVar1 != ' ')) {
                  if (bVar3) {
                    if (cVar1 == ',') {
                      iVar11 = -0xbc8;
                      *pcStack_bd0 = '\0';
                      iVar6 = iVar6 + 1;
                      pcVar5 = acStack_b2c + iVar6 * 0x80;
                    }
                    else {
                      if (cVar1 == '@') {
                        *pcStack_bd0 = '\0';
                        iVar6 = iVar6 + 1;
                        pcStack_bd0 = acStack_b2c + iVar6 * 0x80;
                        bVar3 = false;
                        iVar11 = compare_null_terminated_strings(acStack_bac,s_STOREPREBAYER_106211dc);
                        if (iVar11 == 0) {
                          iVar11 = parse_signed_decimal_token(acStack_b2c);
                          *(bool *)(param_1 + 0x12) = iVar11 != 0;
                          *(uint8_t *)(param_1 + 1) = 1;
                          iVar11 = 2;
LAB_1053534c:
                          bVar12 = true;
                          *(uint8_t *)(iVar11 + param_1) = 1;
                          iVar11 = 5;
                        }
                        else {
                          iVar11 = compare_null_terminated_strings(acStack_bac,s_STOREGEN_106211ec);
                          if (iVar11 == 0) goto LAB_10535490;
                          iVar11 = compare_null_terminated_strings(acStack_bac,s_STORECPU_106211f8);
                          if (iVar11 == 0) {
                            *(uint8_t *)(param_1 + 1) = 1;
                            iVar11 = parse_signed_decimal_token(acStack_b2c);
                            bVar12 = iVar11 != 0;
                            iVar11 = 2;
                            goto LAB_10535878;
                          }
                          iVar11 = compare_null_terminated_strings(acStack_bac,s_STOREAE_10621204);
                          if (iVar11 == 0) {
                            *(uint8_t *)(param_1 + 1) = 1;
                            iVar11 = parse_signed_decimal_token(acStack_b2c);
                            bVar12 = iVar11 != 0;
                            iVar11 = 3;
LAB_10535822:
                            *(bool *)(iVar11 + param_1) = bVar12;
                            goto LAB_105359d0;
                          }
                          iVar11 = compare_null_terminated_strings(acStack_bac,s_STOREAF_1062120c);
                          if (iVar11 != 0) {
                            iVar11 = compare_null_terminated_strings(acStack_bac,s_STOREWD_10621214);
                            if (iVar11 == 0) {
                              iVar11 = parse_signed_decimal_token(acStack_b2c);
                              *(bool *)(param_1 + 0x17) = iVar11 != 0;
                            }
                            else {
                              iVar11 = compare_null_terminated_strings(acStack_bac,s_STOREDP_1062121c);
                              if (iVar11 != 0) {
                                iVar11 = compare_null_terminated_strings(acStack_bac,s_STOREDEFECTPIXELDATA_10621224);
                                if (iVar11 == 0) {
                                  *(uint8_t *)(param_1 + 1) = 1;
                                  iVar11 = parse_signed_decimal_token(acStack_b2c);
                                  bVar12 = iVar11 != 0;
                                  iVar11 = 0x14;
LAB_10535878:
                                  *(bool *)(iVar11 + param_1) = bVar12;
                                }
                                else {
                                  iVar11 = compare_null_terminated_strings(acStack_bac,s_FORCENR_1062123c);
                                  if (iVar11 == 0) {
                                    iVar11 = parse_signed_decimal_token(acStack_b2c);
                                    bVar12 = iVar11 != 0;
                                    iVar11 = 0x1a;
                                    goto LAB_10535822;
                                  }
                                  iVar11 = compare_null_terminated_strings(acStack_bac,&DAT_10621244);
                                  if (iVar11 == 0) {
                                    iVar11 = parse_signed_decimal_token(acStack_b2c);
                                    *(bool *)(param_1 + 10) = iVar11 != 0;
                                    uVar9 = parse_signed_decimal_token(auStack_aac);
                                    uVar9 = (uVar9 & 0xf) << 4;
                                    iVar11 = 0x20;
                                  }
                                  else {
                                    iVar11 = compare_null_terminated_strings(acStack_bac,s_GRAYCODE_1062124c);
                                    if (iVar11 == 0) {
                                      iVar11 = parse_signed_decimal_token(acStack_b2c);
                                      bVar12 = iVar11 != 0;
                                      iVar11 = 0xc;
                                      goto LAB_10535878;
                                    }
                                    iVar11 = compare_null_terminated_strings(acStack_bac,s_AFECDS_10621258);
                                    if (iVar11 != 0) {
                                      iVar11 = compare_null_terminated_strings(acStack_bac,s_AFEVOFSOFFSET_10621260);
                                      if (iVar11 == 0) {
                                        *(uint8_t *)(param_1 + 0xe) = 1;
                                        uVar8 = parse_signed_decimal_token(acStack_b2c);
                                        *(uint32_t *)(param_1 + 0x24) = uVar8;
                                        uVar8 = parse_signed_decimal_token(auStack_aac);
                                        *(uint32_t *)(param_1 + 0x28) = uVar8;
                                      }
                                      else {
                                        iVar11 = compare_null_terminated_strings(acStack_bac,s_AFEDIFFMODE_10621270);
                                        if (iVar11 == 0) {
                                          iVar11 = parse_signed_decimal_token(acStack_b2c);
                                          bVar12 = iVar11 != 0;
                                          iVar11 = 0xf;
                                          goto LAB_105358b8;
                                        }
                                        iVar11 = compare_null_terminated_strings(acStack_bac,s_DISABLEBLC_1062127c);
                                        if (iVar11 != 0) {
                                          iVar11 = compare_null_terminated_strings(acStack_bac,s_OBCORRECT_10621288);
                                          if (iVar11 == 0) {
                                            iVar11 = parse_signed_decimal_token(acStack_b2c);
                                            bVar12 = iVar11 != 0;
                                            iVar11 = 0x1b;
                                            goto LAB_10535822;
                                          }
                                          iVar11 = compare_null_terminated_strings(acStack_bac,s_OBVALIDBIT_10621294);
                                          if (iVar11 == 0) {
                                            uVar9 = parse_signed_decimal_token(acStack_b2c);
                                            iVar11 = 0x32;
                                          }
                                          else {
                                            iVar11 = compare_null_terminated_strings(acStack_bac,s_LINEOB_106212a0);
                                            if (iVar11 != 0) {
                                              iVar11 = compare_null_terminated_strings(acStack_bac,
                                                                    s_ENABLEDPCFULL_106212a8);
                                              if (iVar11 == 0) {
                                                iVar11 = parse_signed_decimal_token(acStack_b2c);
                                                bVar12 = iVar11 != 0;
                                                iVar11 = 0x1d;
                                              }
                                              else {
                                                iVar11 = compare_null_terminated_strings(acStack_bac,
                                                                      s_DISABLEDPC_106212b8);
                                                if (iVar11 == 0) {
                                                  iVar11 = parse_signed_decimal_token(acStack_b2c);
                                                  bVar12 = iVar11 != 0;
                                                  iVar11 = 0x15;
                                                }
                                                else {
                                                  iVar11 = compare_null_terminated_strings(acStack_bac,
                                                                        s_DISABLEBAYFLT_106212c4);
                                                  if (iVar11 == 0) {
                                                    iVar11 = parse_signed_decimal_token(acStack_b2c);
                                                    bVar12 = iVar11 != 0;
                                                    iVar11 = 0x16;
                                                  }
                                                  else {
                                                    iVar11 = compare_null_terminated_strings(acStack_bac,
                                                                          s_ENABLEFLATIMAGE_106212d4
                                                                         );
                                                    if (iVar11 == 0) {
                                                      iVar11 = parse_signed_decimal_token(acStack_b2c);
                                                      bVar12 = iVar11 != 0;
                                                      iVar11 = 0x1e;
                                                      goto LAB_10535822;
                                                    }
                                                    iVar11 = compare_null_terminated_strings(acStack_bac,
                                                                          s_ADCCALIB_106212e4);
                                                    if (iVar11 != 0) {
                                                      iVar11 = compare_null_terminated_strings(acStack_bac,
                                                                            s_ADCCALTEST_106212f0);
                                                      if (iVar11 == 0) {
                                                        iVar11 = parse_signed_decimal_token(acStack_b2c);
                                                        *(bool *)(param_1 + 0x11) = iVar11 != 0;
                                                        bVar12 = true;
                                                        iVar11 = 1;
                                                        goto LAB_105358b8;
                                                      }
                                                      iVar11 = compare_null_terminated_strings(acStack_bac,
                                                                            s_AFEPOWERCTRL_106212fc)
                                                      ;
                                                      if (iVar11 == 0) {
                                                        uVar9 = parse_signed_decimal_token(acStack_b2c);
                                                        uVar9 = uVar9 & 0xf;
                                                        iVar11 = 0x34;
                                                      }
                                                      else {
                                                        iVar11 = compare_null_terminated_strings(acStack_bac,
                                                                              s_BFTOFFSET_1062130c);
                                                        if (iVar11 == 0) {
                                                          *(uint8_t *)(param_1 + 0x1f) = 1;
                                                          uVar10 = parse_signed_decimal_token(acStack_b2c);
                                                          *(uint16_t *)(param_1 + 0x3a) = uVar10;
                                                          uVar10 = parse_signed_decimal_token(auStack_aac);
                                                          *(uint16_t *)(param_1 + 0x3c) = uVar10;
                                                          uVar10 = parse_signed_decimal_token(auStack_a2c);
                                                          *(uint16_t *)(param_1 + 0x3e) = uVar10;
                                                          uVar9 = parse_signed_decimal_token(auStack_9ac);
                                                          iVar11 = 0x40;
                                                        }
                                                        else {
                                                          iVar11 = compare_null_terminated_strings(acStack_bac,
                                                                                                                                                                
                                                  s_TGMAININDEX_10621318);
                                                  if (iVar11 == 0) {
                                                    uVar9 = parse_signed_decimal_token(acStack_b2c);
                                                    iVar11 = 0x36;
                                                  }
                                                  else {
                                                    iVar11 = compare_null_terminated_strings(acStack_bac,
                                                                          s_TGSUBINDEX_10621324);
                                                    if (iVar11 != 0) goto LAB_105359d0;
                                                    uVar9 = parse_signed_decimal_token(acStack_b2c);
                                                    iVar11 = 0x38;
                                                  }
                                                  }
                                                  }
                                                  goto LAB_105359b0;
                                                  }
                                                  iVar11 = parse_signed_decimal_token(acStack_b2c);
                                                  *(bool *)(param_1 + 6) = iVar11 != 0;
                                                  iVar11 = parse_signed_decimal_token(auStack_aac);
                                                  bVar12 = iVar11 != 0;
                                                  iVar11 = 0x10;
                                                  }
                                                }
                                              }
                                              goto LAB_10535878;
                                            }
                                            iVar11 = parse_signed_decimal_token(acStack_b2c);
                                            *(bool *)(param_1 + 0x1c) = iVar11 != 0;
                                            uVar10 = parse_signed_decimal_token(auStack_aac);
                                            *(uint16_t *)(param_1 + 0x2c) = uVar10;
                                            uVar10 = parse_signed_decimal_token(auStack_a2c);
                                            *(uint16_t *)(param_1 + 0x2e) = uVar10;
                                            uVar9 = parse_signed_decimal_token(auStack_9ac);
                                            iVar11 = 0x30;
                                          }
                                          goto LAB_105359b0;
                                        }
                                        iVar11 = parse_signed_decimal_token(acStack_b2c);
                                        *(bool *)(param_1 + 7) = iVar11 != 0;
                                      }
                                      goto LAB_105359d0;
                                    }
                                    *(uint8_t *)(param_1 + 0xd) = 1;
                                    uVar9 = parse_signed_decimal_token(acStack_b2c);
                                    iVar11 = 0x22;
                                  }
LAB_105359b0:
                                  *(ushort *)(iVar11 + param_1) = uVar9;
                                }
                                goto LAB_105359d0;
                              }
                              iVar11 = parse_signed_decimal_token(acStack_b2c);
                              *(bool *)(param_1 + 0x13) = iVar11 != 0;
                            }
LAB_10535490:
                            iVar11 = 1;
                            goto LAB_1053534c;
                          }
                          *(uint8_t *)(param_1 + 1) = 1;
                          iVar11 = parse_signed_decimal_token(acStack_b2c);
                          bVar12 = iVar11 != 0;
                          iVar11 = 4;
                        }
LAB_105358b8:
                        *(bool *)(iVar11 + param_1) = bVar12;
                        goto LAB_105359d0;
                      }
                      iVar11 = -0xbc8;
                      *pcStack_bd0 = *pcStack_bcc;
                      pcVar5 = pcStack_bd0 + 1;
                    }
                    goto LAB_105359c6;
                  }
                  if (cVar1 == '\x1a') break;
                }
              }
LAB_105359d0:
              pcStack_bcc = pcStack_bcc + 1;
            } while (pcStack_bcc < pcVar7 + iStack_bb8);
          }
        }
      }
      heap_free_2((int)pcVar7);
    }
    (**(code **)(*piVar4 + 0x34))((int)*(short *)(*piVar4 + 0x30) + (int)piVar4,uStack_c);
  }
  cls_105ab468_delete((void *)uStack_bb0,2);
  return;
}
