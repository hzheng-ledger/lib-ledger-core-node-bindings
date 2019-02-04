// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from emitter.djinni

#ifndef DJINNI_GENERATED_NJSEVENTBUS_HPP
#define DJINNI_GENERATED_NJSEVENTBUS_HPP


#include "NJSEventReceiver.hpp"
#include "NJSExecutionContext.hpp"
#include <memory>

#include <nan.h>
#include <node.h>
#include "../include/EventBus.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSEventBus final {
public:

    static void Initialize(Local<Object> target);
    NJSEventBus() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::EventBus> &object);
    static Nan::Persistent<ObjectTemplate> EventBus_prototype;

private:
    /**
     * Subscribe an event receiver to the event bus.
     * @param context, ExecutionContext object, execution context in which receiver will be notified
     * @param reveiver, EventReceiver object, receiver that event bu will notify
     */
    static NAN_METHOD(subscribe);

    /**
     * Unsubscribe an event receiver from the event bus.
     * @param receiver, EventReceiver object, receiver to unsubscribe
     */
    static NAN_METHOD(unsubscribe);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSEVENTBUS_HPP
