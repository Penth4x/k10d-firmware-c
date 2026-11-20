/* @k10d poll_status_with_retry_000e4a6c @ 0x000e4a6c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Polls a status condition with a retry loop, updating control flags and calling helper
 *   functions until a timeout or success.
 * summary:
 *   The function checks several bit flags in DAT_0003c021, DAT_0003c07e, and DAT_0003c193
 *   to determine an execution path. It then enters a loop (up to 4 iterations) that calls
 *   dispatch_on_flag_bits_000e7846 and check_and_run_gated_sequence, while checking
 *   DAT_0003c022 and DAT_0003c330 bits and calling test_and_clear_bit to test for a
 *   condition. It updates various DAT_0000xxxx and DAT_0003c0xx flags during the process
 *   and returns 1 if the final status check indicates a specific state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t poll_status_with_retry_000e4a6c(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  short sVar4;
  uint32_t uVar5;
  
  sVar4 = 4;
  uVar5 = 0;
  if ((DAT_0003c193 & 0x80) == 0) {
    if ((((DAT_0003c021 & 0x10) == 0) && ((DAT_0003c07e & 0x20) != 0)) &&
       (dispatch_on_flag_bits_000e7846(), (DAT_0003c021 & 0x80) != 0)) {
      if ((DAT_0003f50e & 2) == 0) {
        DAT_0000000d = DAT_0000000d | 1;
      }
      else {
        DAT_0000000d = DAT_0000000d & 0xfe;
      }
    }
    bRam00000000 = bRam00000000 & 0xfe;
    DAT_0000048c = DAT_0000048c | 0x40;
    DAT_00000401 = (DAT_0003c034 | 0x70) ^ 0xff;
    DAT_00000501 = DAT_0003c034;
    call_d5678_with_0x14();
    if (((DAT_0003c021 & 0x10) == 0) && ((DAT_0003c07e & 0x20) != 0)) {
      if (((DAT_0003c393 & 1) == 0) || ((DAT_0003c067 & 0x10) == 0)) {
        DAT_00000040 = 0;
        DAT_00000041 = DAT_0003c034;
      }
      else {
        DAT_00000041 = 0;
      }
      do {
        sVar4 = sVar4 + -1;
        DAT_0000048c = DAT_0000048c | 0x40;
        DAT_0003c05d = DAT_0003c05d | 8;
        dispatch_on_flag_bits_000e7846();
        DAT_00000481 = 0x91;
        DAT_0003c05d = DAT_0003c05d & 0xf7;
        bVar2 = DAT_0000048c & 0xbf;
        bVar1 = DAT_0000048c;
        do {
          DAT_0000048c = bVar2;
          if ((bVar1 & 0x80) != 0) goto LAB_000e4b98;
          check_and_run_gated_sequence();
        } while (((((DAT_0003c022 & 0x40) == 0) && ((DAT_0003c330 & 1) == 0)) &&
                 ((DAT_0003c330 & 2) == 0)) &&
                (((DAT_0003c330 & 4) == 0 &&
                 (iVar3 = test_and_clear_bit(), bVar2 = DAT_0000048c, bVar1 = DAT_0000048c, iVar3 == 0))))
        ;
        uVar5 = 1;
        sVar4 = 0;
LAB_000e4b98:
        DAT_0000048c = DAT_0000048c & 0x7f;
      } while (sVar4 != 0);
    }
    else {
      DAT_00000040 = 0;
      DAT_00000041 = DAT_0003c034 | 0x10;
      do {
        sVar4 = sVar4 + -1;
        DAT_00000481 = 0x51;
        bVar2 = DAT_0000048c & 0xbf;
        bVar1 = DAT_0000048c;
        do {
          DAT_0000048c = bVar2;
          if ((bVar1 & 0x80) != 0) goto LAB_000e4c24;
          check_and_run_gated_sequence();
        } while ((((DAT_0003c022 & 0x40) == 0) && ((DAT_0003c330 & 1) == 0)) &&
                (((DAT_0003c330 & 2) == 0 &&
                 (((DAT_0003c330 & 4) == 0 &&
                  (iVar3 = test_and_clear_bit(), bVar2 = DAT_0000048c, bVar1 = DAT_0000048c, iVar3 == 0)))
                 )));
        uVar5 = 1;
        sVar4 = 0;
LAB_000e4c24:
        DAT_0000048c = DAT_0000048c & 0x7f;
      } while (sVar4 != 0);
    }
    DAT_00000041 = 0;
    check_and_run_gated_sequence();
    if ((((DAT_0003c022 & 0x40) != 0) || ((DAT_0003c330 & 1) != 0)) ||
       (((DAT_0003c330 & 2) != 0 ||
        (((DAT_0003c330 & 4) != 0 || (iVar3 = test_and_clear_bit(), iVar3 != 0)))))) {
      uVar5 = 1;
    }
    DAT_00000001 = 0;
    DAT_00000401 = 0x8f;
    DAT_00000501 = 0;
    if ((DAT_00000040 & 0x40) != 0) {
      DAT_00000040 = DAT_00000040 & 0xbf;
      DAT_0003c02b = DAT_0003c02b | 2;
    }
    if (((((DAT_00000003 & 4) != 0) && ((DAT_00000003 & 8) != 0)) && ((DAT_00000003 & 0x20) != 0))
       && ((DAT_00000003 & 0x40) != 0)) {
      DAT_0003c02b = DAT_0003c02b & 0xfd;
    }
  }
  return uVar5;
}
