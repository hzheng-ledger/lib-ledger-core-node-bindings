// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from http_client.djinni

#include "NJSHttpUrlConnection.hpp"
#include "NJSObjectWrapper.hpp"

using namespace v8;
using namespace node;
using namespace std;

int32_t NJSHttpUrlConnection::getStatusCode()
{
    Nan::HandleScope scope;
    //Wrap parameters
    Handle<Value> args[1];
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSHttpUrlConnection::getStatusCode fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("getStatusCode").ToLocalChecked()).ToLocalChecked();
    auto result_getStatusCode = Nan::CallAsFunction(calling_funtion->ToObject(),local_njs_impl,0,args);
    if(result_getStatusCode.IsEmpty())
    {
        Nan::ThrowError("NJSHttpUrlConnection::getStatusCode call failed");
    }
    auto checkedResult_getStatusCode = result_getStatusCode.ToLocalChecked();
    auto fResult_getStatusCode = Nan::To<int32_t>(checkedResult_getStatusCode).FromJust();
    return fResult_getStatusCode;
}

std::string NJSHttpUrlConnection::getStatusText()
{
    Nan::HandleScope scope;
    //Wrap parameters
    Handle<Value> args[1];
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSHttpUrlConnection::getStatusText fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("getStatusText").ToLocalChecked()).ToLocalChecked();
    auto result_getStatusText = Nan::CallAsFunction(calling_funtion->ToObject(),local_njs_impl,0,args);
    if(result_getStatusText.IsEmpty())
    {
        Nan::ThrowError("NJSHttpUrlConnection::getStatusText call failed");
    }
    auto checkedResult_getStatusText = result_getStatusText.ToLocalChecked();
    String::Utf8Value string_fResult_getStatusText(checkedResult_getStatusText->ToString());
    auto fResult_getStatusText = std::string(*string_fResult_getStatusText);
    return fResult_getStatusText;
}

std::unordered_map<std::string, std::string> NJSHttpUrlConnection::getHeaders()
{
    Nan::HandleScope scope;
    //Wrap parameters
    Handle<Value> args[1];
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSHttpUrlConnection::getHeaders fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("getHeaders").ToLocalChecked()).ToLocalChecked();
    auto result_getHeaders = Nan::CallAsFunction(calling_funtion->ToObject(),local_njs_impl,0,args);
    if(result_getHeaders.IsEmpty())
    {
        Nan::ThrowError("NJSHttpUrlConnection::getHeaders call failed");
    }
    auto checkedResult_getHeaders = result_getHeaders.ToLocalChecked();
    unordered_map<std::string, std::string> fResult_getHeaders;
    Local<Map> fResult_getHeaders_container = Local<Map>::Cast(checkedResult_getHeaders);
    auto fResult_getHeaders_prop_names = fResult_getHeaders_container->GetPropertyNames();
    for(uint32_t fResult_getHeaders_id = 0; fResult_getHeaders_id < fResult_getHeaders_prop_names->Length(); fResult_getHeaders_id++)
    {
        auto key = fResult_getHeaders_prop_names->Get(fResult_getHeaders_id);
        auto fResult_getHeaders_key_ctx = fResult_getHeaders_container->Get(Nan::GetCurrentContext(), key).ToLocalChecked();
        if(key->IsString() && fResult_getHeaders_key_ctx->IsString())
        {
            String::Utf8Value string_fResult_getHeaders_key(key->ToString());
            auto fResult_getHeaders_key = std::string(*string_fResult_getHeaders_key);
            String::Utf8Value string_fResult_getHeaders_value(fResult_getHeaders_key_ctx->ToString());
            auto fResult_getHeaders_value = std::string(*string_fResult_getHeaders_value);
            fResult_getHeaders.emplace(fResult_getHeaders_key,fResult_getHeaders_value);
        }
    }

    return fResult_getHeaders;
}

