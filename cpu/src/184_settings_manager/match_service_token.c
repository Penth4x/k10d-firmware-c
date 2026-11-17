/* @k10d match_service_token @ 0x10487614
 * name: verified (structural evidence: decomp: FUN_105452da strcmp ladder)
 * unit: 184_settings_manager (unit names are model-proposed)
 * purpose:
 *   Matches one MODSET token against the service vocabulary (0x105b3084.. plaintext, plus
 *   SW_DEBUG_MENU EN/DIS XOR-0x29 at 0x105b3050/61) and sets flags[index] (index map: 0
 *   DEBUG_MODE .. 0xb CPU_ROM_STORE, 0xc DSP_ROM_STORE, 0xa EEPROM_STORE, 0x14
 *   SW_DEBUG_MENU).
 * summary:
 *   VERIFIED: decomp: compare_null_terminated_strings strcmp ladder
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t match_service_token(void *param_1,void *param_2,uint8_t *param_3)

{
  uint8_t uVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  uintptr_t sp;
  uint8_t auStack_4b [15];
  uint8_t auStack_3c [36];
  uint8_t uStack_18;
  uint8_t uStack_17;
  uint8_t uStack_16;
  uint8_t uStack_15;
  uint8_t uStack_14;
  uint8_t uStack_13;
  uint8_t uStack_12;
  uint8_t uStack_11;
  uint8_t uStack_10;
  uint8_t uStack_f;
  uint8_t uStack_e;
  uint8_t uStack_d;
  uint8_t uStack_c;
  uint8_t uStack_b;
  uint8_t uStack_a;
  uint8_t uStack_9;
  
  auStack_3c[0] = 0x29;
  iVar6 = 0x11;
  do {
    iVar7 = iVar6 + -1;
    auStack_3c[iVar6] = *(uint8_t *)(iVar6 + 0x105b304f/*ROM*/);
    iVar6 = iVar7;
  } while (iVar7 != 0);
  iVar6 = 0x12;
  do {
    iVar7 = iVar6 + -1;
    auStack_3c[iVar6 + 0x11] = *(uint8_t *)(iVar6 + 0x105b3060/*ROM*/);
    iVar6 = iVar7;
  } while (iVar7 != 0);
  uStack_18 = 0x65;
  uStack_15 = 0x7a;
  uStack_13 = 0x6a;
  uStack_f = 0x6f;
  uStack_e = 0x60;
  uStack_d = 0x7b;
  uStack_11 = 0x7c;
  uStack_c = 100;
  uStack_b = 0x7c;
  uStack_17 = 0x6c;
  uStack_16 = 0x67;
  uStack_14 = 0x76;
  uStack_12 = 0x79;
  uStack_10 = 0x76;
  uStack_a = 0x79;
  uStack_9 = 0x29;
  pvVar2 = (void *)heap_alloc_2(0x10);
  (*(code *)0x10486a2c/*ROM*/)(param_1,auStack_4b,pvVar2,0x10);
  pvVar3 = (void *)heap_alloc_2(0x11);
  (*(code *)0x10486a2c/*ROM*/)(param_1,auStack_3c + 1,pvVar3,0x11);
  pvVar4 = (void *)heap_alloc_2(0x12);
  (*(code *)0x10486a2c/*ROM*/)(param_1,auStack_3c + 0x12,pvVar4,0x12);
  pvVar5 = (void *)heap_alloc_2(0x10);
  (*(code *)0x10486a2c/*ROM*/)(param_1,&uStack_18,pvVar5,0x10);
  iVar6 = compare_null_terminated_strings(param_2,(void *)0x105b3084/*ROM*/);
  if (iVar6 == 0) {
    *param_3 = 1;
  }
  else {
    iVar6 = compare_null_terminated_strings(param_2,(void *)0x105b3094/*ROM*/);
    if (iVar6 == 0) {
      *param_3 = 2;
    }
    else {
      iVar6 = compare_null_terminated_strings(param_2,(void *)0x105b30a4/*ROM*/);
      if (iVar6 == 0) {
        uVar1 = 1;
        iVar6 = 1;
      }
      else {
        iVar6 = compare_null_terminated_strings(param_2,(void *)0x105b30b4/*ROM*/);
        if (iVar6 == 0) {
          uVar1 = 2;
          iVar6 = 1;
        }
        else {
          iVar6 = compare_null_terminated_strings(param_2,(void *)0x105b30c4/*ROM*/);
          if (iVar6 == 0) {
            uVar1 = 1;
            iVar6 = 2;
          }
          else {
            iVar6 = compare_null_terminated_strings(param_2,(void *)0x105b30d8/*ROM*/);
            if (iVar6 == 0) {
              uVar1 = 2;
              iVar6 = 2;
            }
            else {
              iVar6 = compare_null_terminated_strings(param_2,(void *)0x105b30ec/*ROM*/);
              if (iVar6 == 0) {
                uVar1 = 1;
                iVar6 = 3;
              }
              else {
                iVar6 = compare_null_terminated_strings(param_2,(void *)0x105b3100/*ROM*/);
                if (iVar6 == 0) {
                  uVar1 = 2;
                  iVar6 = 3;
                }
                else {
                  iVar6 = compare_null_terminated_strings(param_2,(void *)0x105b3114/*ROM*/);
                  if (iVar6 == 0) {
                    uVar1 = 1;
                    iVar6 = 4;
                  }
                  else {
                    iVar6 = compare_null_terminated_strings(param_2,(void *)0x105b3124/*ROM*/);
                    if (iVar6 == 0) {
                      uVar1 = 1;
                      iVar6 = 5;
                    }
                    else {
                      iVar6 = compare_null_terminated_strings(param_2,(void *)0x105b3130/*ROM*/);
                      if (iVar6 == 0) {
                        uVar1 = 1;
                        iVar6 = 6;
                      }
                      else {
                        iVar6 = compare_null_terminated_strings(param_2,(void *)0x105b3140/*ROM*/);
                        if (iVar6 == 0) {
                          uVar1 = 1;
                          iVar6 = 7;
                        }
                        else {
                          iVar6 = compare_null_terminated_strings(param_2,(void *)0x105b3158/*ROM*/);
                          if (iVar6 == 0) {
                            uVar1 = 1;
                            iVar6 = 8;
                          }
                          else {
                            iVar6 = compare_null_terminated_strings(param_2,(void *)0x105b316c/*ROM*/);
                            if (iVar6 == 0) {
                              uVar1 = 1;
                              iVar6 = 9;
                            }
                            else {
                              iVar6 = compare_null_terminated_strings(param_2,(void *)0x105b3178/*ROM*/);
                              if (iVar6 == 0) {
                                uVar1 = 1;
                                iVar6 = 10;
                              }
                              else {
                                iVar6 = compare_null_terminated_strings(param_2,(void *)0x105b3188/*ROM*/);
                                if (iVar6 == 0) {
                                  uVar1 = 1;
                                  iVar6 = 0xb;
                                }
                                else {
                                  iVar6 = compare_null_terminated_strings(param_2,(void *)0x105b3198/*ROM*/);
                                  if (iVar6 == 0) {
                                    uVar1 = 1;
                                    iVar6 = 0xc;
                                  }
                                  else {
                                    iVar6 = compare_null_terminated_strings(param_2,(void *)0x105b31a8/*ROM*/);
                                    if (iVar6 == 0) {
                                      uVar1 = 1;
                                      iVar6 = 0xd;
                                    }
                                    else {
                                      iVar6 = compare_null_terminated_strings(param_2,(void *)0x105b31b8/*ROM*/);
                                      if (iVar6 == 0) {
                                        uVar1 = 1;
                                        iVar6 = 0xe;
                                      }
                                      else {
                                        iVar6 = compare_null_terminated_strings(param_2,(void *)0x105b31cc/*ROM*/);
                                        if (iVar6 == 0) {
                                          uVar1 = 1;
                                          iVar6 = 0xf;
                                        }
                                        else {
                                          iVar6 = compare_null_terminated_strings(param_2,(void *)0x105b31d8/*ROM*/);
                                          if (iVar6 == 0) {
                                            uVar1 = 1;
                                            iVar6 = 0x10;
                                          }
                                          else {
                                            iVar6 = compare_null_terminated_strings(param_2,(void *)0x105b31ec/*ROM*/);
                                            if (iVar6 == 0) {
                                              uVar1 = 1;
                                              iVar6 = 0x11;
                                            }
                                            else {
                                              iVar6 = compare_null_terminated_strings(param_2,(void *)0x105b3200/*ROM*/);
                                              if (iVar6 == 0) {
                                                uVar1 = 1;
                                                iVar6 = 0x12;
                                              }
                                              else {
                                                iVar6 = compare_null_terminated_strings(param_2,(void *)0x105b3208/*ROM*/);
                                                if (iVar6 == 0) {
                                                  uVar1 = 1;
                                                  iVar6 = 0x13;
                                                }
                                                else {
                                                  iVar6 = compare_null_terminated_strings(param_2,pvVar5);
                                                  if (iVar6 == 0) {
                                                    uVar1 = 1;
                                                    iVar6 = 0x14;
                                                  }
                                                  else {
                                                    iVar6 = compare_null_terminated_strings(param_2,pvVar2);
                                                    if (iVar6 == 0) {
                                                      uVar1 = 1;
                                                      iVar6 = 0x15;
                                                    }
                                                    else {
                                                      iVar6 = compare_null_terminated_strings(param_2,pvVar3);
                                                      if (iVar6 == 0) {
                                                        uVar1 = 1;
                                                        iVar6 = 0x16;
                                                      }
                                                      else {
                                                        iVar6 = compare_null_terminated_strings(param_2,pvVar4);
                                                        if (iVar6 != 0) {
                                                          return 0;
                                                        }
                                                        uVar1 = 2;
                                                        iVar6 = 0x16;
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      param_3[iVar6] = uVar1;
    }
  }
  return 1;
}
