#pragma once
// [do not edit,<auto-generated />]
// This file has been automatically generated, please do not change unless you disable auto-generation in the Makefile

#include "lo.h"

#include "builtins.h"
static unsigned int main_js_len = _binary_main_js_len;

void register_builtins() {
  lo::builtins_add("main.js", _binary_main_js_start, _binary_main_js_len);
  lo::builtins_add("lib/asm.js", _binary_lib_asm_js_start, _binary_lib_asm_js_len);
  lo::builtins_add("lib/ffi.js", _binary_lib_ffi_js_start, _binary_lib_ffi_js_len);
  lo::builtins_add("lib/gen.js", _binary_lib_gen_js_start, _binary_lib_gen_js_len);
  lo::builtins_add("lib/path.js", _binary_lib_path_js_start, _binary_lib_path_js_len);
  lo::builtins_add("lib/proc.js", _binary_lib_proc_js_start, _binary_lib_proc_js_len);
  lo::builtins_add("Makefile", _binary_Makefile_start, _binary_Makefile_len);
  lo::builtins_add("main.cc", _binary_main_cc_start, _binary_main_cc_len);
  lo::builtins_add("lo.cc", _binary_lo_cc_start, _binary_lo_cc_len);
  lo::builtins_add("lo.h", _binary_lo_h_start, _binary_lo_h_len);
  lo::builtins_add("lib/core/api.js", _binary_lib_core_api_js_start, _binary_lib_core_api_js_len);
}

static const char* main_js = _binary_main_js_start;
static const char* v8flags = "--stack-trace-limit=10 --use-strict --turbo-fast-api-calls --no-freeze-flags-after-init";
static unsigned int _v8flags_from_commandline = 1;
static unsigned int _v8_threads = 2;
static unsigned int _v8_cleanup = 0;
static unsigned int _on_exit = 0;

