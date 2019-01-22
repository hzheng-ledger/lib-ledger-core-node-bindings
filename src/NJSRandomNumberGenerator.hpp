// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from random.djinni

#ifndef DJINNI_GENERATED_NJSRANDOMNUMBERGENERATOR_HPP
#define DJINNI_GENERATED_NJSRANDOMNUMBERGENERATOR_HPP


#include <cstdint>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../include/RandomNumberGenerator.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSRandomNumberGenerator: public ledger::core::api::RandomNumberGenerator {
public:

    static void Initialize(Local<Object> target);

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::RandomNumberGenerator> &object);
    static Nan::Persistent<ObjectTemplate> RandomNumberGenerator_prototype;
    ~NJSRandomNumberGenerator()
    {
        njs_impl.Reset();
    };
    NJSRandomNumberGenerator(Local<Object> njs_implementation){njs_impl.Reset(njs_implementation);};

    /**
     * Generates random bytes.
     * @params size number of bytes to generate
     * @return 'size' random bytes
     */
    std::vector<uint8_t> getRandomBytes(int32_t size);

    /**
     * Generates random 32 bits integer.
     * @return random 32 bits integer
     */
    int32_t getRandomInt();

    /**
     * Generates random 64 bits integer.
     * @return random 64 bits integer
     */
    int64_t getRandomLong();

    /**
     * Generates random byte.
     * @return random byte
     */
    int8_t getRandomByte();

private:
    /**
     * Generates random bytes.
     * @params size number of bytes to generate
     * @return 'size' random bytes
     */
    static NAN_METHOD(getRandomBytes);

    /**
     * Generates random 32 bits integer.
     * @return random 32 bits integer
     */
    static NAN_METHOD(getRandomInt);

    /**
     * Generates random 64 bits integer.
     * @return random 64 bits integer
     */
    static NAN_METHOD(getRandomLong);

    /**
     * Generates random byte.
     * @return random byte
     */
    static NAN_METHOD(getRandomByte);

    static NAN_METHOD(New);

    Nan::Persistent<Object> njs_impl;
};
#endif //DJINNI_GENERATED_NJSRANDOMNUMBERGENERATOR_HPP
