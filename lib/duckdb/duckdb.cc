
// [do not edit,<auto-generated />]
// This file has been automatically generated, please do not change unless you disable auto-generation in the Makefile  
#include <duckdb.h>
#include <lo.h>

namespace lo {
namespace duckdb {

using v8::String;
using v8::FunctionCallbackInfo;
using v8::Array;
using v8::Local;
using v8::ObjectTemplate;
using v8::Isolate;
using v8::Value;
using v8::Uint32Array;
using v8::ArrayBuffer;
using v8::Context;
using v8::Integer;
using v8::Function;
using v8::NewStringType;
using v8::Object;
using v8::BackingStore;
using v8::TryCatch;
using v8::ScriptCompiler;
using v8::Module;
using v8::FixedArray;
using v8::ScriptOrigin;
using v8::SharedArrayBuffer;
using v8::MaybeLocal;
using v8::HandleScope;
using v8::Promise;
using v8::Number;
using v8::StackTrace;
using v8::Message;
using v8::StackFrame;
using v8::Maybe;
using v8::FunctionTemplate;
using v8::FunctionCallback;
using v8::PromiseRejectMessage;
using v8::CFunction;
using v8::Global;
using v8::Exception;
using v8::CTypeInfo;
using v8::PropertyAttribute;
using v8::Signature;
using v8::ConstructorBehavior;
using v8::SideEffectType;
using v8::kPromiseRejectAfterResolved;
using v8::kPromiseResolveAfterResolved;
using v8::kPromiseHandlerAddedAfterReject;
using v8::Data;
using v8::PrimitiveArray;
using v8::TypedArray;
using v8::Uint8Array;
using v8::Boolean;
using v8::ModuleRequest;
using v8::CFunctionInfo;
using v8::OOMDetails;
using v8::V8;
using v8::BigInt;


int set_config (duckdb_config* config, const char* key, const char* value) {
  return duckdb_set_config(*config, key, value);
}


int32_t create_configFast(void* p, void* p0);
v8::CTypeInfo cargscreate_config[2] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint64),
};
v8::CTypeInfo rccreate_config = v8::CTypeInfo(v8::CTypeInfo::Type::kInt32);
v8::CFunctionInfo infocreate_config = v8::CFunctionInfo(rccreate_config, 2, cargscreate_config);
v8::CFunction pFcreate_config = v8::CFunction((const void*)&create_configFast, &infocreate_config);

int32_t open_extFast(void* p, struct FastOneByteString* const p0, struct FastApiTypedArray* const p1, void* p2, void* p3);
v8::CTypeInfo cargsopen_ext[5] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kSeqOneByteString),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint32, CTypeInfo::SequenceType::kIsTypedArray, CTypeInfo::Flags::kNone),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint64),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint64),
};
v8::CTypeInfo rcopen_ext = v8::CTypeInfo(v8::CTypeInfo::Type::kInt32);
v8::CFunctionInfo infoopen_ext = v8::CFunctionInfo(rcopen_ext, 5, cargsopen_ext);
v8::CFunction pFopen_ext = v8::CFunction((const void*)&open_extFast, &infoopen_ext);

int32_t set_configFast(void* p, void* p0, struct FastOneByteString* const p1, struct FastOneByteString* const p2);
v8::CTypeInfo cargsset_config[4] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint64),
  v8::CTypeInfo(v8::CTypeInfo::Type::kSeqOneByteString),
  v8::CTypeInfo(v8::CTypeInfo::Type::kSeqOneByteString),
};
v8::CTypeInfo rcset_config = v8::CTypeInfo(v8::CTypeInfo::Type::kInt32);
v8::CFunctionInfo infoset_config = v8::CFunctionInfo(rcset_config, 4, cargsset_config);
v8::CFunction pFset_config = v8::CFunction((const void*)&set_configFast, &infoset_config);

int32_t connectFast(void* p, void* p0, struct FastApiTypedArray* const p1);
v8::CTypeInfo cargsconnect[3] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint64),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint32, CTypeInfo::SequenceType::kIsTypedArray, CTypeInfo::Flags::kNone),
};
v8::CTypeInfo rcconnect = v8::CTypeInfo(v8::CTypeInfo::Type::kInt32);
v8::CFunctionInfo infoconnect = v8::CFunctionInfo(rcconnect, 3, cargsconnect);
v8::CFunction pFconnect = v8::CFunction((const void*)&connectFast, &infoconnect);

