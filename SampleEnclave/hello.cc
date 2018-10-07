#include "App/App.h"
#include <nan.h>


void Method(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  //info.GetReturnValue().Set(Nan::New(getrand()).ToLocalChecked());
  info.GetReturnValue().Set(Nan::New(getrand()));
}

void Init(v8::Local<v8::Object> exports) {
  exports->Set(Nan::New("hello").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(Method)->GetFunction());
}

NODE_MODULE(hello, Init)
