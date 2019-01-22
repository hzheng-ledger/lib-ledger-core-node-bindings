// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from configuration.djinni

#include "NJSSynchronizationEnginesCpp.hpp"
#include "NJSObjectWrapper.hpp"

using namespace v8;
using namespace node;
using namespace std;


NAN_METHOD(NJSSynchronizationEngines::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSSynchronizationEngines function can only be called as constructor (use New)");
    }
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSSynchronizationEngines::SynchronizationEngines_prototype;

Local<Object> NJSSynchronizationEngines::wrap(const std::shared_ptr<ledger::core::api::SynchronizationEngines> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(SynchronizationEngines_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        djinni::js::ObjectWrapper<ledger::core::api::SynchronizationEngines>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSSynchronizationEngines::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSSynchronizationEngines::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<SynchronizationEngines>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSSynchronizationEngines::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSSynchronizationEngines::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSSynchronizationEngines").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);
    //Set object prototype
    SynchronizationEngines_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSSynchronizationEngines").ToLocalChecked(), func_template->GetFunction());
}