int32_t queryFast(void* p, void* p0, struct FastOneByteString* const p1, void* p2);
v8::CTypeInfo cargsquery[4] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint64),
  v8::CTypeInfo(v8::CTypeInfo::Type::kSeqOneByteString),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint64),
};
v8::CTypeInfo rcquery = v8::CTypeInfo(v8::CTypeInfo::Type::kInt32);
v8::CFunctionInfo infoquery = v8::CFunctionInfo(rcquery, 4, cargsquery);
v8::CFunction pFquery = v8::CFunction((const void*)&queryFast, &infoquery);

int32_t prepareFast(void* p, void* p0, struct FastOneByteString* const p1, struct FastApiTypedArray* const p2);
v8::CTypeInfo cargsprepare[4] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint64),
  v8::CTypeInfo(v8::CTypeInfo::Type::kSeqOneByteString),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint32, CTypeInfo::SequenceType::kIsTypedArray, CTypeInfo::Flags::kNone),
};
v8::CTypeInfo rcprepare = v8::CTypeInfo(v8::CTypeInfo::Type::kInt32);
v8::CFunctionInfo infoprepare = v8::CFunctionInfo(rcprepare, 4, cargsprepare);
v8::CFunction pFprepare = v8::CFunction((const void*)&prepareFast, &infoprepare);

int32_t row_countFast(void* p, void* p0);
v8::CTypeInfo cargsrow_count[2] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint64),
};
v8::CTypeInfo rcrow_count = v8::CTypeInfo(v8::CTypeInfo::Type::kInt32);
v8::CFunctionInfo inforow_count = v8::CFunctionInfo(rcrow_count, 2, cargsrow_count);
v8::CFunction pFrow_count = v8::CFunction((const void*)&row_countFast, &inforow_count);

int32_t column_countFast(void* p, void* p0);
v8::CTypeInfo cargscolumn_count[2] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint64),
};
v8::CTypeInfo rccolumn_count = v8::CTypeInfo(v8::CTypeInfo::Type::kInt32);
v8::CFunctionInfo infocolumn_count = v8::CFunctionInfo(rccolumn_count, 2, cargscolumn_count);
v8::CFunction pFcolumn_count = v8::CFunction((const void*)&column_countFast, &infocolumn_count);

void value_timestampFast(void* p, void* p0, uint32_t p1, uint32_t p2, struct FastApiTypedArray* const p_ret);
v8::CTypeInfo cargsvalue_timestamp[5] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint64),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint32),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint32),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint32, v8::CTypeInfo::SequenceType::kIsTypedArray, v8::CTypeInfo::Flags::kNone)
};
v8::CTypeInfo rcvalue_timestamp = v8::CTypeInfo(v8::CTypeInfo::Type::kVoid);
v8::CFunctionInfo infovalue_timestamp = v8::CFunctionInfo(rcvalue_timestamp, 5, cargsvalue_timestamp);
v8::CFunction pFvalue_timestamp = v8::CFunction((const void*)&value_timestampFast, &infovalue_timestamp);

uint32_t value_uint32Fast(void* p, void* p0, uint32_t p1, uint32_t p2);
v8::CTypeInfo cargsvalue_uint32[4] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint64),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint32),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint32),
};
v8::CTypeInfo rcvalue_uint32 = v8::CTypeInfo(v8::CTypeInfo::Type::kUint32);
v8::CFunctionInfo infovalue_uint32 = v8::CFunctionInfo(rcvalue_uint32, 4, cargsvalue_uint32);
v8::CFunction pFvalue_uint32 = v8::CFunction((const void*)&value_uint32Fast, &infovalue_uint32);

int32_t value_int32Fast(void* p, void* p0, uint32_t p1, uint32_t p2);
v8::CTypeInfo cargsvalue_int32[4] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint64),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint32),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint32),
};
v8::CTypeInfo rcvalue_int32 = v8::CTypeInfo(v8::CTypeInfo::Type::kInt32);
v8::CFunctionInfo infovalue_int32 = v8::CFunctionInfo(rcvalue_int32, 4, cargsvalue_int32);
v8::CFunction pFvalue_int32 = v8::CFunction((const void*)&value_int32Fast, &infovalue_int32);

