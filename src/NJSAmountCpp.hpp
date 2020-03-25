// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from amount.djinni

#ifndef DJINNI_GENERATED_NJSAMOUNT_HPP
#define DJINNI_GENERATED_NJSAMOUNT_HPP


#include "../include/../utils/optional.hpp"
#include "../include/BitcoinLikeNetworkParameters.hpp"
#include "../include/Currency.hpp"
#include "../include/CurrencyUnit.hpp"
#include "../include/EthereumLikeNetworkParameters.hpp"
#include "../include/FormatRules.hpp"
#include "../include/Locale.hpp"
#include "../include/RippleLikeNetworkParameters.hpp"
#include "../include/StellarLikeNetworkParameters.hpp"
#include "../include/TezosLikeNetworkParameters.hpp"
#include "NJSBigIntCpp.hpp"
#include <cstdint>
#include <memory>
#include <string>

#include <nan.h>
#include <node.h>
#include "../include/Amount.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSAmount final {
public:

    static void Initialize(Local<Object> target);
    NJSAmount() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::Amount> &object);
    static Nan::Persistent<ObjectTemplate> Amount_prototype;

private:
    /**
     * Get amount as a BigInt.
     * @return BigInt
     */
    static NAN_METHOD(toBigInt);

    /**
     * Get currency in which amount was computed.
     * @return Currency object
     */
    static NAN_METHOD(getCurrency);

    /**
     * Get currency unit in which amount was computed.
     * @return CurrencyUnit object
     */
    static NAN_METHOD(getUnit);

    /**
     * Convert amount in another currency unit.
     * @param CurrencyUnit object, target currency unit
     * @return Amount object, amount in target currency unit
     */
    static NAN_METHOD(toUnit);

    /** Get an amount that is equal to the given magnitude in the units system. */
    static NAN_METHOD(toMagnitude);

    /**
     * Get amount as string
     * @return string
     */
    static NAN_METHOD(toString);

    /**
     * Get amount as long
     * @return 64 bits integer
     */
    static NAN_METHOD(toLong);

    /**
     * Get amount as double
     * @return double
     */
    static NAN_METHOD(toDouble);

    /** Format an amount with a locale and some formatting rules. */
    static NAN_METHOD(format);

    /** Transform an hexadecimal string into an amount (expressed in the given currency). */
    static NAN_METHOD(fromHex);

    /** Transform a 64-bit number into an amount (expressed in the given currency). */
    static NAN_METHOD(fromLong);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSAMOUNT_HPP
