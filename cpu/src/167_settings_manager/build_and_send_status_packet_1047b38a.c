/* @k10d build_and_send_status_packet_1047b38a @ 0x1047b38a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructs a 2-byte status packet from object flags and sends it via a helper function.
 * summary:
 *   The function checks a condition via check_flag_and_null_byte. If true, it retrieves a
 *   sub-object pointer and initializes a local structure (uStack_18) using
 *   init_small_struct_or_alloc. It then populates the structure with boolean flags derived
 *   from calls to settings_getter with various IDs (0xc2, 0x9c, 0xa3, 0x3d) and values from
 *   the sub-object. Finally, it calls free_if_flag_set_1051d1de to transmit the 2-byte
 *   packet.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_and_send_status_packet_1047b38a(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uintptr_t sp;
  uint8_t uStack_18;
  uint8_t uStack_17;
  int iStack_14;
  uint8_t uStack_10;
  uint8_t uStack_f;
  uint16_t uStack_e;
  uint16_t uStack_c;
  
  iVar1 = check_flag_and_null_byte(param_1 + 0x48);
  if (iVar1 != 0) {
    iVar3 = **(int **)(*(int *)(param_1 + 0x70) + 0xc);
    init_small_struct_or_alloc(&uStack_18);
    iStack_14 = iVar3 + 0x124;
    uStack_e = *(uint16_t *)(iVar3 + 300);
    uStack_c = *(uint16_t *)(iVar3 + 0x12e);
    iVar1 = *(int *)(iVar3 + 0x120);
    if (iVar1 != 0) {
      if (*(int *)(iVar3 + 4) == 0) {
        uStack_f = 1;
      }
      else if (*(int *)(iVar3 + 4) == 1) {
        uStack_f = 0;
      }
      else {
        cVar2 = settings_getter(iVar1,0xc2);
        uStack_f = 1;
        if (cVar2 != '\0') {
          uStack_f = 0;
        }
      }
      cVar2 = settings_getter(iVar1,0x9c);
      uStack_18 = cVar2 == '\x01';
      cVar2 = settings_getter(iVar1,0xa3);
      uStack_17 = cVar2 != '\x02';
      cVar2 = settings_getter(iVar1,0x3d);
      uStack_10 = cVar2 == '\0';
      iVar1 = increment_two_counters_on_nonzero_check(*(int *)(param_1 + 0x50));
      if (iVar1 == 0) {
        *(uint32_t *)(param_1 + 0x34) = 1;
      }
      else {
        *(uint32_t *)(param_1 + 0x34) = 0;
        iVar1 = (*(code *)0x10477ffe/*ROM*/)(*(uint32_t *)(param_1 + 0x50),iVar3 + 8);
        if (iVar1 != 0) {
          *(uint8_t *)(param_1 + 0x80) = 0;
        }
      }
    }
    free_if_flag_set_1051d1de(&uStack_18,2);
  }
  return;
}
