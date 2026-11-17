/* @k10d register_cpucom_command @ 0x10464288
 * name: model (proposed by the local model from the decompile, confidence 0.72)
 * unit: 140_property_access (unit names are model-proposed)
 * purpose:
 *   Calls a base-class virtual method and registers a command byte with the CPUCOM
 *   companion-chip interface.
 * summary:
 *   The function takes an object pointer, invokes virtual slot 2 of its base class
 *   cls_105a7bf0 via init_object_with_buffer, then calls cpucom_register_cmd with the
 *   object and a byte from bRam105a78c2. This appears to be a virtual method (slot 2) of
 *   cls_105a7994 that sets up a command registration on the SPI-like companion channel at
 *   0x5c004040. The specific command byte value is read from a RAM location, so the exact
 *   command is data-dependent.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_cpucom_command(void *param_1)

{
  init_object_with_buffer(param_1);
  cpucom_register_cmd(param_1,(uint)bRam105a78c2);
  return;
}