void value_varcharFast(void* p, void* p0, uint32_t p1, uint32_t p2, struct FastApiTypedArray* const p_ret);
v8::CTypeInfo cargsvalue_varchar[5] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint64),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint32),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint32),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint32, v8::CTypeInfo::SequenceType::kIsTypedArray, v8::CTypeInfo::Flags::kNone)
};
v8::CTypeInfo rcvalue_varchar = v8::CTypeInfo(v8::CTypeInfo::Type::kVoid);
v8::CFunctionInfo infovalue_varchar = v8::CFunctionInfo(rcvalue_varchar, 5, cargsvalue_varchar);
v8::CFunction pFvalue_varchar = v8::CFunction((const void*)&value_varcharFast, &infovalue_varchar);

void closeFast(void* p, void* p0);
v8::CTypeInfo cargsclose[2] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint64),
};
v8::CTypeInfo rcclose = v8::CTypeInfo(v8::CTypeInfo::Type::kVoid);
v8::CFunctionInfo infoclose = v8::CFunctionInfo(rcclose, 2, cargsclose);
v8::CFunction pFclose = v8::CFunction((const void*)&closeFast, &infoclose);

void destroy_resultFast(void* p, void* p0);
v8::CTypeInfo cargsdestroy_result[2] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint64),
};
v8::CTypeInfo rcdestroy_result = v8::CTypeInfo(v8::CTypeInfo::Type::kVoid);
v8::CFunctionInfo infodestroy_result = v8::CFunctionInfo(rcdestroy_result, 2, cargsdestroy_result);
v8::CFunction pFdestroy_result = v8::CFunction((const void*)&destroy_resultFast, &infodestroy_result);

void destroy_prepareFast(void* p, void* p0);
v8::CTypeInfo cargsdestroy_prepare[2] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint64),
};
v8::CTypeInfo rcdestroy_prepare = v8::CTypeInfo(v8::CTypeInfo::Type::kVoid);
v8::CFunctionInfo infodestroy_prepare = v8::CFunctionInfo(rcdestroy_prepare, 2, cargsdestroy_prepare);
v8::CFunction pFdestroy_prepare = v8::CFunction((const void*)&destroy_prepareFast, &infodestroy_prepare);

int32_t execute_preparedFast(void* p, void* p0, void* p1);
v8::CTypeInfo cargsexecute_prepared[3] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint64),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint64),
};
v8::CTypeInfo rcexecute_prepared = v8::CTypeInfo(v8::CTypeInfo::Type::kInt32);
v8::CFunctionInfo infoexecute_prepared = v8::CFunctionInfo(rcexecute_prepared, 3, cargsexecute_prepared);
v8::CFunction pFexecute_prepared = v8::CFunction((const void*)&execute_preparedFast, &infoexecute_prepared);

void column_nameFast(void* p, void* p0, uint32_t p1, struct FastApiTypedArray* const p_ret);
v8::CTypeInfo cargscolumn_name[4] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint64),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint32),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint32, v8::CTypeInfo::SequenceType::kIsTypedArray, v8::CTypeInfo::Flags::kNone)
};
v8::CTypeInfo rccolumn_name = v8::CTypeInfo(v8::CTypeInfo::Type::kVoid);
v8::CFunctionInfo infocolumn_name = v8::CFunctionInfo(rccolumn_name, 4, cargscolumn_name);
v8::CFunction pFcolumn_name = v8::CFunction((const void*)&column_nameFast, &infocolumn_name);

int32_t column_typeFast(void* p, void* p0, uint32_t p1);
v8::CTypeInfo cargscolumn_type[3] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint64),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint32),
};
v8::CTypeInfo rccolumn_type = v8::CTypeInfo(v8::CTypeInfo::Type::kInt32);
v8::CFunctionInfo infocolumn_type = v8::CFunctionInfo(rccolumn_type, 3, cargscolumn_type);
v8::CFunction pFcolumn_type = v8::CFunction((const void*)&column_typeFast, &infocolumn_type);

void result_errorFast(void* p, void* p0, struct FastApiTypedArray* const p_ret);
v8::CTypeInfo cargsresult_error[3] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint64),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint32, v8::CTypeInfo::SequenceType::kIsTypedArray, v8::CTypeInfo::Flags::kNone)
};
v8::CTypeInfo rcresult_error = v8::CTypeInfo(v8::CTypeInfo::Type::kVoid);
v8::CFunctionInfo inforesult_error = v8::CFunctionInfo(rcresult_error, 3, cargsresult_error);
v8::CFunction pFresult_error = v8::CFunction((const void*)&result_errorFast, &inforesult_error);

