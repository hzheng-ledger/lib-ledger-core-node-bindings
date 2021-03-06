// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#ifndef DJINNI_GENERATED_COSMOSLIKEUNBONDING_HPP
#define DJINNI_GENERATED_COSMOSLIKEUNBONDING_HPP

#include <memory>
#include <string>
#include <vector>
#ifndef LIBCORE_EXPORT
    #if defined(_MSC_VER)
       #include <libcore_export.h>
    #else
       #define LIBCORE_EXPORT
    #endif
#endif

namespace ledger { namespace core { namespace api {

class CosmosLikeUnbondingEntry;

/** (Pending) Unbonding data */
class LIBCORE_EXPORT CosmosLikeUnbonding {
public:
    virtual ~CosmosLikeUnbonding() {}

    /** Delegator address */
    virtual std::string getDelegatorAddress() = 0;

    /** Validator address */
    virtual std::string getValidatorAddress() = 0;

    virtual std::vector<std::shared_ptr<CosmosLikeUnbondingEntry>> getEntries() = 0;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_COSMOSLIKEUNBONDING_HPP
