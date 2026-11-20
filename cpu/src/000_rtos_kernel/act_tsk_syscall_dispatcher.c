/* @k10d act_tsk_syscall_dispatcher @ 0x1000fa2c
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed process_delayed_task_events)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Iterates a linked list of timed task events, decrementing counters and activating tasks
 *   when their delay expires.
 * summary:
 *   The function reads a head pointer from 0x6a0036c4 and traverses a linked list of event
 *   structures (stride 0x44). For each entry, it decrements a counter at offset 0x1c; if
 *   the counter is non-zero, it proceeds to process a secondary list at 0x6a0036bc. If the
 *   counter is zero, it calls remove_task_from_timeout_queue_1001166c and act_tsk, likely
 *   to activate the associated task or signal an event. It also manipulates flags at offset
 *   0x06 and calls virtual-like functions via pointers in the event structure. The behavior
 *   is consistent with a kernel timeout or delay queue processor in a ÂµITRON-like RTOS.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t act_tsk_syscall_dispatcher(void)

{
  short sVar1;
  int iVar2;
  uint32_t uVar3;
  code *pcVar4;
  int iVar5;
  
  increment_timeout_counter((int *)0x6a0036c8);
  sVar1 = _DAT_6a0036c4;
  do {
    iVar5 = (int)sVar1;
    _DAT_6a0036c4 = sVar1;
    if (iVar5 == -1) {
LAB_1000fb04:
      if (_DAT_6a0036bc != (uint32_t)(&DAT_6a0036bc)) {
        do {
          iVar5 = (int)*(short *)(_DAT_6a0036bc + 0xc);
          if (*(int *)(_DAT_6a0036bc + 8) != 0) {
            *(int *)(_DAT_6a0036bc + 8) = *(int *)(_DAT_6a0036bc + 8) + -1;
            return 0;
          }
          if ((*(ushort *)(_DAT_6a0036bc + 0xe) & 8) == 0) {
            iVar2 = iVar5 * 0x1c;
            insert_into_timeout_queue_10011644((int *)(DAT_10011cf4/*ROM*/ + iVar2 + -0x1c));
            *(uint32_t *)(DAT_10011cf4/*ROM*/ + iVar2 + -0x14) =
                 *(uint32_t *)(DAT_10011cf4/*ROM*/ + iVar2 + -0xc);
            insert_into_timeout_queue_1000fcd4((uint32_t *)(DAT_10011cf4/*ROM*/ + iVar2 + -0x1c));
            iVar2 = DAT_10011cf4/*ROM*/ + iVar2;
            if ((*(ushort *)(iVar2 + -0xe) & 2) != 0) {
              pcVar4 = *(code **)(iVar2 + -8);
              uVar3 = *(uint32_t *)(iVar2 + -4);
              (*(code *)0x105370b0/*ROM*/)(iVar5);
              (*pcVar4)(uVar3);
              (*(code *)0x105370be/*ROM*/)(iVar5);
            }
          }
          else {
            iVar2 = iVar5 * 0x18;
            insert_into_timeout_queue_10011644((int *)(DAT_10011cf0/*ROM*/ + iVar2 + -0x18));
            *(int *)(DAT_10011cf0/*ROM*/ + iVar2 + -0x18) = DAT_10011cf0/*ROM*/ + iVar2 + -0x18;
            pcVar4 = *(code **)(iVar2 + DAT_10011cf0/*ROM*/ + -8);
            uVar3 = *(uint32_t *)(iVar2 + DAT_10011cf0/*ROM*/ + -4);
            lens_fw_update_stub_105370cc(iVar5);
            (*pcVar4)(uVar3);
            lens_fw_update_stub_105370da(iVar5);
          }
        } while (_DAT_6a0036bc != (uint32_t)(&DAT_6a0036bc));
      }
      return 0;
    }
    iVar2 = iVar5 * 0x44;
    if (*(int *)(iVar2 + 0x6a001c1c) != 0) {
      *(int *)(iVar2 + 0x6a001c1c) = *(int *)(iVar2 + 0x6a001c1c) + -1;
      goto LAB_1000fb04;
    }
    lens_fw_update_stub_10537094();
    remove_task_from_timeout_queue_1001166c(sVar1);
    if ((*(byte *)(iVar2 + 0x6a001c06) & 8) == 0) {
      *(uint8_t *)(iVar2 + 0x6a001c06) = 2;
      if ((*(char *)(iVar2 + 0x6a001c07) == '\0') || (*(char *)(iVar2 + 0x6a001c07) == '\x01')) {
        ready_list_insert(sVar1);
      }
    }
    else {
      *(uint8_t *)(iVar2 + 0x6a001c06) = 8;
    }
    if (*(char *)(iVar2 + 0x6a001c07) == '\0') {
      *(uint16_t *)(iVar2 + 0x6a001c16) = 0;
      uVar3 = E_TMOUT;
    }
    else if (*(char *)(iVar2 + 0x6a001c07) == '\x01') {
      uVar3 = 0;
    }
    else {
      remove_node_from_queue((int)*(short *)(iVar2 + 0x6a001c08),iVar5,0);
      uVar3 = E_TMOUT;
    }
    act_tsk(iVar5,uVar3);
    lens_fw_update_stub_105370a2(iVar5);
    sVar1 = _DAT_6a0036c4;
  } while( true );
}