uint32_t value_is_nullFast(void* p, void* p0, uint32_t p1, uint32_t p2);
v8::CTypeInfo cargsvalue_is_null[4] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint64),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint32),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint32),
};
v8::CTypeInfo rcvalue_is_null = v8::CTypeInfo(v8::CTypeInfo::Type::kUint32);
v8::CFunctionInfo infovalue_is_null = v8::CFunctionInfo(rcvalue_is_null, 4, cargsvalue_is_null);
v8::CFunction pFvalue_is_null = v8::CFunction((const void*)&value_is_nullFast, &infovalue_is_null);

void disconnectFast(void* p, void* p0);
v8::CTypeInfo cargsdisconnect[2] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint64),
};
v8::CTypeInfo rcdisconnect = v8::CTypeInfo(v8::CTypeInfo::Type::kVoid);
v8::CFunctionInfo infodisconnect = v8::CFunctionInfo(rcdisconnect, 2, cargsdisconnect);
v8::CFunction pFdisconnect = v8::CFunction((const void*)&disconnectFast, &infodisconnect);

void library_versionFast(void* p, struct FastApiTypedArray* const p_ret);
v8::CTypeInfo cargslibrary_version[2] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),

  v8::CTypeInfo(v8::CTypeInfo::Type::kUint32, v8::CTypeInfo::SequenceType::kIsTypedArray, v8::CTypeInfo::Flags::kNone)
};
v8::CTypeInfo rclibrary_version = v8::CTypeInfo(v8::CTypeInfo::Type::kVoid);
v8::CFunctionInfo infolibrary_version = v8::CFunctionInfo(rclibrary_version, 2, cargslibrary_version);
v8::CFunction pFlibrary_version = v8::CFunction((const void*)&library_versionFast, &infolibrary_version);



void create_configSlow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();
  duckdb_config* v0 = reinterpret_cast<duckdb_config*>((uint64_t)Local<Integer>::Cast(args[0])->Value());
  int32_t rc = duckdb_create_config(v0);
  args.GetReturnValue().Set(Number::New(isolate, rc));
}

int32_t create_configFast(void* p, void* p0) {
  duckdb_config* v0 = reinterpret_cast<duckdb_config*>(p0);
  return duckdb_create_config(v0);
}
void open_extSlow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();
  String::Utf8Value v0(isolate, args[0]);
  Local<Uint32Array> u321 = args[1].As<Uint32Array>();
  uint8_t* ptr1 = (uint8_t*)u321->Buffer()->Data() + u321->ByteOffset();
  duckdb_database* v1 = reinterpret_cast<duckdb_database*>(ptr1);
  duckdb_config v2 = reinterpret_cast<duckdb_config>((uint64_t)Local<Integer>::Cast(args[2])->Value());
  char** v3 = reinterpret_cast<char**>((uint64_t)Local<Integer>::Cast(args[3])->Value());
  int32_t rc = duckdb_open_ext(*v0, v1, v2, v3);
  args.GetReturnValue().Set(Number::New(isolate, rc));
}

int32_t open_extFast(void* p, struct FastOneByteString* const p0, struct FastApiTypedArray* const p1, void* p2, void* p3) {
  struct FastOneByteString* const v0 = p0;
  duckdb_database* v1 = reinterpret_cast<duckdb_database*>(p1->data);
  duckdb_config v2 = reinterpret_cast<duckdb_config>(p2);
  char** v3 = reinterpret_cast<char**>(p3);
  return duckdb_open_ext(v0->data, v1, v2, v3);
}
void set_configSlow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();
  duckdb_config* v0 = reinterpret_cast<duckdb_config*>((uint64_t)Local<Integer>::Cast(args[0])->Value());
  String::Utf8Value v1(isolate, args[1]);
  String::Utf8Value v2(isolate, args[2]);
  int32_t rc = set_config(v0, *v1, *v2);
  args.GetReturnValue().Set(Number::New(isolate, rc));
}

