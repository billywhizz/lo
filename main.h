#pragma once
// [do not edit,<auto-generated />]
// This file has been automatically generated, please do not change unless you disable auto-generation in the Makefile

#include "lo.h"

#ifdef _WIN64
#include "builtins.h"
static unsigned int main_js_len = _binary_main_js_len;
#else
extern char _binary_main_js_start[];
extern char _binary_main_js_end[];
static unsigned int main_js_len = _binary_main_js_end - _binary_main_js_start;
extern char _binary_lib_curl_js_start[];
extern char _binary_lib_gen_js_start[];
extern char _binary_lib_fs_js_start[];
extern char _binary_lib_untar_js_start[];
extern char _binary_lib_proc_js_start[];
extern char _binary_lib_path_js_start[];
extern char _binary_lib_inflate_js_start[];
extern char _binary_lib_build_js_start[];
extern char _binary_lib_stringify_js_start[];
extern char _binary_main_cc_start[];
extern char _binary_main_h_start[];
extern char _binary_lo_h_start[];
extern char _binary_lo_cc_start[];
extern char _binary_lib_inflate_api_js_start[];
extern char _binary_lib_inflate_build_js_start[];
extern char _binary_lib_core_api_js_start[];
extern char _binary_lib_curl_api_js_start[];
extern char _binary_runtime_base_config_js_start[];
extern char _binary_runtime_lo_config_js_start[];
extern char _binary_globals_d_ts_start[];
extern char _binary_lib_curl_js_end[];
extern char _binary_lib_gen_js_end[];
extern char _binary_lib_fs_js_end[];
extern char _binary_lib_untar_js_end[];
extern char _binary_lib_proc_js_end[];
extern char _binary_lib_path_js_end[];
extern char _binary_lib_inflate_js_end[];
extern char _binary_lib_build_js_end[];
extern char _binary_lib_stringify_js_end[];
extern char _binary_main_cc_end[];
extern char _binary_main_h_end[];
extern char _binary_lo_h_end[];
extern char _binary_lo_cc_end[];
extern char _binary_lib_inflate_api_js_end[];
extern char _binary_lib_inflate_build_js_end[];
extern char _binary_lib_core_api_js_end[];
extern char _binary_lib_curl_api_js_end[];
extern char _binary_runtime_base_config_js_end[];
extern char _binary_runtime_lo_config_js_end[];
extern char _binary_globals_d_ts_end[];

#endif

extern "C" {
  extern void* _register_core();
  extern void* _register_inflate();
  extern void* _register_curl();
  
#ifdef __MACH__
  extern void* _register_mach();
#endif

}

void register_builtins() {
  lo::builtins_add("main.js", _binary_main_js_start, _binary_main_js_end - _binary_main_js_start);
  lo::builtins_add("lib/curl.js", _binary_lib_curl_js_start, _binary_lib_curl_js_end - _binary_lib_curl_js_start);
  lo::builtins_add("lib/gen.js", _binary_lib_gen_js_start, _binary_lib_gen_js_end - _binary_lib_gen_js_start);
  lo::builtins_add("lib/fs.js", _binary_lib_fs_js_start, _binary_lib_fs_js_end - _binary_lib_fs_js_start);
  lo::builtins_add("lib/untar.js", _binary_lib_untar_js_start, _binary_lib_untar_js_end - _binary_lib_untar_js_start);
  lo::builtins_add("lib/proc.js", _binary_lib_proc_js_start, _binary_lib_proc_js_end - _binary_lib_proc_js_start);
  lo::builtins_add("lib/path.js", _binary_lib_path_js_start, _binary_lib_path_js_end - _binary_lib_path_js_start);
  lo::builtins_add("lib/inflate.js", _binary_lib_inflate_js_start, _binary_lib_inflate_js_end - _binary_lib_inflate_js_start);
  lo::builtins_add("lib/build.js", _binary_lib_build_js_start, _binary_lib_build_js_end - _binary_lib_build_js_start);
  lo::builtins_add("lib/stringify.js", _binary_lib_stringify_js_start, _binary_lib_stringify_js_end - _binary_lib_stringify_js_start);
  lo::builtins_add("main.cc", _binary_main_cc_start, _binary_main_cc_end - _binary_main_cc_start);
  lo::builtins_add("main.h", _binary_main_h_start, _binary_main_h_end - _binary_main_h_start);
  lo::builtins_add("lo.h", _binary_lo_h_start, _binary_lo_h_end - _binary_lo_h_start);
  lo::builtins_add("lo.cc", _binary_lo_cc_start, _binary_lo_cc_end - _binary_lo_cc_start);
  lo::builtins_add("lib/inflate/api.js", _binary_lib_inflate_api_js_start, _binary_lib_inflate_api_js_end - _binary_lib_inflate_api_js_start);
  lo::builtins_add("lib/inflate/build.js", _binary_lib_inflate_build_js_start, _binary_lib_inflate_build_js_end - _binary_lib_inflate_build_js_start);
  lo::builtins_add("lib/core/api.js", _binary_lib_core_api_js_start, _binary_lib_core_api_js_end - _binary_lib_core_api_js_start);
  lo::builtins_add("lib/curl/api.js", _binary_lib_curl_api_js_start, _binary_lib_curl_api_js_end - _binary_lib_curl_api_js_start);
  lo::builtins_add("runtime/base.config.js", _binary_runtime_base_config_js_start, _binary_runtime_base_config_js_end - _binary_runtime_base_config_js_start);
  lo::builtins_add("runtime/lo.config.js", _binary_runtime_lo_config_js_start, _binary_runtime_lo_config_js_end - _binary_runtime_lo_config_js_start);
  lo::builtins_add("globals.d.ts", _binary_globals_d_ts_start, _binary_globals_d_ts_end - _binary_globals_d_ts_start);
  lo::modules_add("core", &_register_core);
  lo::modules_add("inflate", &_register_inflate);
  lo::modules_add("curl", &_register_curl);
  
#ifdef __MACH__
  lo::modules_add("mach", &_register_mach);
#endif

}

static const char* index_js = NULL;
static unsigned int index_js_len = 0;

static const char* main_js = _binary_main_js_start;

static const char* v8flags = "--stack-trace-limit=10 --use-strict --turbo-fast-api-calls --no-freeze-flags-after-init --cppgc-young-generation";
static unsigned int _v8flags_from_commandline = 1;
static unsigned int _v8_threads = 2;
static unsigned int _v8_cleanup = 0;
static unsigned int _on_exit = 0;
#ifdef __linux__

#endif
#ifdef __MACH__

#endif
