/* @k10d dispatch_four_values_via_vtable @ 0x104f42ec
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 258_ae_spi_transfer (unit names are model-proposed)
 * purpose:
 *   Invokes four virtual methods on an object pointer, passing four consecutive 16-bit
 *   values from a parameter array.
 * summary:
 *   The function extracts a pointer from offset 0x10 of the first argument and uses it to
 *   call four distinct functions at fixed addresses (0x1044e56a, 0x1044e58a, 0x1044e59a,
 *   0x1044e57a). Each call passes the same object pointer and one of four 16-bit values
 *   from the second argument array. The specific roles of the target functions are unknown
 *   as they are not in the callee database.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_four_values_via_vtable(int param_1,uint16_t *param_2)

{
  (*(code *)0x1044e56a/*ROM*/)(*(uint32_t *)(param_1 + 0x10),*param_2);
  (*(code *)0x1044e58a/*ROM*/)(*(uint32_t *)(param_1 + 0x10),param_2[1]);
  (*(code *)0x1044e59a/*ROM*/)(*(uint32_t *)(param_1 + 0x10),param_2[2]);
  (*(code *)0x1044e57a/*ROM*/)(*(uint32_t *)(param_1 + 0x10),param_2[3]);
  return;
}
