/* @k10d dispatch_seven_param_updates @ 0x10502330
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Invokes seven distinct handler functions with a shared object pointer and varying
 *   fields from a parameter struct.
 * summary:
 *   The function extracts a pointer from offset 0x18 of param_1 and uses it as the first
 *   argument for seven sequential calls to functions at fixed addresses (0x10454290 through
 *   0x104543e6). It passes different fields from param_2 (bytes, shorts, and a 3-short
 *   tuple) to these callees, suggesting a batch update or configuration sequence for a
 *   subsystem object. No specific camera subsystem is identifiable from the mechanical
 *   pattern alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_seven_param_updates(int param_1,uint8_t *param_2)

{
  uint16_t uVar1;
  uint16_t uVar2;
  uint16_t uVar3;
  uint32_t uVar4;
  uintptr_t sp;
  uint8_t *puVar5;
  uint8_t auStack_10 [4];
  
  puVar5 = auStack_10;
  (*(code *)0x10454290/*ROM*/)(*(uint32_t *)(param_1 + 0x18),*param_2);
  (*(code *)0x1045430c/*ROM*/)(*(uint32_t *)(param_1 + 0x18),param_2[2]);
  (*(code *)0x1045434a/*ROM*/)(*(uint32_t *)(param_1 + 0x18),param_2[3]);
  (*(code *)0x10454386/*ROM*/)(*(uint32_t *)(param_1 + 0x18),*(uint16_t *)(param_2 + 4));
  (*(code *)0x104543b6/*ROM*/)(*(uint32_t *)(param_1 + 0x18),*(uint16_t *)(param_2 + 6));
  (*(code *)0x104542cc/*ROM*/)(*(uint32_t *)(param_1 + 0x18),param_2[8]);
  uVar4 = *(uint32_t *)(param_1 + 0x18);
  uVar1 = *(uint16_t *)(param_2 + 10);
  uVar2 = *(uint16_t *)(param_2 + 0xc);
  uVar3 = *(uint16_t *)(param_2 + 0xe);
  *(uint16_t *)(puVar5 + 2) = *(uint16_t *)(param_2 + 0x10);
  (*(code *)0x104543e6/*ROM*/)(uVar4,uVar1,uVar2,uVar3);
  return;
}