int32_t set_configFast(void* p, void* p0, struct FastOneByteString* const p1, struct FastOneByteString* const p2) {
  duckdb_config* v0 = reinterpret_cast<duckdb_config*>(p0);
  struct FastOneByteString* const v1 = p1;
  struct FastOneByteString* const v2 = p2;
  return set_config(v0, v1->data, v2->data);
}
void connectSlow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();
  duckdb_database v0 = reinterpret_cast<duckdb_database>((uint64_t)Local<Integer>::Cast(args[0])->Value());
  Local<Uint32Array> u321 = args[1].As<Uint32Array>();
  uint8_t* ptr1 = (uint8_t*)u321->Buffer()->Data() + u321->ByteOffset();
  duckdb_connection* v1 = reinterpret_cast<duckdb_connection*>(ptr1);
  int32_t rc = duckdb_connect(v0, v1);
  args.GetReturnValue().Set(Number::New(isolate, rc));
}

int32_t connectFast(void* p, void* p0, struct FastApiTypedArray* const p1) {
  duckdb_database v0 = reinterpret_cast<duckdb_database>(p0);
  duckdb_connection* v1 = reinterpret_cast<duckdb_connection*>(p1->data);
  return duckdb_connect(v0, v1);
}
void querySlow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();
  duckdb_connection v0 = reinterpret_cast<duckdb_connection>((uint64_t)Local<Integer>::Cast(args[0])->Value());
  String::Utf8Value v1(isolate, args[1]);
  duckdb_result* v2 = reinterpret_cast<duckdb_result*>((uint64_t)Local<Integer>::Cast(args[2])->Value());
  int32_t rc = duckdb_query(v0, *v1, v2);
  args.GetReturnValue().Set(Number::New(isolate, rc));
}

int32_t queryFast(void* p, void* p0, struct FastOneByteString* const p1, void* p2) {
  duckdb_connection v0 = reinterpret_cast<duckdb_connection>(p0);
  struct FastOneByteString* const v1 = p1;
  duckdb_result* v2 = reinterpret_cast<duckdb_result*>(p2);
  return duckdb_query(v0, v1->data, v2);
}
void prepareSlow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();
  duckdb_connection v0 = reinterpret_cast<duckdb_connection>((uint64_t)Local<Integer>::Cast(args[0])->Value());
  String::Utf8Value v1(isolate, args[1]);
  Local<Uint32Array> u322 = args[2].As<Uint32Array>();
  uint8_t* ptr2 = (uint8_t*)u322->Buffer()->Data() + u322->ByteOffset();
  duckdb_prepared_statement* v2 = reinterpret_cast<duckdb_prepared_statement*>(ptr2);
  int32_t rc = duckdb_prepare(v0, *v1, v2);
  args.GetReturnValue().Set(Number::New(isolate, rc));
}

int32_t prepareFast(void* p, void* p0, struct FastOneByteString* const p1, struct FastApiTypedArray* const p2) {
  duckdb_connection v0 = reinterpret_cast<duckdb_connection>(p0);
  struct FastOneByteString* const v1 = p1;
  duckdb_prepared_statement* v2 = reinterpret_cast<duckdb_prepared_statement*>(p2->data);
  return duckdb_prepare(v0, v1->data, v2);
}
void row_countSlow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();
  duckdb_result* v0 = reinterpret_cast<duckdb_result*>((uint64_t)Local<Integer>::Cast(args[0])->Value());
  int32_t rc = duckdb_row_count(v0);
  args.GetReturnValue().Set(Number::New(isolate, rc));
}

int32_t row_countFast(void* p, void* p0) {
  duckdb_result* v0 = reinterpret_cast<duckdb_result*>(p0);
  return duckdb_row_count(v0);
}
void column_countSlow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();
  duckdb_result* v0 = reinterpret_cast<duckdb_result*>((uint64_t)Local<Integer>::Cast(args[0])->Value());
  int32_t rc = duckdb_column_count(v0);
  args.GetReturnValue().Set(Number::New(isolate, rc));
}

int32_t column_countFast(void* p, void* p0) {
  duckdb_result* v0 = reinterpret_cast<duckdb_result*>(p0);
  return duckdb_column_count(v0);
}
void value_timestampSlow(const FunctionCallbackInfo<Value> &args) {
  duckdb_result* v0 = reinterpret_cast<duckdb_result*>((uint64_t)Local<Integer>::Cast(args[0])->Value());
  uint32_t v1 = Local<Integer>::Cast(args[1])->Value();
  uint32_t v2 = Local<Integer>::Cast(args[2])->Value();
  duckdb_timestamp rc = duckdb_value_timestamp(v0, v1, v2);
  Local<ArrayBuffer> ab = args[3].As<Uint32Array>()->Buffer();
  ((duckdb_timestamp*)ab->Data())[0] = rc;
}

