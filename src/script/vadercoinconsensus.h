// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2018 The Vadercoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef VADERCOIN_SCRIPT_VADERCOINCONSENSUS_H
#define VADERCOIN_SCRIPT_VADERCOINCONSENSUS_H

#include <stdint.h>

#if defined(BUILD_VADERCOIN_INTERNAL) && defined(HAVE_CONFIG_H)
#include <config/vadercoin-config.h>
  #if defined(_WIN32)
    #if defined(HAVE_DLLEXPORT_ATTRIBUTE)
      #define EXPORT_SYMBOL __declspec(dllexport)
    #else
      #define EXPORT_SYMBOL
    #endif
  #elif defined(HAVE_DEFAULT_VISIBILITY_ATTRIBUTE)
    #define EXPORT_SYMBOL __attribute__ ((visibility ("default")))
  #endif
#elif defined(MSC_VER) && !defined(STATIC_LIBVADERCOINCONSENSUS)
  #define EXPORT_SYMBOL __declspec(dllimport)
#endif

#ifndef EXPORT_SYMBOL
  #define EXPORT_SYMBOL
#endif

#ifdef __cplusplus
extern "C" {
#endif

#define VADERCOINCONSENSUS_API_VER 1

typedef enum vadercoinconsensus_error_t
{
    vadercoinconsensus_ERR_OK = 0,
    vadercoinconsensus_ERR_TX_INDEX,
    vadercoinconsensus_ERR_TX_SIZE_MISMATCH,
    vadercoinconsensus_ERR_TX_DESERIALIZE,
    vadercoinconsensus_ERR_AMOUNT_REQUIRED,
    vadercoinconsensus_ERR_INVALID_FLAGS,
} vadercoinconsensus_error;

/** Script verification flags */
enum
{
    vadercoinconsensus_SCRIPT_FLAGS_VERIFY_NONE                = 0,
    vadercoinconsensus_SCRIPT_FLAGS_VERIFY_P2SH                = (1U << 0), // evaluate P2SH (BIP16) subscripts
    vadercoinconsensus_SCRIPT_FLAGS_VERIFY_DERSIG              = (1U << 2), // enforce strict DER (BIP66) compliance
    vadercoinconsensus_SCRIPT_FLAGS_VERIFY_NULLDUMMY           = (1U << 4), // enforce NULLDUMMY (BIP147)
    vadercoinconsensus_SCRIPT_FLAGS_VERIFY_CHECKLOCKTIMEVERIFY = (1U << 9), // enable CHECKLOCKTIMEVERIFY (BIP65)
    vadercoinconsensus_SCRIPT_FLAGS_VERIFY_CHECKSEQUENCEVERIFY = (1U << 10), // enable CHECKSEQUENCEVERIFY (BIP112)
    vadercoinconsensus_SCRIPT_FLAGS_VERIFY_WITNESS             = (1U << 11), // enable WITNESS (BIP141)
    vadercoinconsensus_SCRIPT_FLAGS_VERIFY_ALL                 = vadercoinconsensus_SCRIPT_FLAGS_VERIFY_P2SH | vadercoinconsensus_SCRIPT_FLAGS_VERIFY_DERSIG |
                                                                vadercoinconsensus_SCRIPT_FLAGS_VERIFY_NULLDUMMY | vadercoinconsensus_SCRIPT_FLAGS_VERIFY_CHECKLOCKTIMEVERIFY |
                                                                vadercoinconsensus_SCRIPT_FLAGS_VERIFY_CHECKSEQUENCEVERIFY | vadercoinconsensus_SCRIPT_FLAGS_VERIFY_WITNESS
};

/// Returns 1 if the input nIn of the serialized transaction pointed to by
/// txTo correctly spends the scriptPubKey pointed to by scriptPubKey under
/// the additional constraints specified by flags.
/// If not nullptr, err will contain an error/success code for the operation
EXPORT_SYMBOL int vadercoinconsensus_verify_script(const unsigned char *scriptPubKey, unsigned int scriptPubKeyLen,
                                                 const unsigned char *txTo        , unsigned int txToLen,
                                                 unsigned int nIn, unsigned int flags, vadercoinconsensus_error* err);

EXPORT_SYMBOL int vadercoinconsensus_verify_script_with_amount(const unsigned char *scriptPubKey, unsigned int scriptPubKeyLen, int64_t amount,
                                    const unsigned char *txTo        , unsigned int txToLen,
                                    unsigned int nIn, unsigned int flags, vadercoinconsensus_error* err);

EXPORT_SYMBOL unsigned int vadercoinconsensus_version();

#ifdef __cplusplus
} // extern "C"
#endif

#undef EXPORT_SYMBOL

#endif // VADERCOIN_SCRIPT_VADERCOINCONSENSUS_H