HttpReadBodyResult NJSHttpUrlConnection::readBody()
{
    Nan::HandleScope scope;
    //Wrap parameters
    Handle<Value> args[1];
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSHttpUrlConnection::readBody fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("readBody").ToLocalChecked()).ToLocalChecked();
    auto result_readBody = Nan::CallAsFunction(calling_funtion->ToObject(),local_njs_impl,0,args);
    if(result_readBody.IsEmpty())
    {
        Nan::ThrowError("NJSHttpUrlConnection::readBody call failed");
    }
    auto checkedResult_readBody = result_readBody.ToLocalChecked();

    auto field_fResult_readBody_1 = Nan::Get(checkedResult_readBody->ToObject(), Nan::New<String>("error").ToLocalChecked()).ToLocalChecked();
    auto fResult_readBody_1 = std::experimental::optional<Error>();
    if(!field_fResult_readBody_1->IsNull() && !field_fResult_readBody_1->IsUndefined())
    {

        auto field_opt_fResult_readBody_1_1 = Nan::Get(field_fResult_readBody_1->ToObject(), Nan::New<String>("code").ToLocalChecked()).ToLocalChecked();
        auto opt_fResult_readBody_1_1 = (ledger::core::api::ErrorCode)Nan::To<int>(field_opt_fResult_readBody_1_1).FromJust();

        auto field_opt_fResult_readBody_1_2 = Nan::Get(field_fResult_readBody_1->ToObject(), Nan::New<String>("message").ToLocalChecked()).ToLocalChecked();
        String::Utf8Value string_opt_fResult_readBody_1_2(field_opt_fResult_readBody_1_2->ToString());
        auto opt_fResult_readBody_1_2 = std::string(*string_opt_fResult_readBody_1_2);
        Error opt_fResult_readBody_1(opt_fResult_readBody_1_1, opt_fResult_readBody_1_2);

        fResult_readBody_1.emplace(opt_fResult_readBody_1);
    }


    auto field_fResult_readBody_2 = Nan::Get(checkedResult_readBody->ToObject(), Nan::New<String>("data").ToLocalChecked()).ToLocalChecked();
    auto fResult_readBody_2 = std::experimental::optional<std::vector<uint8_t>>();
    if(!field_fResult_readBody_2->IsNull() && !field_fResult_readBody_2->IsUndefined())
    {
        vector<uint8_t> opt_fResult_readBody_2;
        Local<Array> opt_fResult_readBody_2_container = Local<Array>::Cast(field_fResult_readBody_2);
        for(uint32_t opt_fResult_readBody_2_id = 0; opt_fResult_readBody_2_id < opt_fResult_readBody_2_container->Length(); opt_fResult_readBody_2_id++)
        {
            if(opt_fResult_readBody_2_container->Get(opt_fResult_readBody_2_id)->IsUint32())
            {
                auto opt_fResult_readBody_2_elem = Nan::To<uint32_t>(opt_fResult_readBody_2_container->Get(opt_fResult_readBody_2_id)).FromJust();
                opt_fResult_readBody_2.emplace_back(opt_fResult_readBody_2_elem);
            }
        }

        fResult_readBody_2.emplace(opt_fResult_readBody_2);
    }

    HttpReadBodyResult fResult_readBody(fResult_readBody_1, fResult_readBody_2);

    return fResult_readBody;
}

NAN_METHOD(NJSHttpUrlConnection::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSHttpUrlConnection function can only be called as constructor (use New)");
    }

    if(!info[0]->IsObject())
    {
        return Nan::ThrowError("NJSHttpUrlConnection::New requires an implementation from node");
    }
    auto node_instance = std::make_shared<NJSHttpUrlConnection>(info[0]->ToObject());
    djinni::js::ObjectWrapper<NJSHttpUrlConnection>::Wrap(node_instance, info.This());
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSHttpUrlConnection::HttpUrlConnection_prototype;

Local<Object> NJSHttpUrlConnection::wrap(const std::shared_ptr<ledger::core::api::HttpUrlConnection> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(HttpUrlConnection_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        djinni::js::ObjectWrapper<ledger::core::api::HttpUrlConnection>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSHttpUrlConnection::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

void NJSHttpUrlConnection::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSHttpUrlConnection::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSHttpUrlConnection").ToLocalChecked());
    Nan::SetPrototypeMethod(func_template,"New", New);
    //Set object prototype
    HttpUrlConnection_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSHttpUrlConnection").ToLocalChecked(), func_template->GetFunction());
}
