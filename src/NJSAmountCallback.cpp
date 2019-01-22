// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#include "NJSAmountCallback.hpp"
#include "NJSObjectWrapper.hpp"

using namespace v8;
using namespace node;
using namespace std;

void NJSAmountCallback::onCallback(const std::shared_ptr<Amount> & result, const std::experimental::optional<Error> & error)
{
    Nan::HandleScope scope;
    //Wrap parameters
    auto arg_0 = NJSAmount::wrap(result);


    Local<Value> arg_1;
    if(error)
    {
        auto arg_1_optional = (error).value();
        auto arg_1_tmp = Nan::New<Object>();
        auto arg_1_tmp_1 = Nan::New<Integer>((int)arg_1_optional.code);
        Nan::DefineOwnProperty(arg_1_tmp, Nan::New<String>("code").ToLocalChecked(), arg_1_tmp_1);
        auto arg_1_tmp_2 = Nan::New<String>(arg_1_optional.message).ToLocalChecked();
        Nan::DefineOwnProperty(arg_1_tmp, Nan::New<String>("message").ToLocalChecked(), arg_1_tmp_2);

        arg_1 = arg_1_tmp;
    }

    auto local_resolver = Nan::New<Promise::Resolver>(pers_resolver);
    if(error)
    {
        auto rejected = local_resolver->Reject(Nan::GetCurrentContext(), arg_1);
        rejected.FromJust();
    }
    else
    {
        auto resolve = local_resolver->Resolve(Nan::GetCurrentContext(), arg_0);
        resolve.FromJust();
    }
}

NAN_METHOD(NJSAmountCallback::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSAmountCallback function can only be called as constructor (use New)");
    }

    auto resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    auto node_instance = std::make_shared<NJSAmountCallback>(resolver);
    djinni::js::ObjectWrapper<NJSAmountCallback>::Wrap(node_instance, info.This());
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSAmountCallback::AmountCallback_prototype;

Local<Object> NJSAmountCallback::wrap(const std::shared_ptr<ledger::core::api::AmountCallback> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(AmountCallback_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        djinni::js::ObjectWrapper<ledger::core::api::AmountCallback>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSAmountCallback::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

void NJSAmountCallback::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSAmountCallback::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSAmountCallback").ToLocalChecked());
    Nan::SetPrototypeMethod(func_template,"New", New);
    //Set object prototype
    AmountCallback_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSAmountCallback").ToLocalChecked(), func_template->GetFunction());
}
