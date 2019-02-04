// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from database.djinni

#ifndef DJINNI_GENERATED_NJSDATABASEENGINE_HPP
#define DJINNI_GENERATED_NJSDATABASEENGINE_HPP


#include "../include/DatabaseConnectionPool.hpp"
#include "NJSDatabaseConnectionPool.hpp"
#include <cstdint>
#include <memory>
#include <string>

#include <nan.h>
#include <node.h>
#include "../include/DatabaseEngine.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSDatabaseEngine: public ledger::core::api::DatabaseEngine {
public:

    static void Initialize(Local<Object> target);

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::DatabaseEngine> &object);
    static Nan::Persistent<ObjectTemplate> DatabaseEngine_prototype;
    ~NJSDatabaseEngine()
    {
        njs_impl.Reset();
    };
    NJSDatabaseEngine(Local<Object> njs_implementation){njs_impl.Reset(njs_implementation);};

    /**
     * Open a connection to a database using the given database name.
     * @params databaseName The name of the database to open
     * @return A connection pool to the given database
     */
    std::shared_ptr<DatabaseConnectionPool> connect(const std::string & databaseName);

    /**
     * Get the maximum number of concurrent connection on a single database.
     * @return the maximum number of concurrent connection that the engine is able to open on a single database.
     */
    int32_t getPoolSize();

private:
    /**
     * Open a connection to a database using the given database name.
     * @params databaseName The name of the database to open
     * @return A connection pool to the given database
     */
    static NAN_METHOD(connect);

    /**
     * Get the maximum number of concurrent connection on a single database.
     * @return the maximum number of concurrent connection that the engine is able to open on a single database.
     */
    static NAN_METHOD(getPoolSize);

    static NAN_METHOD(New);

    Nan::Persistent<Object> njs_impl;
};
#endif //DJINNI_GENERATED_NJSDATABASEENGINE_HPP
