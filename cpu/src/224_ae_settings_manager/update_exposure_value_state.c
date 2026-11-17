/* @k10d update_exposure_value_state @ 0x104bdeea
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Updates exposure value fields and flags based on a mode parameter and calls helper
 *   functions to process the value.
 * summary:
 *   The function clears two 16-bit fields at offsets 0xeb94 and 0xeb96. Depending on
 *   param_2 (0, 1, or 2), it reads a value from a specific offset, calls
 *   write_two_words_to_struct_104c1ff4, sets a mode byte at 0x38, and calls
 *   invoke_object_callback_and_release. It then updates fields at 0xeb94/0xeb96 from
 *   0x44/0x46 and sets a flag at 0xeb90 if the input value differs from the value at 0x44.
 *   Finally, it sets a flag at 0xeb91 and returns the flag at 0xeb90.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t update_exposure_value_state(int param_1,int param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  
  *(uint16_t *)(param_1 + 0xeb94) = 0;
  *(uint16_t *)(param_1 + 0xeb96) = 0;
  if (param_2 == 0) {
    *(uint16_t *)(param_1 + 0xeb94) = 0;
    *(uint16_t *)(param_1 + 0xeb96) = 0;
  }
  else if ((param_2 == 2) && (*(short *)(param_1 + 0xeb8c) == 0)) {
    sVar1 = *(short *)(param_1 + 0x2c4c);
    write_two_words_to_struct_104c1ff4(param_1,sVar1,*(uint16_t *)(param_1 + 0x2c4e));
    *(uint32_t *)(param_1 + 0x38) = 2;
    iVar3 = invoke_object_callback_and_release(param_1);
    if (iVar3 == 0) {
      *(uint8_t *)(param_1 + 0xeb90) = 0;
    }
    else {
      *(short *)(param_1 + 0xeb94) = *(short *)(param_1 + 0x44);
      *(uint16_t *)(param_1 + 0xeb96) = *(uint16_t *)(param_1 + 0x46);
      if (sVar1 != *(short *)(param_1 + 0x44)) {
        *(uint8_t *)(param_1 + 0xeb90) = 1;
      }
    }
    *(uint8_t *)(param_1 + 0xeb91) = 1;
  }
  else if ((param_2 == 1) && (*(short *)(param_1 + 0xeb8c) == *(short *)(param_1 + 0xeb8a))) {
    psVar2 = (short *)(param_1 + 0x2c4c + (*(byte *)(param_1 + 0xeb8e) - 1) * 0xb34);
    sVar1 = *psVar2;
    write_two_words_to_struct_104c1ff4(param_1,sVar1,psVar2[1]);
    *(uint32_t *)(param_1 + 0x38) = 1;
    iVar3 = invoke_object_callback_and_release(param_1);
    if (iVar3 == 0) {
      *(uint8_t *)(param_1 + 0xeb90) = 0;
    }
    else {
      *(short *)(param_1 + 0xeb94) = *(short *)(param_1 + 0x44);
      *(uint16_t *)(param_1 + 0xeb96) = *(uint16_t *)(param_1 + 0x46);
      if (sVar1 != *(short *)(param_1 + 0x44)) {
        *(uint8_t *)(param_1 + 0xeb90) = 1;
      }
    }
    *(uint8_t *)(param_1 + 0xeb91) = 1;
  }
  return *(uint8_t *)(param_1 + 0xeb90);
}
