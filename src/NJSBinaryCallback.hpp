// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_NJSBINARYCALLBACK_HPP
#define DJINNI_GENERATED_NJSBINARYCALLBACK_HPP


#include "../include/../utils/optional.hpp"
#include "../include/Error.hpp"
#include <cstdint>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../include/BinaryCallback.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSBinaryCallback: public ledger::core::api::BinaryCallback {
public:

    static void Initialize(Local<Object> target);

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::BinaryCallback> &object);
    static Nan::Persistent<ObjectTemplate> BinaryCallback_prototype;
    ~NJSBinaryCallback()
    {
        pers_resolver.Reset();
    };
    NJSBinaryCallback(Local<Promise::Resolver> resolver){pers_resolver.Reset(resolver);};

    /**
     * Method triggered when main task complete
     * @params result optional of type T, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    void onCallback(const std::experimental::optional<std::vector<uint8_t>> & result, const std::experimental::optional<Error> & error);

private:
    /**
     * Method triggered when main task complete
     * @params result optional of type T, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    static NAN_METHOD(onCallback);

    static NAN_METHOD(New);

    Nan::Persistent<Promise::Resolver> pers_resolver;
};
#endif //DJINNI_GENERATED_NJSBINARYCALLBACK_HPP
