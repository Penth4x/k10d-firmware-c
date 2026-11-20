/* @k10d evaluate_state_gate_flags @ 0x000e69ca
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Evaluates a complex boolean condition on DAT_0003cxxx globals and sets bits 0 and 1 of
 *   DAT_0003c038 accordingly.
 * summary:
 *   The function checks multiple bit flags in DAT_0003c000, DAT_0003c410, and other
 *   DAT_0003cxxx globals, along with return values from check_two_flag_conditions_000e6c7e
 *   and check_three_flag_conditions. If the combined condition is true, it returns 1 and
 *   conditionally sets bit 1 (if DAT_0003c000 bit 2 is set) or bit 0 (if DAT_0003c000 bit 1
 *   is clear or DAT_0003c410 bit 2 is clear) in DAT_0003c038. It also clears bit 1 of
 *   DAT_0003c038 if DAT_0003c000 bit 1 and DAT_0003c410 bit 2 are both set. The specific
 *   meaning of these flags is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t evaluate_state_gate_flags(void)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  if ((((((DAT_0003c000 & 4) == 0) ||
        ((((((DAT_0003c440 == '\x11' && ((DAT_0003c4de & 1) == 0)) && ((DAT_0003c4df & 8) == 0)) &&
           (((DAT_0003c000 & 2) == 0 || ((DAT_0003c410 & 4) == 0)))) &&
          (((DAT_0003c038 & 1) == 0 && ((DAT_0003c393 & 0x10) == 0)))) &&
         ((((DAT_0003c129 & 1) == 0 || ((DAT_0003c127 & 1) == 0)) || (DAT_0003c3b5 == '\x01'))))))
       && ((((DAT_00000001 & 4) == 0 && ((DAT_0003c021 & 2) == 0)) &&
           (((DAT_0003f3e1 & 0x80) != 0 ||
            (((DAT_00000005 & 4) == 0 && (iVar1 = check_two_flag_conditions_000e6c7e(), iVar1 == 0)))))))) &&
      (iVar1 = check_three_flag_conditions(), iVar1 == 0)) &&
     ((((DAT_0003ce01 & 1) == 0 && ((DAT_0003ce06 & 1) == 0)) ||
      ((DAT_0003c4a4 == '\x01' && ((DAT_0003c000 & 4) == 0)))))) {
    uVar2 = 1;
    if ((DAT_0003c000 & 4) != 0) {
      DAT_0003c4d2 = DAT_0003c4d2 & 0xfe;
      DAT_0003c038 = DAT_0003c038 | 2;
    }
    if (((DAT_0003c000 & 2) == 0) || ((DAT_0003c410 & 4) == 0)) {
      DAT_0003c038 = DAT_0003c038 | 1;
    }
  }
  if (((DAT_0003c000 & 2) != 0) && ((DAT_0003c410 & 4) != 0)) {
    DAT_0003c038 = DAT_0003c038 & 0xfe;
  }
  return uVar2;
}
