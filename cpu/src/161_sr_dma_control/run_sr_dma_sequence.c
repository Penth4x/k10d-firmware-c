/* @k10d run_sr_dma_sequence @ 0x10470808
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 161_sr_dma_control (unit names are model-proposed)
 * purpose:
 *   Sends two sequential commands via a helper, waits for a handshake line to clear, and
 *   returns success.
 * summary:
 *   The function calls sr_dma_command multiple times with varying parameters, likely for
 *   logging or state setup. It then calls execute_multi_byte_transfer and
 *   read_bytes_via_transfer_loop with a handle from get_cls_105a7db4_singleton, checking
 *   the result against a global constant. If successful, it calls cpucom_wait_line_clear to
 *   wait for a specific line to clear. The final boolean return value indicates whether the
 *   wait succeeded.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool run_sr_dma_sequence(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint8_t *puVar3;
  bool bVar4;
  bool bVar5;
  uint8_t auStack_38 [8];
  char cStack_9;
  
  puVar3 = auStack_38;
  bVar5 = false;
  cStack_9 = '\0';
  iVar1 = get_cls_105a7db4_singleton();
  iVar2 = *(int *)(iVar1 + 0xc);
  invoke_virtual_slot_on_nested_object_10466170(iVar2);
  *(uint16_t *)(puVar3 + 2) = 6;
  *(uint16_t *)(puVar3 + 6) = 0xff;
  sr_dma_command(param_1,1,0,(void *)0x105a96c8/*ROM*/,*(uint16_t *)(puVar3 + 2),*(uint16_t *)(puVar3 + 6));
  *(uint16_t *)(puVar3 + 2) = 3;
  *(uint16_t *)(puVar3 + 6) = 0xff;
  sr_dma_command(param_1,4,8,(void *)0x105a96e4/*ROM*/,*(uint16_t *)(puVar3 + 2),*(uint16_t *)(puVar3 + 6));
  release_struct_fields_10466d06(*(void **)(param_1 + 0x38));
  iVar1 = poll_context_flag_until_status_set(*(void **)(param_1 + 0x38),5000);
  if (iVar1 == 0) {
    *(uint16_t *)(puVar3 + 2) = 3;
    *(uint16_t *)(puVar3 + 6) = 0xff;
    sr_dma_command(param_1,4,0x10,(void *)0x105a96f0/*ROM*/,*(uint16_t *)(puVar3 + 2),*(uint16_t *)(puVar3 + 6)
                  );
    iVar1 = execute_multi_byte_transfer(iVar2,0xf1,param_2,param_3);
    bVar4 = iVar1 == _DAT_105a7ce8/*ROM*/;
    *(uint16_t *)(puVar3 + 2) = 3;
    *(uint16_t *)(puVar3 + 6) = 0xff;
    sr_dma_command(param_1,4,0x11,(void *)0x105a96f4/*ROM*/,*(uint16_t *)(puVar3 + 2),*(uint16_t *)(puVar3 + 6)
                  );
    bVar5 = false;
    if (bVar4) {
      iVar1 = read_bytes_via_transfer_loop(iVar2,0xf1,(int)&cStack_9,1);
      bVar4 = iVar1 == _DAT_105a7ce8/*ROM*/;
      *(uint16_t *)(puVar3 + 2) = 3;
      *(uint16_t *)(puVar3 + 6) = 0xff;
      sr_dma_command(param_1,4,0x12,(void *)0x105a96f8/*ROM*/,*(uint16_t *)(puVar3 + 2),
                     *(uint16_t *)(puVar3 + 6));
      bVar5 = false;
      if (bVar4) {
        iVar1 = cpucom_wait_line_clear((void *)(*(uint32_t *)(param_1 + 0x38)),5000);
        bVar5 = iVar1 == 0;
        *(uint16_t *)(puVar3 + 2) = 3;
        *(uint16_t *)(puVar3 + 6) = 0xff;
        sr_dma_command(param_1,4,0x13,(void *)0x105a96fc/*ROM*/,*(uint16_t *)(puVar3 + 2),
                       *(uint16_t *)(puVar3 + 6));
      }
    }
  }
  update_field_at_offset_0x20(param_1);
  if (bVar5 == false) {
    *(uint16_t *)(puVar3 + 2) = 6;
    *(uint16_t *)(puVar3 + 6) = 0xff;
    sr_dma_command(param_1,3,10,(void *)0x105a971c/*ROM*/,*(uint16_t *)(puVar3 + 2),*(uint16_t *)(puVar3 + 6));
  }
  else {
    if (cStack_9 == '\x01') {
      *(uint16_t *)(puVar3 + 2) = 1;
      *(uint16_t *)(puVar3 + 6) = 0xff;
      sr_dma_command(param_1,3,9,(void *)0x105a9700/*ROM*/,*(uint16_t *)(puVar3 + 2),*(uint16_t *)(puVar3 + 6))
      ;
      goto LAB_104709a6;
    }
    *(uint16_t *)(puVar3 + 2) = 6;
    *(uint16_t *)(puVar3 + 6) = 0xff;
    sr_dma_command(param_1,3,7,(void *)0x105a970c/*ROM*/,*(uint16_t *)(puVar3 + 2),*(uint16_t *)(puVar3 + 6));
  }
  bVar5 = false;
LAB_104709a6:
  release_struct_fields_10466d06(*(void **)(param_1 + 0x38));
  *(uint16_t *)(puVar3 + 2) = 4;
  *(uint16_t *)(puVar3 + 6) = 0xff;
  sr_dma_command(param_1,7,10,(void *)0x105a9724/*ROM*/,*(uint16_t *)(puVar3 + 2),*(uint16_t *)(puVar3 + 6));
  invoke_virtual_slot_10_with_one(iVar2);
  return bVar5;
}