void value_timestampFast(void* p, void* p0, uint32_t p1, uint32_t p2, struct FastApiTypedArray* const p_ret) {
  duckdb_result* v0 = reinterpret_cast<duckdb_result*>(p0);
  uint32_t v1 = p1;
  uint32_t v2 = p2;
  duckdb_timestamp r = duckdb_value_timestamp(v0, v1, v2);
  ((duckdb_timestamp*)p_ret->data)[0] = r;

}
void value_uint32Slow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();
  duckdb_result* v0 = reinterpret_cast<duckdb_result*>((uint64_t)Local<Integer>::Cast(args[0])->Value());
  uint32_t v1 = Local<Integer>::Cast(args[1])->Value();
  uint32_t v2 = Local<Integer>::Cast(args[2])->Value();
  uint32_t rc = duckdb_value_uint32(v0, v1, v2);
  args.GetReturnValue().Set(Number::New(isolate, rc));
}

uint32_t value_uint32Fast(void* p, void* p0, uint32_t p1, uint32_t p2) {
  duckdb_result* v0 = reinterpret_cast<duckdb_result*>(p0);
  uint32_t v1 = p1;
  uint32_t v2 = p2;
  return duckdb_value_uint32(v0, v1, v2);
}
void value_int32Slow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();
  duckdb_result* v0 = reinterpret_cast<duckdb_result*>((uint64_t)Local<Integer>::Cast(args[0])->Value());
  uint32_t v1 = Local<Integer>::Cast(args[1])->Value();
  uint32_t v2 = Local<Integer>::Cast(args[2])->Value();
  int32_t rc = duckdb_value_int32(v0, v1, v2);
  args.GetReturnValue().Set(Number::New(isolate, rc));
}

int32_t value_int32Fast(void* p, void* p0, uint32_t p1, uint32_t p2) {
  duckdb_result* v0 = reinterpret_cast<duckdb_result*>(p0);
  uint32_t v1 = p1;
  uint32_t v2 = p2;
  return duckdb_value_int32(v0, v1, v2);
}
void value_varcharSlow(const FunctionCallbackInfo<Value> &args) {
  duckdb_result* v0 = reinterpret_cast<duckdb_result*>((uint64_t)Local<Integer>::Cast(args[0])->Value());
  uint32_t v1 = Local<Integer>::Cast(args[1])->Value();
  uint32_t v2 = Local<Integer>::Cast(args[2])->Value();
  char* rc = duckdb_value_varchar(v0, v1, v2);
  Local<ArrayBuffer> ab = args[3].As<Uint32Array>()->Buffer();
  ((char**)ab->Data())[0] = rc;
}

void value_varcharFast(void* p, void* p0, uint32_t p1, uint32_t p2, struct FastApiTypedArray* const p_ret) {
  duckdb_result* v0 = reinterpret_cast<duckdb_result*>(p0);
  uint32_t v1 = p1;
  uint32_t v2 = p2;
  char* r = duckdb_value_varchar(v0, v1, v2);
  ((char**)p_ret->data)[0] = r;

}
void closeSlow(const FunctionCallbackInfo<Value> &args) {
  duckdb_database* v0 = reinterpret_cast<duckdb_database*>((uint64_t)Local<Integer>::Cast(args[0])->Value());
  duckdb_close(v0);
}

void closeFast(void* p, void* p0) {
  duckdb_database* v0 = reinterpret_cast<duckdb_database*>(p0);
  duckdb_close(v0);
}
void destroy_resultSlow(const FunctionCallbackInfo<Value> &args) {
  duckdb_result* v0 = reinterpret_cast<duckdb_result*>((uint64_t)Local<Integer>::Cast(args[0])->Value());
  duckdb_destroy_result(v0);
}

void destroy_resultFast(void* p, void* p0) {
  duckdb_result* v0 = reinterpret_cast<duckdb_result*>(p0);
  duckdb_destroy_result(v0);
}
void destroy_prepareSlow(const FunctionCallbackInfo<Value> &args) {
  duckdb_prepared_statement* v0 = reinterpret_cast<duckdb_prepared_statement*>((uint64_t)Local<Integer>::Cast(args[0])->Value());
  duckdb_destroy_prepare(v0);
}

