// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#include "NJSBitcoinLikeBlockCpp.hpp"
#include "NJSObjectWrapper.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSBitcoinLikeBlock::getHash) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeBlock::getHash needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<BitcoinLikeBlock>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeBlock::getHash : implementation of BitcoinLikeBlock is not valid");
    }

    auto result = cpp_impl->getHash();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeBlock::getHeight) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeBlock::getHeight needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<BitcoinLikeBlock>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeBlock::getHeight : implementation of BitcoinLikeBlock is not valid");
    }

    auto result = cpp_impl->getHeight();

    //Wrap result in node object
    auto arg_0 = Nan::New<Number>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeBlock::getTime) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeBlock::getTime needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<BitcoinLikeBlock>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeBlock::getTime : implementation of BitcoinLikeBlock is not valid");
    }

    auto result = cpp_impl->getTime();

    //Wrap result in node object
    auto date_arg_0 = chrono::duration_cast<chrono::milliseconds>(result.time_since_epoch()).count();
    auto arg_0 = Nan::New<Date>(date_arg_0).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}

NAN_METHOD(NJSBitcoinLikeBlock::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSBitcoinLikeBlock function can only be called as constructor (use New)");
    }
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSBitcoinLikeBlock::BitcoinLikeBlock_prototype;

Local<Object> NJSBitcoinLikeBlock::wrap(const std::shared_ptr<ledger::core::api::BitcoinLikeBlock> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(BitcoinLikeBlock_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeBlock>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSBitcoinLikeBlock::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSBitcoinLikeBlock::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<BitcoinLikeBlock>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSBitcoinLikeBlock::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSBitcoinLikeBlock::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSBitcoinLikeBlock").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"getHash", getHash);
    Nan::SetPrototypeMethod(func_template,"getHeight", getHeight);
    Nan::SetPrototypeMethod(func_template,"getTime", getTime);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);
    //Set object prototype
    BitcoinLikeBlock_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSBitcoinLikeBlock").ToLocalChecked(), func_template->GetFunction());
}
