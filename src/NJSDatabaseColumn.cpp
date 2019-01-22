// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from database.djinni

#include "NJSDatabaseColumn.hpp"
#include "NJSObjectWrapper.hpp"

using namespace v8;
using namespace node;
using namespace std;

DatabaseValueType NJSDatabaseColumn::getType()
{
    Nan::HandleScope scope;
    //Wrap parameters
    Handle<Value> args[1];
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSDatabaseColumn::getType fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("getType").ToLocalChecked()).ToLocalChecked();
    auto result_getType = Nan::CallAsFunction(calling_funtion->ToObject(),local_njs_impl,0,args);
    if(result_getType.IsEmpty())
    {
        Nan::ThrowError("NJSDatabaseColumn::getType call failed");
    }
    auto checkedResult_getType = result_getType.ToLocalChecked();
    auto fResult_getType = (ledger::core::api::DatabaseValueType)Nan::To<int>(checkedResult_getType).FromJust();
    return fResult_getType;
}

std::string NJSDatabaseColumn::getName()
{
    Nan::HandleScope scope;
    //Wrap parameters
    Handle<Value> args[1];
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSDatabaseColumn::getName fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("getName").ToLocalChecked()).ToLocalChecked();
    auto result_getName = Nan::CallAsFunction(calling_funtion->ToObject(),local_njs_impl,0,args);
    if(result_getName.IsEmpty())
    {
        Nan::ThrowError("NJSDatabaseColumn::getName call failed");
    }
    auto checkedResult_getName = result_getName.ToLocalChecked();
    String::Utf8Value string_fResult_getName(checkedResult_getName->ToString());
    auto fResult_getName = std::string(*string_fResult_getName);
    return fResult_getName;
}

NAN_METHOD(NJSDatabaseColumn::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSDatabaseColumn function can only be called as constructor (use New)");
    }

    if(!info[0]->IsObject())
    {
        return Nan::ThrowError("NJSDatabaseColumn::New requires an implementation from node");
    }
    auto node_instance = std::make_shared<NJSDatabaseColumn>(info[0]->ToObject());
    djinni::js::ObjectWrapper<NJSDatabaseColumn>::Wrap(node_instance, info.This());
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSDatabaseColumn::DatabaseColumn_prototype;

Local<Object> NJSDatabaseColumn::wrap(const std::shared_ptr<ledger::core::api::DatabaseColumn> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(DatabaseColumn_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        djinni::js::ObjectWrapper<ledger::core::api::DatabaseColumn>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSDatabaseColumn::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

void NJSDatabaseColumn::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSDatabaseColumn::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSDatabaseColumn").ToLocalChecked());
    Nan::SetPrototypeMethod(func_template,"New", New);
    //Set object prototype
    DatabaseColumn_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSDatabaseColumn").ToLocalChecked(), func_template->GetFunction());
}