void destroy_prepareFast(void* p, void* p0) {
  duckdb_prepared_statement* v0 = reinterpret_cast<duckdb_prepared_statement*>(p0);
  duckdb_destroy_prepare(v0);
}
void execute_preparedSlow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();
  duckdb_prepared_statement v0 = reinterpret_cast<duckdb_prepared_statement>((uint64_t)Local<Integer>::Cast(args[0])->Value());
  duckdb_result* v1 = reinterpret_cast<duckdb_result*>((uint64_t)Local<Integer>::Cast(args[1])->Value());
  int32_t rc = duckdb_execute_prepared(v0, v1);
  args.GetReturnValue().Set(Number::New(isolate, rc));
}

int32_t execute_preparedFast(void* p, void* p0, void* p1) {
  duckdb_prepared_statement v0 = reinterpret_cast<duckdb_prepared_statement>(p0);
  duckdb_result* v1 = reinterpret_cast<duckdb_result*>(p1);
  return duckdb_execute_prepared(v0, v1);
}
void column_nameSlow(const FunctionCallbackInfo<Value> &args) {
  duckdb_result* v0 = reinterpret_cast<duckdb_result*>((uint64_t)Local<Integer>::Cast(args[0])->Value());
  uint32_t v1 = Local<Integer>::Cast(args[1])->Value();
  const char* rc = duckdb_column_name(v0, v1);
  Local<ArrayBuffer> ab = args[2].As<Uint32Array>()->Buffer();
  ((const char**)ab->Data())[0] = rc;
}

void column_nameFast(void* p, void* p0, uint32_t p1, struct FastApiTypedArray* const p_ret) {
  duckdb_result* v0 = reinterpret_cast<duckdb_result*>(p0);
  uint32_t v1 = p1;
  const char* r = duckdb_column_name(v0, v1);
  ((const char**)p_ret->data)[0] = r;

}
void column_typeSlow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();
  duckdb_result* v0 = reinterpret_cast<duckdb_result*>((uint64_t)Local<Integer>::Cast(args[0])->Value());
  uint32_t v1 = Local<Integer>::Cast(args[1])->Value();
  int32_t rc = duckdb_column_type(v0, v1);
  args.GetReturnValue().Set(Number::New(isolate, rc));
}

int32_t column_typeFast(void* p, void* p0, uint32_t p1) {
  duckdb_result* v0 = reinterpret_cast<duckdb_result*>(p0);
  uint32_t v1 = p1;
  return duckdb_column_type(v0, v1);
}
void result_errorSlow(const FunctionCallbackInfo<Value> &args) {
  duckdb_result* v0 = reinterpret_cast<duckdb_result*>((uint64_t)Local<Integer>::Cast(args[0])->Value());
  const char* rc = duckdb_result_error(v0);
  Local<ArrayBuffer> ab = args[1].As<Uint32Array>()->Buffer();
  ((const char**)ab->Data())[0] = rc;
}

void result_errorFast(void* p, void* p0, struct FastApiTypedArray* const p_ret) {
  duckdb_result* v0 = reinterpret_cast<duckdb_result*>(p0);
  const char* r = duckdb_result_error(v0);
  ((const char**)p_ret->data)[0] = r;

}
void value_is_nullSlow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();
  duckdb_result* v0 = reinterpret_cast<duckdb_result*>((uint64_t)Local<Integer>::Cast(args[0])->Value());
  uint32_t v1 = Local<Integer>::Cast(args[1])->Value();
  uint32_t v2 = Local<Integer>::Cast(args[2])->Value();
  uint32_t rc = duckdb_value_is_null(v0, v1, v2);
  args.GetReturnValue().Set(Number::New(isolate, rc));
}

uint32_t value_is_nullFast(void* p, void* p0, uint32_t p1, uint32_t p2) {
  duckdb_result* v0 = reinterpret_cast<duckdb_result*>(p0);
  uint32_t v1 = p1;
  uint32_t v2 = p2;
  return duckdb_value_is_null(v0, v1, v2);
}
void disconnectSlow(const FunctionCallbackInfo<Value> &args) {
  duckdb_connection* v0 = reinterpret_cast<duckdb_connection*>((uint64_t)Local<Integer>::Cast(args[0])->Value());
  duckdb_disconnect(v0);
}

void disconnectFast(void* p, void* p0) {
  duckdb_connection* v0 = reinterpret_cast<duckdb_connection*>(p0);
  duckdb_disconnect(v0);
}
void library_versionSlow(const FunctionCallbackInfo<Value> &args) {

  const char* rc = duckdb_library_version();
  Local<ArrayBuffer> ab = args[0].As<Uint32Array>()->Buffer();
  ((const char**)ab->Data())[0] = rc;
}

void library_versionFast(void* p, struct FastApiTypedArray* const p_ret) {

  const char* r = duckdb_library_version();
  ((const char**)p_ret->data)[0] = r;

}

void Init(Isolate* isolate, Local<ObjectTemplate> target) {
  Local<ObjectTemplate> module = ObjectTemplate::New(isolate);
  SET_FAST_METHOD(isolate, module, "create_config", &pFcreate_config, create_configSlow);
  SET_FAST_METHOD(isolate, module, "open_ext", &pFopen_ext, open_extSlow);
  SET_FAST_METHOD(isolate, module, "set_config", &pFset_config, set_configSlow);
  SET_FAST_METHOD(isolate, module, "connect", &pFconnect, connectSlow);
  SET_FAST_METHOD(isolate, module, "query", &pFquery, querySlow);
  SET_FAST_METHOD(isolate, module, "prepare", &pFprepare, prepareSlow);
  SET_FAST_METHOD(isolate, module, "row_count", &pFrow_count, row_countSlow);
  SET_FAST_METHOD(isolate, module, "column_count", &pFcolumn_count, column_countSlow);
  SET_FAST_METHOD(isolate, module, "value_timestamp", &pFvalue_timestamp, value_timestampSlow);
  SET_FAST_METHOD(isolate, module, "value_uint32", &pFvalue_uint32, value_uint32Slow);
  SET_FAST_METHOD(isolate, module, "value_int32", &pFvalue_int32, value_int32Slow);
  SET_FAST_METHOD(isolate, module, "value_varchar", &pFvalue_varchar, value_varcharSlow);
  SET_FAST_METHOD(isolate, module, "close", &pFclose, closeSlow);
  SET_FAST_METHOD(isolate, module, "destroy_result", &pFdestroy_result, destroy_resultSlow);
  SET_FAST_METHOD(isolate, module, "destroy_prepare", &pFdestroy_prepare, destroy_prepareSlow);
  SET_FAST_METHOD(isolate, module, "execute_prepared", &pFexecute_prepared, execute_preparedSlow);
  SET_FAST_METHOD(isolate, module, "column_name", &pFcolumn_name, column_nameSlow);
  SET_FAST_METHOD(isolate, module, "column_type", &pFcolumn_type, column_typeSlow);
  SET_FAST_METHOD(isolate, module, "result_error", &pFresult_error, result_errorSlow);
  SET_FAST_METHOD(isolate, module, "value_is_null", &pFvalue_is_null, value_is_nullSlow);
  SET_FAST_METHOD(isolate, module, "disconnect", &pFdisconnect, disconnectSlow);
  SET_FAST_METHOD(isolate, module, "library_version", &pFlibrary_version, library_versionSlow);

  SET_VALUE(isolate, module, "DuckDBSuccess", Integer::New(isolate, DuckDBSuccess));
  SET_VALUE(isolate, module, "DuckDBError", Integer::New(isolate, DuckDBError));

  SET_VALUE(isolate, module, "struct_duckdb_config_size", Integer::New(isolate, sizeof(duckdb_config)));
  SET_VALUE(isolate, module, "struct_duckdb_result_size", Integer::New(isolate, sizeof(duckdb_result)));
  SET_VALUE(isolate, module, "struct_duckdb_connection_size", Integer::New(isolate, sizeof(duckdb_connection)));
  SET_VALUE(isolate, module, "struct_duckdb_database_size", Integer::New(isolate, sizeof(duckdb_database)));
  SET_VALUE(isolate, module, "struct_duckdb_prepared_statement_size", Integer::New(isolate, sizeof(duckdb_prepared_statement)));

  SET_MODULE(isolate, target, "duckdb", module);
}
} // namespace duckdb
} // namespace lo

extern "C" {
  void* _register_duckdb() {
    return (void*)lo::duckdb::Init;
  }
}
